`timescale 1ns / 1ps

module register#(
    parameter start_value = 0
    )(
    input wire clk,
    
    input wire we,
    input wire [15 : 0] data,
    
    output reg [15 : 0] out
    );

always@ (posedge clk)
    begin
   
    if (we)
        out <= data;
   
    end

initial
    begin
    
    out = start_value;
    
    end

endmodule
