`timescale 1ns / 1ps

module testmemory;

	// Inputs
	reg clk;
	reg memory_w;
	reg [15:0] addr;
	reg [15:0] i0;

	// Outputs
	wire [15:0] o0;
	wire memory_ready;
	wire [15:0] port;

	// Instantiate the Unit Under Test (UUT)
	memory uut (
		.clk(clk), 
		.memory_w(memory_w), 
		.addr(addr), 
		.i0(i0), 
		.o0(o0), 
		.memory_ready(memory_ready), 
		.port(port)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		memory_w = 0;
		addr = 0;
		i0 = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
        for (addr = 0; addr < 50; addr = addr)
            begin
            
            if (memory_ready)
                addr = addr + 1;
                
            clk = 1; #5;
            clk = 0; #5;      
            
            end
	end
      
endmodule

