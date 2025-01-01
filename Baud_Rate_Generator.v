`timescale 1ns / 1ps

module Baud_Rate_Generator(
    input wire clk,           // System clock (e.g., 100 MHz)
    input wire reset,         // Asynchronous reset
    input wire [1:0] sel_baud, // 2-bit signal to select baud rate
    output reg bclk,          // Output baud clock
    output reg bclk_x8        // Output 8x baud clock
);

    // Registers for divisor and counters
    reg [15:0] divisor;       // Divisor for baud rate generation
    reg [15:0] counter;       // Counter for bclk_x8
    reg [2:0] bclk_div_counter; // Counter to divide bclk_x8 by 8

    // Baud rate selection logic: Compute divisor for each baud rate
    always @(*) begin
        case (sel_baud)
            2'b00: divisor = 100_000_000 / (9600 * 8);   // 9600 baud rate
            2'b01: divisor = 100_000_000 / (19200 * 8);  // 19200 baud rate
            2'b10: divisor = 100_000_000 / (57600 * 8);  // 57600 baud rate
            2'b11: divisor = 100_000_000 / (115200 * 8); // 115200 baud rate
            default: divisor = 100_000_000 / (9600 * 8);  // Default: 9600 baud
        endcase
    end

    // Counter logic to toggle bclk_x8
    always @(posedge clk or posedge reset) begin
        if (reset) begin
            counter <= 0;
            bclk_x8 <= 0;
        end else if (counter >= (divisor / 2) - 1) begin
            counter <= 0;
            bclk_x8 <= ~bclk_x8;  // Toggle bclk_x8
        end else begin
            counter <= counter + 1;
        end
    end

    // Divide bclk_x8 by 8 to generate bclk
    always @(posedge bclk_x8 or posedge reset) begin
        if (reset) begin
            bclk_div_counter <= 0;
            bclk <= 0;
        end else if (bclk_div_counter == 3'd3) begin
            bclk_div_counter <= 0;
            bclk <= ~bclk;  // Toggle bclk
        end else begin
            bclk_div_counter <= bclk_div_counter + 1;
        end
    end

endmodule
