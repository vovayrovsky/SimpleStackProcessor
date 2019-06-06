`timescale 1ns / 1ps

module incdec(
    input wire dir,
    
    input wire [15 : 0] i0,
    output reg [15 : 0] o0
    );

always@(*)
    begin
    
    o0 = i0 + dir? -1 : 1;
    
    end

endmodule
