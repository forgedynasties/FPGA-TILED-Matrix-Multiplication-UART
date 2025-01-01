`timescale 1ns / 1ps

module Receiver (
    input wire clk,             // Main clock (4x baud rate)
    input wire reset,           // Reset signal
    input wire rx_data,         // Serial input data
    output reg [7:0] d_out,     // 8-bit parallel output data
    output reg rx_status        // Status signal (1: Data available, 0: No data)
);

    // Parameter Definitions for FSM States
    parameter IDLE    = 3'b000,  // Waiting for Start Bit
              START   = 3'b001,  // Detecting Start Bit
              RECEIVE = 3'b010,  // Receiving Data Bits
              STOP    = 3'b011,  // Detecting Stop Bit
              DONE    = 3'b100;  // Transfer Data to RHR

    reg [2:0] state, next_state;   // State registers

    reg [7:0] shift_reg;         // Receiver Shift Register (RSR)
    reg [3:0] bit_count;         // Bit Counter (up to 8 bits)
    reg [2:0] sample_count;      // Sample counter for oversampling (4x sampling)

    // State Transition Logic (Synchronous)
    always @(posedge clk or posedge reset) begin
        if (reset) begin
            state <= IDLE;
        end else begin
            state <= next_state;
        end
    end

    // Next State Logic and Output Logic
    always @(*) begin
        next_state = state;  // Default next state
        case (state)
            IDLE: begin
                if (rx_data == 0)    // Start bit detected
                    next_state = START;
            end

            START: begin
                if (sample_count == 5) // Wait for mid-bit sampling
                    next_state = RECEIVE;
            end

            RECEIVE: begin
                if (bit_count == 8)    // All data bits received
                    next_state = STOP;
            end

            STOP: begin
                if (rx_data == 1)      // Stop bit detected
                    next_state = DONE;
            end

            DONE: begin
                next_state = IDLE;    // Go back to IDLE
            end
        endcase
    end

    // Sample Counter Logic (Oversampling at 4x Baud Rate)
    always @(posedge clk or posedge reset) begin
        if (reset) begin
            sample_count <= 0;
        end else if (state == START || state == RECEIVE) begin
            sample_count <= sample_count + 1;
        end else begin
            sample_count <= 0;
        end
    end

    // Bit Counter Logic
    always @(posedge clk or posedge reset) begin
        if (reset) begin
            bit_count <= 0;
        end else if (state == RECEIVE && sample_count == 7) begin
            bit_count <= bit_count + 1;
        end else if (state == IDLE || state == STOP) begin
            bit_count <= 0;
        end
    end

    // Shift Register Logic (RSR)
    always @(posedge clk or posedge reset) begin
        if (reset) begin
            shift_reg <= 8'b0;
        end else if (state == RECEIVE && sample_count == 7) begin
            shift_reg <= {rx_data, shift_reg[7:1]};  // Shift in data bits
        end
    end

    // Data Transfer to Receiver Hold Register (RHR)
    always @(posedge clk or posedge reset) begin
        if (reset) begin
            d_out <= 8'b0;
        end else if (state == DONE) begin
            d_out <= shift_reg;  // Transfer data to RHR
        end
    end
	 
	 // Data Transfer to Receiver Hold Register (RHR)
    always @(posedge clk or posedge reset) begin
        if (reset) begin
            rx_status <= 0;
        end else if (state == DONE) begin
            rx_status <= 1;
        end else if (state == IDLE) begin
			   rx_status <= 0;
		  end
    end

endmodule
