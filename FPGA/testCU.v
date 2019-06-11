`timescale 1ns / 1ps

module testCU;

	// Inputs
	reg clk;
	reg [5:0] opcode;
	wire memory_ready;

	// Outputs
	wire cmd_w;
	wire R1_w;
	wire R2_w;
	wire SR_w;
	wire PC_w;
	wire SR_inc;
	wire PC_inc;
	wire [1:0] SR_incc;
	wire [1:0] PC_incc;
	wire [2:0] ALU_func;
	wire [1:0] addr_sel;
	wire [1:0] data_sel;
	wire memory_w;
	wire error;
    wire [15 : 0] addr;

	// Instantiate the Unit Under Test (UUT)
	ControlUnit uut (
		.clk(clk), 
		.opcode(opcode), 
		.memory_ready(memory_ready), 
		.cmd_w(cmd_w), 
		.R1_w(R1_w), 
		.R2_w(R2_w), 
		.SR_w(SR_w), 
		.PC_w(PC_w), 
		.SR_inc(SR_inc), 
		.PC_inc(PC_inc), 
		.SR_incc(SR_incc), 
		.PC_incc(PC_incc), 
		.ALU_func(ALU_func), 
		.addr_sel(addr_sel), 
		.data_sel(data_sel), 
		.memory_w(memory_w), 
		.error(error),
        .addr (addr)
	);

    integer i;

    mem_test memory(clk, memory_w, addr, memory_ready);

	initial begin
		// Initialize Inputs
		clk     = 1;
		opcode  = 6'b00;
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


//------------------------------------------------------------------------------------------------
//memory test module

module mem_test(
    input wire clk,
    input wire memory_w,
    
    input wire [15 : 0] addr,     
    
    output reg memory_ready
    );

reg [2 : 0] state;
reg [15 : 0] old_addr;

always@ (posedge clk)
    begin
    
    case (state)
    
    0: if (old_addr != addr)
            begin
        
            if (memory_w)
                state <= 1;
            else
                state <= 2;
            
            memory_ready <= 0;
            old_addr <= addr;
            
            end
            
    1: state <= 2;
    2:  begin
        
        memory_ready <= 1;
        state <= 0;
        
        end   
        
    endcase
    
    end

initial
    begin
    
    state        = 0;
    old_addr     = 0;
    memory_ready = 1;
    
    end

endmodule
