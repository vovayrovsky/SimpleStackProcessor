`timescale 1ns / 1ps

module testCPU;

	// Inputs
	reg  clk;
	wire memory_ready;
	reg  [15:0] in_data;

	// Outputs
	wire error;
	wire memory_w;
	wire [15:0] addr;
	wire [15:0] out_data;

	// Instantiate the Unit Under Test (UUT)
	CPU uut (
		.clk(clk), 
		.memory_ready(memory_ready), 
		.in_data(in_data), 
		.error(error), 
		.memory_w(memory_w), 
		.addr(addr), 
		.out_data(out_data)
	);

    integer i;

    mem_test memory(clk, memory_w, addr, memory_ready);

	initial begin
		// Initialize Inputs
		clk = 1;
		in_data = 16'h00FF;

		// Wait 100 ns for global reset to finish
		#100;
        
        clk = 0;
        #10;
        
		for (i = 0; i < 20; i = i + 1)
            begin
            
            clk = 1; #10;
            clk = 0; #10;
            
            end

	end
      
endmodule
