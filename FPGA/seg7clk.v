`timescale 1ns / 1ps

//Input freq:   100 MHz
//Output freq:  250 Hz
//
//divider k: 400000

module seg7clk(
    input wire clk,
    output reg sclk
    );

reg [18 : 0] counter;

always@ (posedge clk)
    begin
    
    if (counter < 400000)
        counter <= counter + 1;
    else
        counter <= 0;
    
    end
    

initial
    begin
    
    counter = 0;
    sclk = 0;
    
    end

endmodule
