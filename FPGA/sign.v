`timescale 1ns / 1ps

module incdec(
    input wire dir,
    
    input wire [15 : 0] i0,
    output reg [15 : 0] o0
    );

always@(*)
    begin
    
    if (dir) o0 = i0 - 1;
    else     o0 = i0 + 1;
    
    end

endmodule
