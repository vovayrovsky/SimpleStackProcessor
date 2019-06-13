`timescale 1ns / 1ps

module clk_s #(
    parameter delay_k = 2
    )(
    input wire clk,
    output reg sclk
    );

reg [26 : 0] counter;

always@ (posedge clk)
    begin
    
    if (counter < delay_k)
        counter <= counter + 1;
    else
        begin
        
        counter <= 0;
        sclk = ~sclk;
        
        end
    end
    

initial
    begin
    
    counter = 0;
    sclk = 0;
    
    end

endmodule
