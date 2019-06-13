`timescale 1ns / 1ps

`define R1_alu  0
`define R2_alu  1
`define ADD_alu 2
`define SUB_alu 3
`define MUL_alu 4
`define DIV_alu 5

module ALU(
    input wire [3 : 0] func,

    input wire [15 : 0] i0,
    input wire [15 : 0] i1,
    
    output reg [15 : 0] o0
    );

always@ (*)
    begin
    
    case (func)
    
    `R1_alu:    o0 = i0;
    `R2_alu:    o0 = i1;
    `ADD_alu:   o0 = i0 + i1;
    `SUB_alu:   o0 = i0 - i1;
    `MUL_alu:   o0 = i0 * i1;
    
    default: o0 = 0;
    
    endcase
    
    end

endmodule
