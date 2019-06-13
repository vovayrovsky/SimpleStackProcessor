`timescale 1ns / 1ps


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
