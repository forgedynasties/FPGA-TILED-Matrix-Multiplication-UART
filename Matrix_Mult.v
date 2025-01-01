`timescale 1ns / 1ps

module top_module (
    input clk,
    input rst,
    input start,
	 input rx_data,
	 input [3:0] x,
	 input is_b,
    output reg done,
	 output reg [7:0] element,
	 output tx
);

    // Parameters for FSM states
    parameter IDLE = 3'd0;
	 parameter RECEIVE_MATRICES = 3'd1;
	 parameter RE_MATRICES = 3'd2;
    parameter LOAD_COMPUTE = 3'd3;
    parameter WRITE_TILE = 3'd4;
    parameter NEXT_TILE = 3'd5;
    parameter TRANSMIT_RESULT = 3'd6;
	 parameter DONE = 3'd7;

    reg [2:0] state, next_state;

    // Memory arrays for matrices A, B, and R
    reg [7:0] mem_A[9:0][9:0];
    reg [7:0] mem_B[9:0][9:0];
    reg [7:0] mem_R[9:0][9:0];

    // MAC grid signals
    reg [7:0] a[4:0][4:0];
    reg [7:0] b[4:0][4:0];
    wire [7:0] acc[4:0][4:0];
    reg mac_enable[4:0][4:0];
    reg reset_acc[4:0][4:0];
    integer k, l, m, n;

    // Control variables
    reg [1:0] tile_row, tile_col; // Tile indices (0 to 1 for 5x5 grid in 10x10 case)
    reg [3:0] cycle_count;        // Counts cycles for 10 MAC operations
    wire [7:0] active_size;        // Active size (3 or 10 based on dim)

    // Signals for UART_Matrices_Receiver module
    wire [799:0] matrix_a_flat;  // Flattened Matrix A
    wire [799:0] matrix_b_flat;  // Flattened Matrix B
    wire mats_received;          // Matrices received flag
	 
	 // Signals for Transmitter
	 reg [7:0] tx_data;
	 reg load;
	 wire tx_status;
	 reg result_transmitted;

    // Instantiate the UART_Matrices_Receiver module
    UART_Matrices_Receiver receiver (
        .clk(clk),               // Connect system clock
        .reset(rst),           // Connect reset signal
        .rx_data(rx_data),       // Connect serial input data
		  .mode_byte(active_size),
        .matrix_a_flat(matrix_a_flat), // Output flattened Matrix A
        .matrix_b_flat(matrix_b_flat), // Output flattened Matrix B
        .mats_received(mats_received)  // Output matrices received flag
    );
	 
	 
	 // Instantiate the Transmitter module
	 Transmitter transmitter(
        .d_in(tx_data),   // 8-bit parallel data input
		  .clk(clk),         // Baud clock input
		  .load(load),         // Load signal for new data
		  .reset(rst),        // Reset signal
		  .tx_out(tx),       // Serial data output
		  .tx_status(tx_status)     // Status: 1 if ready to accept new data
	 ); 
	 
    // Initialize memories
    initial begin
        for (k = 0; k < 10; k = k + 1) begin
            for (l = 0; l < 10; l = l + 1) begin
                mem_R[k][l] = 8'd0;
                mem_A[k][l] = 8'd0;
                mem_B[k][l] = 8'd0;
            end
        end
    end

    generate
        genvar i, j;
        for (i = 0; i < 5; i = i + 1) begin : mac_row
            for (j = 0; j < 5; j = j + 1) begin : mac_col
                MAC mac_pe (
                    .clk(clk),
                    .rst(rst),
                    .a(a[i][j]),
                    .b(b[i][j]),
                    .mac_enable(mac_enable[i][j]),
                    .reset_acc(reset_acc[i][j]),
                    .accumulator(acc[i][j])
                );
            end
        end
    endgenerate

    // FSM State Transitions
    always @(posedge clk or posedge rst) begin
        if (rst)
            state <= IDLE;
        else
            state <= next_state;
    end

    always @(*) begin
        case (state)
            IDLE:
                if (start)
                    next_state = RECEIVE_MATRICES;
                else
                    next_state = IDLE;
			   RECEIVE_MATRICES:
				    if (mats_received)
						  next_state = RE_MATRICES;
					 else
						  next_state = RECEIVE_MATRICES;
			   RE_MATRICES:
					 next_state = LOAD_COMPUTE;
            LOAD_COMPUTE:
                if (cycle_count == active_size)
                    next_state = WRITE_TILE;
                else
                    next_state = LOAD_COMPUTE;
            WRITE_TILE:
                if (active_size == 8'd3 || (tile_row == 2'd1 && tile_col == 2'd1))
                    next_state = TRANSMIT_RESULT;
                else
                    next_state = NEXT_TILE;
            NEXT_TILE:
                next_state = LOAD_COMPUTE;
				TRANSMIT_RESULT:
					 if (result_transmitted && tx_status)
						  next_state = DONE;
					 else
                    next_state = TRANSMIT_RESULT;
            DONE:
                next_state = DONE;
            default:
                next_state = IDLE;
        endcase
    end

    // FSM Output Logic
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            done <= 1'b0;
            cycle_count <= 4'd0;
            tile_row <= 2'd0;
            tile_col <= 2'd0;
				result_transmitted <= 0; 
				load <= 0;
			   m <= 0;
				n <= 0;
        end else begin
            case (state)
                IDLE: begin
                    done <= 1'b0;
                    cycle_count <= 4'd0;
                    tile_row <= 2'd0;
                    tile_col <= 2'd0;
						  result_transmitted <= 0; 
						  load <= 0;

                    for (k = 0; k < 10; k = k + 1) begin
                        for (l = 0; l < 10; l = l + 1) begin
                            mem_R[k][l] <= 8'd0;
                        end
                    end
                end
					 RE_MATRICES: begin
						  for (k = 0; k < 10; k = k + 1) begin
								for (l = 0; l < 10; l = l + 1) begin
									 mem_A[k][l] <= matrix_a_flat[(k * 10 + l) * 8 +: 8];
									 mem_B[k][l] <= matrix_b_flat[(k * 10 + l) * 8 +: 8];
								end
						  end
					 end
                LOAD_COMPUTE: begin
                    // Feed data to MAC PEs and enable them
                    for (k = 0; k < 5; k = k + 1) begin
                        for (l = 0; l < 5; l = l + 1) begin
                            if (k < active_size && l < active_size) begin
                                a[k][l] <= mem_A[k + tile_row * 5][cycle_count];
                                b[k][l] <= mem_B[cycle_count][l + tile_col * 5];
                                mac_enable[k][l] <= 1'b1;
                            end else begin
                                mac_enable[k][l] <= 1'b0; // Disable unused MACs
                            end
                        end
                    end
                    cycle_count <= cycle_count + 1;
                end
                WRITE_TILE: begin
                    // Write results of current tile to memory R
                    for (k = 0; k < 5; k = k + 1) begin
                        for (l = 0; l < 5; l = l + 1) begin
                            if (k < active_size && l < active_size) begin
                                mem_R[k + tile_row * 5][l + tile_col * 5] <= acc[k][l];
                                mac_enable[k][l] <= 1'b0;
                                reset_acc[k][l] <= 1'b1; // Reset accumulators
                            end
                        end
                    end
                end
                NEXT_TILE: begin
                    for (k = 0; k < 5; k = k + 1) begin
                        for (l = 0; l < 5; l = l + 1) begin
                            reset_acc[k][l] <= 1'b0;
                        end
                    end
                    // Move to the next tile
                    if (tile_col == 2'd1) begin
                        tile_col <= 2'd0;
                        tile_row <= tile_row + 1;
                    end else begin
                        tile_col <= tile_col + 1;
                    end
                    cycle_count <= 4'd0;
                end
					 TRANSMIT_RESULT: begin
						  if (tx_status) begin
								if (load) begin
									load <= 0;
									tx_data <= mem_R[m][n];
									if (n == (active_size - 1)) begin
										n <= 0;
										if (m == (active_size - 1)) begin
											 m <= 0;
											 result_transmitted <= 1; 
										end else begin
											 m <= m + 1;
										end
									end else begin
										n <= n + 1;
									end 
								end else
									load <= 1;
						  end else begin
							   load <= 0;
						  end
					 end
                DONE: begin
                    for (k = 0; k < 5; k = k + 1) begin
                        for (l = 0; l < 5; l = l + 1) begin
                            reset_acc[k][l] <= 1'b0;
                        end
                    end
                    done <= 1'b1;
                end
            endcase
        end
    end
	 
	 always @(posedge clk) begin
		if (is_b)
			element <= mem_B[x][x];
		else
			element <= mem_R[x][x];
	 end

endmodule
