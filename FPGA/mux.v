`timescale 1ns / 1ps

module mux2(
    input wire addr,
    
    input wire [15 : 0] i0,
    input wire [15 : 0] i1,
    
    output reg [15 : 0] o0
    );

always@(*)
    begin
    
    o0 = addr? i1 : i0; 
    
    end

endmodule

module mux4(
    input wire [1 : 0] addr,
    
    input wire [15 : 0] i0,
    input wire [15 : 0] i1,
    input wire [15 : 0] i2,
    input wire [15 : 0] i3,
    
    output reg [15 : 0] o0
    );

always@(*)
    begin
    
    case (addr)
    
    0: o0 = i0;
    1: o0 = i1;
    2: o0 = i2;
    3: o0 = i3;
    
    endcase
    
    end

endmodule
