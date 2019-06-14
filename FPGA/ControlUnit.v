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
//ALU func

`define R1_alu  0
`define R2_alu  1
`define ADD_alu 2
`define SUB_alu 3
`define MUL_alu 4
`define DIV_alu 5

//------------------------------------------------------------------------------------------------
//States
`define PC_INC_S        8'h0E  
`define GET_CMD_S       8'h0F

`define PUSH_S          8'h10

`define MOV_LDR1_S      8'h11
`define MOV_LDR2_S      8'h12
`define MOV_LKR2_S      8'h13
`define MOV_S           8'h14

`define SWAP_LDR1_S     8'h15
`define SWAP_LDR2_S     8'h16
`define SWAP_P1_S       8'h17
`define SWAP_P2_S       8'h18

`define POP_S           8'h19

`define DUP_LDR1_S      8'h1A
`define DUP_P1_S        8'h1B

`define HLT_S           8'hFF

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

    output reg [3 : 0] ALU_func,

    output reg [1 : 0] addr_sel,
    output reg [1 : 0] data_sel,
    
    output reg memory_w,

    output reg error
    );

reg [7 : 0] state;

//------------------------------------------------------------------------------------------------
//Next state logic

always@ (negedge clk)
    begin
    
    if (memory_ready)
        begin
    
        case (state)
        
        `GET_CMD_S:     case (opcode)
                  
                        `PUSH:  state <= `PUSH_S;
                        `MOV:   state <= `MOV_LDR1_S;
                        `HLT:   state <= `HLT_S;
                        `SWAP:  state <= `SWAP_LDR1_S;
                        `POP:   state <= `POP_S;
                        `DUP:   state <= `DUP_LDR1_S;
                        
                        endcase
        
        `PUSH_S:        state <= `PC_INC_S;
        
        `MOV_LDR1_S:    state <= `MOV_LDR2_S;
        `MOV_LDR2_S:    state <= `MOV_LKR2_S;
        `MOV_LKR2_S:    state <= `MOV_S;
        `MOV_S:         state <= `PC_INC_S;
        
        `SWAP_LDR1_S:   state <= `SWAP_LDR2_S;
        `SWAP_LDR2_S:   state <= `SWAP_P1_S;
        `SWAP_P1_S:     state <= `SWAP_P2_S;
        `SWAP_P2_S:     state <= `PC_INC_S;
        
        `POP_S:         state <= `PC_INC_S;
        
        `DUP_LDR1_S:    state <= `DUP_P1_S;
        `DUP_P1_S:      state <= `PC_INC_S;               
        
        `PC_INC_S:  state <= `GET_CMD_S;
        
        `HLT_S: state <= `HLT_S;    
        
        default: state <= `HLT_S;
        
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
                    
                            addr_sel    <= `ADDR_SRI;
                            data_sel    <= `DATA_IMM;
                            
                            SR_inc      <= `IDC_DEC;
                            SR_incc     <= `SR_ID;
                            
                            memory_w    <= 1;
                            
                            cmd_w       <= 0;
                            R1_w        <= 0;
                            R2_w        <= 0;
                            SR_w        <= 0;
                            PC_w        <= 0;
                            
                            end
                            
                    `MOV:   begin
                                
                            addr_sel    <= `ADDR_SR;                    
                                        
                            cmd_w       <= 0;
                            R1_w        <= 0;
                            R2_w        <= 0;
                            SR_w        <= 0;
                            PC_w        <= 0;
                            memory_w    <= 0;
                    
                            end
                            
                    `SWAP:  begin                    
                                
                            addr_sel    <= `ADDR_SR;
                                    
                            cmd_w       <= 0;
                            R1_w        <= 0;
                            R2_w        <= 0;
                            SR_w        <= 0;
                            PC_w        <= 0;
                            memory_w    <= 0;
                    
                            end
                            
                    `POP:   begin
                            
                            SR_inc      <= `IDC_INC;
                            SR_incc     <= `SR_ID;
                            
                            cmd_w       <= 0;
                            R1_w        <= 0;
                            R2_w        <= 0;
                            SR_w        <= 1;
                            PC_w        <= 0;
                    
                            end
                        
                    `DUP:   begin
                            
                            addr_sel    <= `ADDR_SR;
                                    
                            cmd_w       <= 0;
                            R1_w        <= 0;
                            R2_w        <= 0;
                            SR_w        <= 0;
                            PC_w        <= 0;
                            memory_w    <= 0;
                    
                            end
                        
                    endcase
        

