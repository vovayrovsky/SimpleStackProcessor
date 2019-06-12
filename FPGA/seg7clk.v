`timescale 1ns / 1ps

//Input freq:   100 MHz
//Output freq:  1 Hz
//
//divider k: 400000

module seg7clk_s (
    input wire clk,
    output reg sclk
    );

reg [26 : 0] counter;

always@ (posedge clk)
    begin
    
    if (counter < 100000)
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
