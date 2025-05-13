`include "define.v"
module CPU (
    input wire clk,
    input wire rst,

    output wire [31:0]          cur_pc,
    output                      commit,
    output wire [31:0]          commit_pre_pc
);

// output declaration of module select_pc
reg [31:0] select_pc_o_pc;
initial begin
    select_pc_o_pc = 32'h80000000;
end

select_pc u_select_pc(
    .clk                    (clk),
    .decode_i_need_jump     (decode_o_need_jump),
    .memory_i_commit        (memory_o_commit),
    .execute_i_valE         (execute_o_valE),
    .select_pc_o_pc         (select_pc_o_pc)
);
    
// output declaration of module fetch
wire [31:0] fetch_o_instr;
wire [31:0] fetch_o_inst_ready ;
fetch u_fetch(
    .select_pc_i_pc     (select_pc_o_pc),
    .fetch_o_inst_ready (fetch_o_inst_ready),
    .fetch_o_instr      (fetch_o_instr)
);

// output declaration of module decode
wire [31:0] decode_o_reg_valA;
wire [31:0] decode_o_reg_valB;
wire [3:0]  decode_o_alu_func_sel;
wire [1:0]  decode_o_alu_valA_sel;
wire [1:0]  decode_o_alu_valB_sel;
wire [31:0] decode_o_imm;
wire        decode_o_wb_reg_wen;
wire [1:0]  decode_o_wb_valD_sel;
wire [3:0]  decode_o_mem_rw;
wire        decode_o_is_jalr;
wire        decode_o_need_jump;  
decode u_decode(
    .clk                    (clk),
    .rst                    (rst),
    .fetch_i_instr          (fetch_o_instr),
    .write_back_i_reg_data  (write_back_o_reg_data),
    .write_back_i_reg_wen   (write_back_o_reg_wen),
    .decode_o_reg_valA      (decode_o_reg_valA),
    .decode_o_reg_valB      (decode_o_reg_valB),
    .decode_o_alu_func_sel  (decode_o_alu_func_sel),
    .decode_o_alu_valA_sel  (decode_o_alu_valA_sel),
    .decode_o_alu_valB_sel  (decode_o_alu_valB_sel),
    .decode_o_imm           (decode_o_imm),
    .decode_o_wb_reg_wen    (decode_o_wb_reg_wen),
    .decode_o_wb_valD_sel   (decode_o_wb_valD_sel),
    .decode_o_mem_rw        (decode_o_mem_rw),
    .decode_o_is_jalr       (decode_o_is_jalr),
    .decode_o_need_jump     (decode_o_need_jump)
);

// output declaration of module execute
wire [31:0] execute_o_pre_pc;
wire [31:0] execute_o_valE;
execute u_execute(
    .select_pc_i_pc         (select_pc_o_pc),
    .decode_i_imm           (decode_o_imm),
    .decode_i_reg_valA      (decode_o_reg_valA),
    .decode_i_reg_valB      (decode_o_reg_valB),
    .decode_i_alu_valA_sel  (decode_o_alu_valA_sel),
    .decode_i_alu_valB_sel  (decode_o_alu_valB_sel),
    .decode_i_alu_func_sel  (decode_o_alu_func_sel),
    .decode_i_is_jalr       (decode_o_is_jalr),
    .decode_i_need_jump     (decode_o_need_jump),
    .execute_o_pre_pc       (execute_o_pre_pc),
    .execute_o_valE         (execute_o_valE)
);

// output declaration of module memory
wire [31:0] memory_o_valM;
wire        memory_o_commit;
memory u_memory(
    .clk(clk),
    .rst(rst),
    .execute_i_valE(execute_o_valE),
    .decode_i_reg_valB(decode_o_reg_valB),
    .decode_i_mem_rw(decode_o_mem_rw),
    .fetch_i_inst_ready(fetch_o_inst_ready),
    .memory_o_valM(memory_o_valM),
    .memory_o_commit(memory_o_commit)
);

assign commit = memory_o_commit;
assign commit_pre_pc = (memory_o_commit && decode_o_need_jump) ? execute_o_valE : select_pc_o_pc+4 ;
assign cur_pc = select_pc_o_pc;

// output declaration of module write_back
wire write_back_o_reg_wen;
wire [31:0] write_back_o_reg_data;
write_back u_write_back(
    .decode_i_wb_reg_wen        (decode_o_wb_reg_wen),
    .decode_i_wb_valD_sel       (decode_o_wb_valD_sel),
    .memory_i_valM              (memory_o_valM),
    .memory_i_commit            (memory_o_commit),
    .select_pc_i_pc             (select_pc_o_pc),
    .execute_i_valE             (execute_o_valE),
    .fetch_i_instr              (fetch_o_instr),
    .write_back_o_reg_wen       (write_back_o_reg_wen),
    .write_back_o_reg_data      (write_back_o_reg_data)
);
endmodule