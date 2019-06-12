`timescale 1ns / 1ps

module x4seg7(
    input wire clk,
    
    input wire [15 : 0] data,
    
    output wire [3 : 0] an,
    output wire [7 : 0] cat
    );

reg [1 : 0] counter = 0;

assign an = 1 << counter;

reg [3 : 0] digit; 

always@(*)
    begin
    
    case (counter)
    
    0: digit = data[3 : 0];
    1: digit = data[7 : 4];
    2: digit = data[11 : 8];
    3: digit = data[15 : 12];
    
    endcase
    
    end

digit_to_sign dts (digit, cat);

always@ (posedge clk)
    begin
    
    counter = counter + 1;
    
    end

endmodule

module digit_to_sign(
    input wire [3 : 0] digit,
    output reg [7 : 0] seg_out //ABCDEFGP
    );

always@ (*)
    begin
    
    case (digit)
                      //ABCDEFGP
    4'h0: seg_out <= 8'b11111100;   // A
    4'h1: seg_out <= 8'b11000000;   //F B
    4'h2: seg_out <= 8'b11011010;   // G
    4'h3: seg_out <= 8'h11110010;   //E C
    4'h4: seg_out <= 8'h01110110;   // D
    4'h5: seg_out <= 8'h10110110;
    4'h6: seg_out <= 8'h10111110;
    4'h7: seg_out <= 8'h11100000;
    4'h8: seg_out <= 8'h11111110;
    4'h9: seg_out <= 8'h11110110;
    4'hA: seg_out <= 8'h11101110;
    4'hB: seg_out <= 8'h00111110;
    4'hC: seg_out <= 8'h10011100;
    4'hD: seg_out <= 8'h01111010;
    4'hE: seg_out <= 8'h10011110;
    4'hF: seg_out <= 8'h10001110;
  
    endcase
    
    end

endmodule
