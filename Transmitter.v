`timescale 1ns / 1ps

module Transmitter (
    input [7:0] d_in,   // 8-bit parallel data input
    input clk,         // Baud clock input
    input load,         // Load signal for new data
    input reset,        // Reset signal
    output reg tx_out,       // Serial data output
    output reg tx_status     // Status: 1 if ready to accept new data
);

    // State encoding for the FSM
    parameter IDLE = 3'b000,
              LOAD_THR = 3'b001,
              TRANSFER_THR_TO_TSR = 3'b010,
              TRANSMIT = 3'b011,
				  DONE = 3'b100;
    
    reg [9:0] tsr;           // 10-bit Transmitter Shift Register (TSR)
    reg [3:0] bit_counter;    // Counter to track the number of bits transmitted
    reg [7:0] thr;            // Transmitter Hold Register (THR)
    reg [2:0] state, next_state; // Current and next state of the FSM
	 wire bclk;
	 reg transmitted;

	 Baud_Rate_Generator baud_gen (
        .clk(clk),
        .reset(reset),
        .sel_baud(2'b00), // Select 115200 baud rate
        .bclk(bclk),
        .bclk_x8()
    );

    // FSM: State transition logic
    always @(posedge clk or posedge reset) begin
        if (reset) begin
            state <= IDLE;
        end else begin
            state <= next_state;
        end
    end

    // FSM: Next state logic
    always @(*) begin
        case (state)
            IDLE: begin
                if (load) next_state = LOAD_THR;
                else next_state = IDLE;
            end
            LOAD_THR: begin
                next_state = TRANSFER_THR_TO_TSR;  // Transfer after THR is loaded
            end
            TRANSFER_THR_TO_TSR: begin
                next_state = TRANSMIT;  // Start transmission
            end
            TRANSMIT: begin
                if (transmitted) next_state = DONE;
                else next_state = TRANSMIT;
            end
				DONE: begin
					 if (!transmitted) next_state = IDLE;
					 else next_state = DONE;
				end
            default: next_state = IDLE;
        endcase
    end

    // FSM: Output logic and TSR shifting
    always @(posedge clk or posedge reset) begin
        if (reset) begin
            tx_status <= 1;  // Ready for new data
            tsr <= 10'b1111111111; // Reset TSR
        end else begin
            case (state)
                IDLE: begin
                    if (load)
							  tx_status <= 0;  // Ready for new data
						  else
							  tx_status <= 1;  // Ready for new data
                end
                LOAD_THR: begin
                    tx_status <= 0;  // Busy transmitting data
                    thr <= d_in;     // Load data into THR
                end
                TRANSFER_THR_TO_TSR: begin
                    tsr <= {1'b1, thr, 1'b0}; // Load THR to TSR with start/stop bits
                end
            endcase
        end
    end
	  
    // FSM: Output logic and TSR shifting
    always @(posedge bclk or posedge reset) begin
        if (reset) begin
            tx_out <= 1;     // Idle state
            bit_counter <= 0;
				transmitted <= 0;
        end else begin
            case (state)        
                TRANSMIT: begin
                    tx_out <= tsr[bit_counter];  // Transmit LSB first
						  if (bit_counter == 10) begin
								transmitted <= 1;
								bit_counter <= 0;
								tx_out <= 1;
						  end else		
								bit_counter <= bit_counter + 1;
                end
					 DONE: begin
						  transmitted <= 0;
					 end
            endcase
        end
    end

endmodule
