`timescale 1ns / 1ps

module Transmitter_tb;

    // Inputs
    reg [7:0] d_in;    // 8-bit parallel data input
    reg clk;           // System clock
    reg load;          // Load signal
    reg reset;         // Reset signal

    // Outputs
    wire tx_out;       // Serial data output
    wire tx_status;    // Status: 1 if ready to accept new data

    // Instantiate the Transmitter module
    Transmitter uut (
        .d_in(d_in),
        .clk(clk),
        .load(load),
        .reset(reset),
        .tx_out(tx_out),
        .tx_status(tx_status)
    );

    // Clock generation (100 MHz clock for testing)
    initial clk = 0;
    always #5 clk = ~clk;

    // Test stimulus
    initial begin
        // Monitor signals for debugging
        $monitor("Time: %0t | tx_out: %b | tx_status: %b | d_in: %b | load: %b | reset: %b",
                 $time, tx_out, tx_status, d_in, load, reset);

        // Initialize inputs
        reset = 1;
        load = 0;
        d_in = 8'b0;

        // Apply reset
        #20;
        reset = 0;

        // Wait for a while to observe idle state
        #20;

        // Test 1: Send first byte
        d_in = 8'b10101010;  // Example data
        load = 1;            // Assert load
        #10;
        load = 0;            // Deassert load

        // Wait for transmission to complete
        wait(tx_status == 1); // Wait until ready for next data
        #10;

        // Test 2: Send second byte
        d_in = 8'b11001100;  // Example data
        load = 1;
        #10;
        load = 0;

        // Wait for transmission to complete
        wait(tx_status == 1);
        #10;

        // Test 3: Send third byte
        d_in = 8'b11110000;  // Example data
        load = 1;
        #10;
        load = 0;

        // Wait for transmission to complete
        wait(tx_status == 1);
        #10;

        // Finish simulation
        $stop;
    end

endmodule
