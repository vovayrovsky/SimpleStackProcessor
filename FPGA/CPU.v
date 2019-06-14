`timescale 1ns / 1ps

`define STACK_START_POINT 16'h00FE
`define ENTRY_POINT       16'h0020

module CPU(
    input wire clk,
    
    input wire memory_ready,
    input wire [15 : 0] in_data,
    
    output wire error,
    output wire memory_w,
    
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
assign opcode = in_data[15 : 10]; 
assign in_val = in_data & 16'h03FF;

register cmd (clk, cmd_w, in_data, cmd_o);

wire [15 : 0] R1_o;
register R1  (clk, R1_w,  in_data, R1_o);

wire [15 : 0] R2_o;
register R2  (clk, R2_w,  in_data, R2_o);

//------------------------------------------------------------------------------

wire [15 : 0] SR_in;
wire [15 : 0] PC_in;

wire [15 : 0] SR_out; wire [15 : 0] SR_id;
wire [15 : 0] PC_out; wire [15 : 0] PC_id;

register #(`STACK_START_POINT + 1) SR (clk, SR_w, SR_in, SR_out);
register #(`ENTRY_POINT) PC (clk, PC_w, PC_in, PC_out);

wire SR_inc;
wire PC_inc;

incdec SR_idc (SR_inc, SR_out, SR_id);
incdec PC_idc (PC_inc, PC_out, PC_id);

wire [1 : 0] SR_incc;
wire [1 : 0] PC_incc;

mux4 sr_mux (SR_incc, ALU_res, SR_id, `STACK_START_POINT, in_data, SR_in);
mux4 pc_mux (PC_incc, ALU_res, PC_id, `ENTRY_POINT,       in_data, PC_in);

//------------------------------------------------------------------------------

wire [3 : 0] ALU_func;

ALU alu (ALU_func, R1_o, R2_o, ALU_res);

//------------------------------------------------------------------------------

wire [1 : 0] addr_sel;
wire [1 : 0] data_sel;

mux4 addr_mux (addr_sel, SR_out, SR_id,  PC_out,  R1_o, addr);
mux4 data_mux (data_sel, SR_out, PC_id,  ALU_res, in_data,  out_data);

//------------------------------------------------------------------------------

ControlUnit CU(
            .clk            (clk),
            .opcode         (opcode),
            .memory_ready   (memory_ready),
            .R1_w           (R1_w),
            .R2_w           (R2_w),
            .SR_w           (SR_w),
            .PC_w           (PC_w),
            .SR_inc         (SR_inc),
            .PC_inc         (PC_inc),
            .SR_incc        (SR_incc),
            .PC_incc        (PC_incc),
            .ALU_func       (ALU_func),
            .addr_sel       (addr_sel),
            .data_sel       (data_sel),
            .memory_w       (memory_w),
            .error          (error)
            );
endmodule
