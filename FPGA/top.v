`timescale 1ns / 1ps

module top(
    input wire clk,
    
    output wire [3 : 0] an,
    output wire [7 : 0] cat,
    
    output wire cpu_clk
    );    
    
wire seg7clk;
    
clk_s #(40000) seg7_sclk (clk, seg7clk);

//clk_s #(500000) cpu_sclk (clk, cpu_clk);
assign cpu_clk = clk;

wire memory_ready;
wire [15 : 0] mem_data;

wire error;
wire memory_w;

wire [15 : 0] addr;
wire [15 : 0] cpu_data;
    
CPU cpu (cpu_clk, memory_ready, mem_data, error, memory_w, addr, cpu_data);

wire [15 : 0] port;

memory mem  (cpu_clk, memory_w, addr, cpu_data, mem_data, memory_ready, port);
    
    
x4seg7 drv(seg7clk, port, an, cat);  

endmodule
