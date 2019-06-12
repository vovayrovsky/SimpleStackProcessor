`timescale 1ns / 1ps

module top(
    input wire clk,
    
    output wire [3 : 0] an,
    output wire [7 : 0] cat
    );
    
wire seg7clk;
    
seg7clk_s sclk (clk, seg7clk);    
    
x4seg7 drv(seg7clk, 16'hDEF0, an, cat);    
    
/*
wire memory_ready;
wire [15 : 0] mem_data;

wire error;
wire memory_w;

wire [15 : 0] addr;
wire [15 : 0] cpu_data;
    
CPU cpu (clk, memory_ready, mem_data, error, memory_w, addr, cpu_data);

wire [15 : 0] port;

memory mem  (clk, memory_w, addr, cpu_data, mem_data, memory_ready, port);
*/
endmodule
