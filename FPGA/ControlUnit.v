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
`define START_S   8'h00
`define GET_CMD_S 8'h0F

`define PUSH_S    8'h10

`define LR2_M_S   8'h11
`define LR1_M_S   8'h12
`define MOV_S     8'h13

`define ERROR_S   8'hFF

//------------------------------------------------------------------------------------------------
//Some constants
`define ADDR_SR   2'd0
`define ADDR_SRI  2'd1
`define ADDR_PCI  2'd2
`define ADDR_R1   2'd3

`define DATA_SR   2'd0
`define DATA_PC   2'd1
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
    
    output reg write_memory,

    output reg error
    );

reg [7 : 0] state;

//------------------------------------------------------------------------------------------------
//Next state logic

always@ (posedge clk)
    begin
    
    case (state)
    
    `START_S: state <= GET_CMD_S;
    
    `GET_CMD_S: case (opcode)
              
                `PUSH: state <= `PUSH_S;
                `MOV:  state <= `LR2_M_S;
              
                endcase
    
    `PUSH_S: state <= `GET_CMD_S;
    
    `LR2_M_S: state <= `LR1_M_S;
    `LR1_M_S: state <= `MOV_S;
    `MOV_S:   state <= `GET_CMD_S;
    
    endcase
    
    end

//------------------------------------------------------------------------------------------------
//State output logic

always@(*)
    begin 
    
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
    
    write_memory = 0;

    error = 0;
    
    case (state)
    
    `START_S:   begin
    
                SR_INCC = `SR_SSP;
                SR_w = 1;
                
                PC_INCC = `PC_EP;
                PC_w = 1;
                
                end
    
    `GET_CMD_S: begin
    
                cmd_w = 1;
    
                end
    
    `PUSH_S:    begin
             
                write_memory = 1;
                
                addr_sel = `ADDR_SR;
                data_sel = `DATA_IMM;
                    
                SR_incc = `SR_ID;
                SR_inc  = `IDC_DEC;
                SR_w    = 1;
                
                PC_incc = `PC_ID;
                PC_inc  = `IDC_INC;
                PC_w    = 1;
                
                end
    
    `LR2_M_S:   begin
       
                R2_w = 1;
       
                addr_sel = `ADDR_SR;
                data_sel = `DATA_IMM;
                    
                SR_incc = `SR_ID;
                SR_inc  = `IDC_DEC;
                SR_w    = 1;
                
                end
                
    `LR1_M_S:   begin
       
                R1_w = 1;
       
                addr_sel = `ADDR_SR;
                data_sel = `DATA_IMM;
                
                end
                
    `MOV_S:     begin
                
                memory_write = 1;
                
                addr_sel = `ADDR_R1;
                data_sel = `DATA_ALU;
                
                ALU_func = `ALU_R2;
                
                PC_incc = `PC_ID;
                PC_inc  = `IDC_INC;
                PC_w    = 1;
                
                end
                
    default: error = 1;
    
    endcase
    
    end

//------------------------------------------------------------------------------------------------
//Initial

initial
    begin
    
    state = 0;
    
    end

endmodule
