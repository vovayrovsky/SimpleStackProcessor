`timescale 1ns / 1ps

`define STACK_START_POINT 16'hFFFF
`define ENTRY_POINT       16'h0020

module CPU(
    input wire clk,
    
    input wire [15 : 0] in_data,
    
    output wire error,
    output wire write_memory,
    
    output wire [15 : 0] addr,
    output wire [15 : 0] out_data
    );

wire [5 : 0] opcode;

wire [15 : 0] in_val;
wire [15 : 0] ALU_res;

wire cmd_w;
wire R1_w;
wire R2_w;

wire SR_w;
wire PC_w;

//------------------------------------------------------------------------------

wire [15 : 0] cmd_o;
assign opcode = cmd_o[15 : 10]; 
assign in_val = cmd_o & 16'h03FF;

register cmd (clk, cmd_w, in_data, cmd_o);

wire [15 : 0] R1_o;
register R1  (clk, R1_w,  in_data, R1_o);

wire [15 : 0] R2_o;
register R2  (clk, R2_w,  in_data, R2_0);

//------------------------------------------------------------------------------

wire [15 : 0] SR_in;
wire [15 : 0] PC_in;

wire [15 : 0] SR_out; wire [15 : 0] SR_id;
wire [15 : 0] PC_out; wire [15 : 0] PC_id;

register SR (clk, SR_w, SR_in, SR_out);
register PC (clk, PC_w, PC_in, PC_out);

wire SR_inc;
wire PC_inc;

incdec SR_idc (SR_inc, SR_out, SR_id);
incdec PC_idc (PC_inc, PC_out, PC_id);

wire [1 : 0] SR_incc;
wire [1 : 0] PC_incc;

mux4 sr_mux (SR_incc, ALU_res, SR_id, `STACK_START_POINT, 0, SR_in);
mux4 pc_mux (PC_incc, ALU_res, PC_id, `ENTRY_POINT,       0, PC_in);

//------------------------------------------------------------------------------

wire [2 : 0] ALU_func;

ALU alu (ALU_func, R1_o, R2_o, ALU_res);

//------------------------------------------------------------------------------

wire [1 : 0] addr_sel;
wire [1 : 0] data_sel;

mux4 addr_mux (addr_sel, SR_out, SR_id,  PC_id,   R1_out, addr);
mux4 data_mux (data_sel, SR_out, PC_out, ALU_res, in_val, out_data);

endmodule
