`timescale 1ns / 1ps

module MAC (
    input clk,               // Clock signal
    input rst,               // Reset signal
    input [7:0] a,          // First input value
    input [7:0] b,          // Second input value
    input mac_enable,        // Enable signal for MAC operation
    input reset_acc,         // Reset signal for the accumulator
    output reg [7:0] accumulator // Accumulator result (32 bits)
);
    always @(posedge clk or posedge rst) begin
        if (rst || reset_acc) begin
            accumulator <= 16'd0; // Reset the accumulator
        end else if (mac_enable) begin
            accumulator <= accumulator + (a * b); // Multiply and accumulate
        end
    end
endmodule
