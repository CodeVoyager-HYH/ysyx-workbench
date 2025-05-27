module select_pc(
    input  wire        clk,             // 新增时钟信号
    input  wire        rst,             // 新增复位信号
    input  wire [31:0] fetch_i_pre_pc,
    input  wire [31:0] execute_i_pre_pc,
    input  wire        execute_i_need_jump,
    output wire [31:0] select_pc_o_pc
);

assign select_pc_o_pc =  (execute_i_need_jump) ? execute_i_pre_pc : fetch_i_pre_pc;

// always @(posedge clk) begin
//     if (rst) begin
//         select_pc_o_pc <= 32'h2000_0000;  // 初始地址
//     end else if (execute_i_need_jump) begin
//         select_pc_o_pc <= execute_i_pre_pc;  // 跳转时锁定地址
//     end else begin
//         select_pc_o_pc <= fetch_i_pre_pc;    // 正常流水线地址
//     end
// end
endmodule