//------------------------------------------------------------------------------------------------
//Push branch      
        
        `PUSH_S:    begin
                    
                    SR_w        <= 1;
                    
                    PC_inc      <= `IDC_INC;
                    PC_incc     <= `PC_ID;
                    PC_w        <= 1;
                    
                    cmd_w       <= 0;
                    R1_w        <= 0;
                    R2_w        <= 0;
                    memory_w    <= 0;
        
                    end
               
//------------------------------------------------------------------------------------------------
//Mov branch       
        
        `MOV_LDR1_S:    begin
                        
                        addr_sel    <= `ADDR_SRI;
                        SR_inc      <= `IDC_INC;
                        SR_incc     <= `SR_ID;
                        
                        R1_w        <= 1;
                                        
                        cmd_w       <= 0;
                        R2_w        <= 0;
                        SR_w        <= 0;
                        PC_w        <= 0;
                        memory_w    <= 0;
                        
                        end
                        
        `MOV_LDR2_S:    begin
                        
                        SR_w        <= 1;
                        R2_w        <= 1;
                                                
                        cmd_w       <= 0;
                        R1_w        <= 0;
                        PC_w        <= 0;
                        memory_w    <= 0;
                        
                        end
                 
        `MOV_LKR2_S:    begin
        
                        addr_sel    <= `ADDR_R1;
                        data_sel    <= `DATA_ALU;
                        
                        ALU_func    <= `R2_alu;

                        memory_w    <= 1;
                                    
                        cmd_w       <= 0;
                        R1_w        <= 0;
                        R2_w        <= 0;
                        SR_w        <= 0;
                        PC_w        <= 0;

                        end
                 
        `MOV_S:         begin
                        
                        PC_inc      <= `IDC_INC;
                        PC_incc     <= `PC_ID;
                        PC_w        <= 1;
                                        
                        cmd_w       <= 0;
                        R1_w        <= 0;
                        R2_w        <= 0;
                        SR_w        <= 0;
                        memory_w    <= 0;

                        end

//------------------------------------------------------------------------------------------------
//Swap branch     

        `SWAP_LDR1_S:   begin

                        addr_sel    <= `ADDR_SRI;
                        SR_inc      <= `IDC_INC;
                        
                        cmd_w       <= 0;
                        R1_w        <= 1;
                        R2_w        <= 0;
                        SR_w        <= 0;
                        PC_w        <= 0;
                        memory_w    <= 0;
                        
                        end

        `SWAP_LDR2_S:   begin
                        
                        data_sel    <= `DATA_ALU;
                        
                        ALU_func    <= `ALU_R1;
                        
                        cmd_w       <= 0;
                        R1_w        <= 0;
                        R2_w        <= 1;
                        SR_w        <= 0;
                        PC_w        <= 0;
                        memory_w    <= 1;
        
                        end
                        
        `SWAP_P1_S:     begin
        
                        addr_sel    <= `ADDR_SR;
                        
                        ALU_func    <= `ALU_R2;
                        
                        cmd_w       <= 0;
                        R1_w        <= 0;
                        R2_w        <= 0;
                        SR_w        <= 0;
                        PC_w        <= 0;
                        memory_w    <= 1;
                        
                        end
                        
        `SWAP_P2_S:     begin
                        
                        PC_inc      <= `IDC_INC;
                        PC_incc     <= `PC_ID;
                        PC_w        <= 1;
                                        
                        cmd_w       <= 0;
                        R1_w        <= 0;
                        R2_w        <= 0;
                        SR_w        <= 0;
                        memory_w    <= 0;

                        end

//------------------------------------------------------------------------------------------------
//Pop branch      
        
        `POP_S:     begin
                    
                    SR_w        <= 0;
                    
                    PC_inc      <= `IDC_INC;
                    PC_incc     <= `PC_ID;
                    PC_w        <= 1;
                    
                    cmd_w       <= 0;
                    R1_w        <= 0;
                    R2_w        <= 0;
                    memory_w    <= 0;
        
                    end

//------------------------------------------------------------------------------------------------
//Dup branch

        `DUP_LDR1_S:    begin

                        addr_sel    <= `ADDR_SRI;
                        data_sel    <= `DATA_ALU;
                        
                        SR_inc      <= `IDC_DEC;
                        SR_incc     <= `SR_ID;
                        
                        ALU_func    <= `ALU_R1;
                        
                        cmd_w       <= 0;
                        R1_w        <= 1;
                        R2_w        <= 0;
                        SR_w        <= 0;
                        PC_w        <= 0;
                        memory_w    <= 0;

                        end
                        
        `DUP_P1_S:      begin
                    
                        PC_inc      <= `IDC_INC;
                        PC_incc     <= `PC_ID;
                        PC_w        <= 1;

                        cmd_w       <= 0;
                        R1_w        <= 0;
                        R2_w        <= 0;
                        SR_w        <= 1;
                        memory_w    <= 1;

                        end

//------------------------------------------------------------------------------------------------
//End of all branches
                       
        `PC_INC_S:  begin
        
                    addr_sel <= `ADDR_PC;
                                
                    cmd_w <= 0;
                    R1_w <= 0;
                    R2_w <= 0;
                    SR_w <= 0;
                    PC_w <= 0;
                    memory_w <= 0;
        
                    end
                    
        `HLT_S: begin
        
                error <= 1;        
                        
                cmd_w <= 0;
                R1_w <= 0;
                R2_w <= 0;
                SR_w <= 0;
                PC_w <= 0;
                memory_w <= 0;
        
                end
               
        endcase

        end
    else
        begin
        
        cmd_w <= 0;
        R1_w <= 0;
        R2_w <= 0;
        SR_w <= 0;
        PC_w <= 0;
        memory_w <= 0;
        
        end
    end

//------------------------------------------------------------------------------------------------
//Write signals' reset
/*


        
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
        
    end*/
    
//------------------------------------------------------------------------------------------------
//Initial

initial
    begin
    
    state = `GET_CMD_S;
    
    cmd_w = 0;
    R1_w = 0;
    R2_w = 0;

    SR_w = 0;
    PC_w = 0;    

    SR_inc = 0;
    PC_inc = 0;

    SR_incc = `SR_ID;
    PC_incc = `PC_ID;

    ALU_func = 0;

    addr_sel = `ADDR_PC;
    data_sel = `DATA_ALU;
    
    memory_w = 0;

    error = 0;
    
    end

endmodule
