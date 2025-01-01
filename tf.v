`timescale 1ns / 1ps

module tf;

	// Inputs
	reg clk;
	reg rst;
	reg start;
	reg [3:0] x;
	reg is_b;
	reg rx_data;

	// Outputs
	wire done;
	wire tx;

	// Instantiate the Unit Under Test (UUT)
	top_module uut (
		.clk(clk), 
		.rst(rst), 
		.start(start), 
		.rx_data(rx_data),
		.x(x),
		.is_b(is_b),
		.done(done),
		.tx(tx)
	);

	// Clock generation
    initial clk = 0;
    always #5 clk = ~clk; // 100 MHz clock

    // Calculate baud period
    localparam integer BAUD_PERIOD = 104167; // In nanoseconds

    // Task to send data with start and stop bits
    task send_data;
        input [7:0] data;
        integer i;
        begin
            // Send start bit (0)
            rx_data = 0;
            #(BAUD_PERIOD);
            
            // Send data bits (LSB first)
            for (i = 0; i < 8; i = i + 1) begin
                rx_data = data[i];
                #(BAUD_PERIOD);
            end

            // Send stop bit (1)
            rx_data = 1;
            #(BAUD_PERIOD);
        end
    endtask

    // Stimulus
    initial begin
        // Initialize signals
        rst = 1;
        rx_data = 1; // Idle state
		  start = 0;
		  is_b = 0;

        // Apply reset
        #(BAUD_PERIOD);
        rst = 0;
		  start = 1;
//        send_data(8'd255);

        // Send mode byte (3 for 3x3 matrix)
        send_data(8'd10);

        // Send matrix A data (3x3 elements: 1 to 9)
        send_data(8'd1);
        send_data(8'd2);
        send_data(8'd3);
        send_data(8'd4);
        send_data(8'd0);
        send_data(8'd1);
        send_data(8'd2);
        send_data(8'd1);
		  send_data(8'd1);
        send_data(8'd1);

        send_data(8'd1);
        send_data(8'd2);
        send_data(8'd3);
        send_data(8'd4);
        send_data(8'd0);
        send_data(8'd1);
        send_data(8'd2);
        send_data(8'd1);
		  send_data(8'd1);
        send_data(8'd1);

        send_data(8'd1);
        send_data(8'd2);
        send_data(8'd3);
        send_data(8'd4);
        send_data(8'd0);
        send_data(8'd1);
        send_data(8'd2);
        send_data(8'd1);
		  send_data(8'd1);
        send_data(8'd1);

        send_data(8'd1);
        send_data(8'd2);
        send_data(8'd3);
        send_data(8'd4);
        send_data(8'd0);
        send_data(8'd1);
        send_data(8'd2);
        send_data(8'd1);
		  send_data(8'd1);
        send_data(8'd1);
		  
        send_data(8'd1);
        send_data(8'd2);
        send_data(8'd3);
        send_data(8'd4);
        send_data(8'd0);
        send_data(8'd1);
        send_data(8'd2);
        send_data(8'd1);
		  send_data(8'd1);
        send_data(8'd1);
		  
	     send_data(8'd1);
        send_data(8'd2);
        send_data(8'd3);
        send_data(8'd4);
        send_data(8'd0);
        send_data(8'd1);
        send_data(8'd2);
        send_data(8'd1);
		  send_data(8'd1);
        send_data(8'd1);
		  
	     send_data(8'd1);
        send_data(8'd2);
        send_data(8'd3);
        send_data(8'd4);
        send_data(8'd0);
        send_data(8'd1);
        send_data(8'd2);
        send_data(8'd1);
		  send_data(8'd1);
        send_data(8'd1);

        send_data(8'd1);
        send_data(8'd2);
        send_data(8'd3);
        send_data(8'd4);
        send_data(8'd0);
        send_data(8'd1);
        send_data(8'd2);
        send_data(8'd1);
		  send_data(8'd1);
        send_data(8'd1);

        send_data(8'd1);
        send_data(8'd2);
        send_data(8'd3);
        send_data(8'd4);
        send_data(8'd0);
        send_data(8'd1);
        send_data(8'd2);
        send_data(8'd1);
		  send_data(8'd1);
        send_data(8'd1);

        send_data(8'd1);
        send_data(8'd2);
        send_data(8'd3);
        send_data(8'd4);
        send_data(8'd0);
        send_data(8'd1);
        send_data(8'd2);
        send_data(8'd1);
		  send_data(8'd1);
        send_data(8'd1);

/////////////////MATRIX B//////////////////////////
        send_data(8'd1);
        send_data(8'd2);
        send_data(8'd3);
        send_data(8'd4);
        send_data(8'd0);
        send_data(8'd1);
        send_data(8'd2);
        send_data(8'd1);
		  send_data(8'd1);
        send_data(8'd1);
		  
        send_data(8'd1);
        send_data(8'd2);
        send_data(8'd3);
        send_data(8'd4);
        send_data(8'd0);
        send_data(8'd1);
        send_data(8'd2);
        send_data(8'd1);
		  send_data(8'd1);
        send_data(8'd1);
		  
	     send_data(8'd1);
        send_data(8'd2);
        send_data(8'd3);
        send_data(8'd4);
        send_data(8'd0);
        send_data(8'd1);
        send_data(8'd2);
        send_data(8'd1);
		  send_data(8'd1);
        send_data(8'd1);
		  
	     send_data(8'd1);
        send_data(8'd2);
        send_data(8'd3);
        send_data(8'd4);
        send_data(8'd0);
        send_data(8'd1);
        send_data(8'd2);
        send_data(8'd1);
		  send_data(8'd1);
        send_data(8'd1);
		  
        send_data(8'd1);
        send_data(8'd2);
        send_data(8'd3);
        send_data(8'd4);
        send_data(8'd0);
        send_data(8'd1);
        send_data(8'd2);
        send_data(8'd1);
		  send_data(8'd1);
        send_data(8'd1);
		  
        send_data(8'd1);
        send_data(8'd2);
        send_data(8'd3);
        send_data(8'd4);
        send_data(8'd0);
        send_data(8'd1);
        send_data(8'd2);
        send_data(8'd1);
		  send_data(8'd1);
        send_data(8'd1);
		  
	     send_data(8'd1);
        send_data(8'd2);
        send_data(8'd3);
        send_data(8'd4);
        send_data(8'd0);
        send_data(8'd1);
        send_data(8'd2);
        send_data(8'd1);
		  send_data(8'd1);
        send_data(8'd1);
		  
	     send_data(8'd1);
        send_data(8'd2);
        send_data(8'd3);
        send_data(8'd4);
        send_data(8'd0);
        send_data(8'd1);
        send_data(8'd2);
        send_data(8'd1);
		  send_data(8'd1);
        send_data(8'd1);
		  
        send_data(8'd1);
        send_data(8'd2);
        send_data(8'd3);
        send_data(8'd4);
        send_data(8'd0);
        send_data(8'd1);
        send_data(8'd2);
        send_data(8'd1);
		  send_data(8'd1);
        send_data(8'd1);
		  
        send_data(8'd1);
        send_data(8'd2);
        send_data(8'd3);
        send_data(8'd4);
        send_data(8'd0);
        send_data(8'd1);
        send_data(8'd2);
        send_data(8'd1);
		  send_data(8'd1);
        send_data(8'd1);
		 
	wait(done);
       $stop;
    end
endmodule