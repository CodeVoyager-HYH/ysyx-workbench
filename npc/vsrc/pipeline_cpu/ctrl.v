`include "define.v"
module ctrl(
    input  wire  [3:0]       regM_o_mem_rw,
    input  wire          execute_i_need_jump,
    input  wire          ctrl_i_io_master_wready,
    input  wire          ctrl_i_io_master_arready,
    input  wire   [4:0]  decode_i_rs1,
    input  wire   [4:0]  decode_i_rs2,
    input  wire   [4:0]  regE_i_rd,
    input  wire   [3:0]  regE_i_mem_rw,
    output wire          soc_stall,
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

// 加载/存储操作类型定义
wire rv32_lb_mem  = (regM_o_mem_rw == `mem_rw_lb);
wire rv32_lh_mem  = (regM_o_mem_rw == `mem_rw_lh);
wire rv32_lw_mem  = (regM_o_mem_rw == `mem_rw_lw);
wire rv32_lbu_mem = (regM_o_mem_rw == `mem_rw_lbu);
wire rv32_lhu_mem = (regM_o_mem_rw == `mem_rw_lhu);
wire rv32_load_m = rv32_lb_mem | rv32_lh_mem | rv32_lw_mem | rv32_lbu_mem | rv32_lhu_mem;

wire rv32_sb_mem  = (regM_o_mem_rw == `mem_rw_sb);
wire rv32_sh_mem  = (regM_o_mem_rw == `mem_rw_sh);
wire rv32_sw_mem  = (regM_o_mem_rw == `mem_rw_sw);
wire rv32_store_m = rv32_sb_mem | rv32_sh_mem | rv32_sw_mem ;

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

// 冒险检测
wire load_use  = ((regE_i_rd == decode_i_rs1 || regE_i_rd == decode_i_rs2) && rv32_load);
wire store_use = (rv32_store_m && ~ctrl_i_io_master_wready);

// 分支错误和总线阻塞逻辑
wire branch_bubble = execute_i_need_jump;
assign soc_stall = (~ctrl_i_io_master_arready && rv32_load_m) || store_use;

// 控制信号生成（优先级：分支错误 > 总线阻塞）
assign ctrl_o_regF_bubble   = branch_bubble;                   // 分支错误时冲刷 regF
assign ctrl_o_regD_bubble   = branch_bubble;                   // 分支错误时冲刷 regD
assign ctrl_o_regE_bubble   = branch_bubble || load_use;       // 分支错误或加载冒险时冲刷 regE
assign ctrl_o_regM_bubble   = 1'b0;                            // regM 无需冲刷
assign ctrl_o_regW_bubble   = 1'b0;                            // regW 无需冲刷

assign ctrl_o_regF_stall    = (~branch_bubble) ? (load_use || soc_stall) : 1'b0;  // 非分支错误时暂停
assign ctrl_o_regD_stall    = (~branch_bubble) ? (load_use || soc_stall) : 1'b0;  // 非分支错误时暂停
assign ctrl_o_regE_stall    = (~branch_bubble) ? soc_stall : 1'b0;                // 非分支错误时暂停
assign ctrl_o_regM_stall    = (~branch_bubble) ? soc_stall : 1'b0;                // 非分支错误时暂停
assign ctrl_o_regW_stall    = (~branch_bubble) ? soc_stall : 1'b0;                // 非分支错误时暂停

endmodule
// regF -> fetch -> regD -> decode -> regE -> execute -> regM -> memory -> regW -> write_back