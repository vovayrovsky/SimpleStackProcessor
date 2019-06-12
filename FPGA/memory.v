`timescale 1ns / 1ps

module memory#(
    parameter VIEW_PORT = 16'b10
    )(
    input wire clk,
    
    input wire  memory_w,
    
    input wire  [15 : 0] addr,
    input wire  [15 : 0] i0,
     
    output reg  [15 : 0] o0,
    output reg  memory_ready,
    
    output wire [15 : 0] port
    );

reg [15 : 0] store [16'hFFFF : 0];
reg [15 : 0] old_addr;

assign port = store [VIEW_PORT];

always@ (posedge clk)
    begin
    
    if (memory_w)
        begin
        
        store[addr] <= i0;
        o0 <= i0;
        memory_ready <= 0;
        
        old_addr <= addr;
        
        end
    else if (addr != old_addr)
        begin
        
        o0 <= store[addr];
        memory_ready <= 0;
        old_addr <= addr;
        
        end
    
    if (!memory_ready)
        memory_ready <= 1;
    
    end

integer i;

initial
    begin

    for (i = 0; i < 17'h1000; i = i+1)
        store[i] = 0;

    $readmemh("P:/input.mem", store);
    
    o0 = store [0];
    old_addr = 0;
    memory_ready = 0;
    
    end

endmodule
