`timescale 1ns / 1ps

//------------------------------------------------------------------------------------------------
//Opcodes

`define PUSH 6'h0    //0x00
`define POP  6'h1    //0x04
`define DUP  6'h2    //0x08
`define SWAP 6'h3    //0x0C

`define JMP  6'h10   //0x40
`define JE   6'h11   //0x44

`define ADD  6'h20   //0x80
`define SUB  6'h21   //0x84
`define MUL  6'h22   //0x88
`define DIV  6'h23   //0x8C

`define MOV  6'h30   //0xC0
`define MSR  6'h31   //0xC4
`define PSR  6'h32   //0xC8
`define PPC  6'h33   //0xCC

`define WINT 6'h3E   //0xF8
`define HLT  6'h3F   //0xFC

//------------------------------------------------------------------------------------------------
//States
`define PC_INC_S  8'h0E  
`define GET_CMD_S 8'h0F

`define PUSH_S    8'h10


//------------------------------------------------------------------------------------------------
//Some constants
`define ADDR_SR   2'd0
`define ADDR_SRI  2'd1
`define ADDR_PC   2'd2
`define ADDR_R1   2'd3

`define DATA_SR   2'd0
`define DATA_PCI  2'd1
`define DATA_ALU  2'd2
`define DATA_IMM  2'd3

`define SR_ALU    2'd0
`define SR_ID     2'd1
`define SR_SSP    2'd2
`define SR_0      2'd3

`define PC_ALU    2'd0
`define PC_ID     2'd1
`define PC_EP     2'd2
`define PC_0      2'd3

`define IDC_INC   1'b0
`define IDC_DEC   1'b1

`define ALU_R1    3'b0
`define ALU_R2    3'h1

//------------------------------------------------------------------------------------------------
//Module defenition

module ControlUnit(
    input wire clk,
  
    input wire [5 : 0] opcode,
    input wire memory_ready,
    
    output reg cmd_w,
    output reg R1_w,
    output reg R2_w,

    output reg SR_w,
    output reg PC_w,    

    output reg SR_inc,
    output reg PC_inc,

    output reg [1 : 0] SR_incc,
    output reg [1 : 0] PC_incc,

    output reg [2 : 0] ALU_func,

    output reg [1 : 0] addr_sel,
    output reg [1 : 0] data_sel,
    
    output reg memory_w,

    output reg error,
    
    output reg [15 : 0] addr //for tests 
    );

reg [7 : 0] state;

//------------------------------------------------------------------------------------------------
//Next state logic

always@ (negedge clk)
    begin
    
    if (memory_ready)
        begin
    
        case (state)
        
        `GET_CMD_S: case (opcode)
                  
                    `PUSH: state <= `PUSH_S;
                  
                    endcase
        
        `PUSH_S:    state <= `PC_INC_S;
        `PC_INC_S:  state <= `GET_CMD_S;
        
        endcase
        
        end
        
    end

//------------------------------------------------------------------------------------------------
//Output logic

always@ (negedge clk)
    begin
    
    if (memory_ready)
        begin
    
        case (state)
        
        `GET_CMD_S: case (opcode)
                  
                    `PUSH:  begin
                    
                            addr_sel <= `ADDR_SRI;
                            data_sel <= `DATA_IMM;
                            
                            SR_inc   <= `IDC_DEC;
                            SR_incc  <= `SR_ID;
                            
                            memory_w <= 1;
                    
                            addr <= addr + 1;
                    
                            end
                            
                    endcase
        
        `PUSH_S:    begin
                    
                    SR_w    <= 1;
                    PC_inc  <= `IDC_INC;
                    PC_incc <= `PC_ID;
                    PC_w    <= 1;
        
                    end
               
        `PC_INC_S:  begin
        
                    addr_sel <= `ADDR_PC;
        
                    addr <= addr + 1;
                    
                    end
               
        endcase

        end
    
    end

//------------------------------------------------------------------------------------------------
//Write signals' reset

always@ (negedge clk)
    begin
    
    if (cmd_w)
        cmd_w <= 0;
    
    if (R1_w)
        R1_w <= 0;
    
    if (R2_w)
        R2_w <= 0;
    
    if (SR_w)
        SR_w <= 0;
        
    if (PC_w)
        PC_w <= 0;
        
    if (memory_w)
        memory_w <= 0;
        
    end
    
//------------------------------------------------------------------------------------------------
//Initial

initial
    begin
    
    state = 0;
    
    cmd_w = 0;
    R1_w = 0;
    R2_w = 0;

    SR_w = 0;
    PC_w = 0;    

    SR_inc = 0;
    PC_inc = 0;

    SR_incc = 0;
    PC_incc = 0;

    ALU_func = 0;

    addr_sel = 0;
    data_sel = 0;
    
    memory_w = 0;

    error = 0;
    
    addr = 0;
    
    end

endmodule
