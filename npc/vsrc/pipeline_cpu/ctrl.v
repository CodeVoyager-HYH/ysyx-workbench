`include "define.v"
module ctrl(
    input  wire          execute_i_need_jump,

    input  wire          io_master_bvalid,

    input  wire   [4:0]  decode_i_rs1,
    input  wire   [4:0]  decode_i_rs2,
    input  wire   [4:0]  regE_i_rd,
    input  wire   [3:0]  regE_i_mem_rw,

    output wire          ctrl_o_regF_stall,
    output wire          ctrl_o_regD_stall,
    output wire          ctrl_o_regE_stall,
    output wire          ctrl_o_regM_stall,
    output wire          ctrl_o_regW_stall,

    output wire          ctrl_o_regF_bubble,
    output wire          ctrl_o_regD_bubble,
    output wire          ctrl_o_regE_bubble,
    output wire          ctrl_o_regM_bubble,
    output wire          ctrl_o_regW_bubble
);

//对于BEQ分支预测指令来说
//如果预测出错，应该冲刷

wire rv32_lb  = (regE_i_mem_rw == `mem_rw_lb);
wire rv32_lh  = (regE_i_mem_rw == `mem_rw_lh);
wire rv32_lw  = (regE_i_mem_rw == `mem_rw_lw);
wire rv32_lbu = (regE_i_mem_rw == `mem_rw_lbu);
wire rv32_lhu = (regE_i_mem_rw == `mem_rw_lhu);
wire rv32_load = rv32_lb | rv32_lh | rv32_lw | rv32_lbu | rv32_lhu;

wire rv32_sb  = (regE_i_mem_rw == `mem_rw_sb);
wire rv32_sh  = (regE_i_mem_rw == `mem_rw_sh);
wire rv32_sw  = (regE_i_mem_rw == `mem_rw_sw);
wire rv32_store = rv32_sb | rv32_sh | rv32_sw ;
//加载使用冒险
wire load_use = (regE_i_rd == decode_i_rs1 || regE_i_rd == decode_i_rs2) && (rv32_load || rv32_store);
//wire soc_uart = (regE_i_rd  >= `UART && regE_i_rd <= `UART_BOUND && ~io_master_bvalid) && (rv32_store);
//分支预测错误
wire branch_bubble = execute_i_need_jump;

assign ctrl_o_regD_bubble   = branch_bubble;
assign ctrl_o_regE_bubble   = branch_bubble || load_use;

assign ctrl_o_regF_bubble   = 1'b0;
assign ctrl_o_regM_bubble   = 1'b0;
assign ctrl_o_regW_bubble   = 1'b0;

assign ctrl_o_regF_stall    = load_use ;
assign ctrl_o_regD_stall    = load_use ;
assign ctrl_o_regE_stall    = 1'b0;
assign ctrl_o_regM_stall    = 1'b0;
assign ctrl_o_regW_stall    = 1'b0;

endmodule