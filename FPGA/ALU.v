`timescale 1ns / 1ps

`define R1  0
`define R2  1
`define ADD 2
`define SUB 3
`define MUL 4
`define DIV 5

module ALU(
    input wire [3 : 0] func,

    input wire [15 : 0] i0,
    input wire [15 : 0] i1,
    
    output reg [15 : 0] o0
    );

always@ (*)
    begin
    
    case (func)
    
    `R1:    o0 = i0;
    `R2:    o0 = i1;
    `ADD:   o0 = i0 + i1;
    `SUB:   o0 = i0 - i1;
    `MUL:   o0 = i0 * i1;
    
    default: o0 = 0;
    
    endcase
    
    end

endmodule
