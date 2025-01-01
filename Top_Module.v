`timescale 1ns / 1ps 

module UART_Matrices_Receiver (
    input wire clk,             // System clock (e.g., 100 MHz)
    input wire reset,           // Reset signal
    input wire rx_data,         // Serial input data
	 output reg [7:0] mode_byte,
	 output reg [799:0] matrix_a_flat,
	 output reg [799:0] matrix_b_flat,
	 output reg mats_received
);

    // State definitions
    parameter IDLE = 3'd0;
    parameter RECEIVE_MODE = 3'd1;
    parameter RECEIVE_MATRIX_A = 3'd2;
    parameter RECEIVE_MATRIX_B = 3'd3;
	 parameter FLATTEN_MATRICES = 3'd4;
	 parameter DONE = 3'd5;

    reg [2:0] current_state, next_state;

    // UART data receiver signals
    wire [7:0] rx_data_internal;
    wire rx_status;

    // Baud rate generator signals
    wire bclk;
    wire bclk_x8;

    // Counters and indices for matrix storage
    reg [3:0] row_counter;
    reg [3:0] col_counter;

    // Mode byte and completion signal
	 reg mode_saved;
	 
	 reg [7:0] matrix_a [9:0][9:0];
	 reg [7:0] matrix_b [9:0][9:0];
	 
	 reg matrix_a_done, matrix_b_done;
	 
	 integer k, l;
	 initial begin
        for (k = 0; k < 10; k = k + 1) begin
            for (l = 0; l < 10; l = l + 1) begin
                matrix_a[k][l] = 8'd0;
                matrix_b[k][l] = 8'd0;
            end
        end
    end

    // Instantiate baud rate generator
    Baud_Rate_Generator baud_gen (
        .clk(clk),
        .reset(reset),
        .sel_baud(2'b00), // Select 9600 baud rate
        .bclk(bclk),
        .bclk_x8(bclk_x8)
    );

    // Instantiate receiver module
    Receiver uart_rx (
        .clk(bclk_x8), // Use bclk_x8 as the clock for the receiver
        .reset(reset),
        .rx_data(rx_data),
        .d_out(rx_data_internal),
        .rx_status(rx_status)
    );

    // State transition logic
    always @(posedge clk or posedge reset) begin
        if (reset) begin
            current_state <= IDLE;
        end else begin
            current_state <= next_state;
        end
    end

    // Next state and output logic
    always @(*) begin
        next_state = current_state;
        case (current_state)
            IDLE: begin
                if (rx_status) begin
                    next_state = RECEIVE_MODE;
                end
            end
            RECEIVE_MODE: begin
                if (mode_saved) begin
                    next_state = RECEIVE_MATRIX_A;
                end
            end
            RECEIVE_MATRIX_A: begin
                if (matrix_a_done) begin
                    next_state = RECEIVE_MATRIX_B;
                end
            end
            RECEIVE_MATRIX_B: begin
                if (matrix_b_done) begin
                    next_state = FLATTEN_MATRICES;
                end
            end
				FLATTEN_MATRICES: begin
                next_state = DONE;
				end
				DONE: begin
					 next_state = IDLE;
				end
        endcase
    end
	 
    // Matrix receiving and storage logic
    always @(posedge bclk_x8 or posedge reset) begin
        if (reset) begin
            row_counter <= 0;
            col_counter <= 0;
            mode_byte <= 0;
				mode_saved <= 0;
				matrix_a_done <= 0;
				matrix_b_done <= 0;
//				for (k = 0; k < 10; k = k + 1) begin
//					for (l = 0; l < 10; l = l + 1) begin
//						 matrix_a[k][l] <= 8'd0;
//						 matrix_b[k][l] <= 8'd0;
//					end
//			   end
        end else begin
            case (current_state)
					 IDLE: begin
						  row_counter <= 0;
                    col_counter <= 0;
						  mode_saved <= 0;
						  matrix_a_done <= 0;
						  matrix_b_done <= 0;
					 end
                RECEIVE_MODE: begin
						  if (rx_status) begin
							  mode_byte <= rx_data_internal;
							  mode_saved <= 1;
						  end
                end
                RECEIVE_MATRIX_A: begin
						  if (rx_status) begin
							  if ((mode_byte == 8'd3 && row_counter < 3 && col_counter < 3) ||
									(mode_byte == 8'd10)) begin
									matrix_a[row_counter][col_counter] <= rx_data_internal;
							  end
							  
							  
							  if (col_counter == (mode_byte - 1)) begin
									col_counter <= 0;
									if (row_counter == (mode_byte - 1)) begin
										 row_counter <= 0;
										 matrix_a_done <= 1;
									end else begin
										 row_counter <= row_counter + 1;
									end
							  end else begin
									col_counter <= col_counter + 1;
							  end
						  end
                end
                RECEIVE_MATRIX_B: begin
						  if (rx_status) begin
							  if ((mode_byte == 8'd3 && row_counter < 3 && col_counter < 3) ||
									(mode_byte == 8'd10)) begin
									matrix_b[row_counter][col_counter] <= rx_data_internal;
							  end
							  if (col_counter == (mode_byte - 1)) begin
									col_counter <= 0;
									if (row_counter == (mode_byte - 1)) begin
										 row_counter <= 0;
										 matrix_b_done <= 1;
									end else begin
										 row_counter <= row_counter + 1;
									end
							  end else begin
									col_counter <= col_counter + 1;
							  end
						  end
                end
            endcase
        end
    end
	 
	 always @(posedge clk or posedge reset) begin
        if (reset) begin
				mats_received <= 0;
        end else begin
            case (current_state)
					 IDLE: begin
						  mats_received <= 0;
					 end
					 FLATTEN_MATRICES: begin
						  for (k = 0; k < 10; k = k + 1) begin
								for (l = 0; l < 10; l = l + 1) begin
									 matrix_a_flat[(k * 10 + l) * 8 +: 8] <= matrix_a[k][l];
									 matrix_b_flat[(k * 10 + l) * 8 +: 8] <= matrix_b[k][l];
								end
						  end
				    end
					 DONE: begin
						  mats_received <= 1;
					 end
            endcase
        end
    end

endmodule
