`timescale 1ns / 1ps


module testtop;

	// Inputs
	reg clk;

	// Outputs
	wire [3:0] an;
	wire [7:0] cat;

	// Instantiate the Unit Under Test (UUT)
	top uut (
		.clk(clk), 
		.an(an), 
		.cat(cat)
	);

integer i;

	initial begin
		// Initialize Inputs
		clk = 0;

		// Wait 100 ns for global reset to finish
		#1;
        
        for (i = 0; i < 100000; i = i + 1)
            begin
            
            clk = 1; #1;
            clk = 0; #1;
            
            end
        
		// Add stimulus here

	end
      
endmodule

