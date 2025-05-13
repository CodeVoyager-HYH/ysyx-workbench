module select_pc(
    input  wire [31:0] fetch_i_pre_pc,
    input  wire [31:0] execute_i_pre_pc,
    input  wire        execute_i_need_jump,
    output wire [31:0] select_pc_o_pc
);

assign select_pc_o_pc =  (execute_i_need_jump) ? execute_i_pre_pc : fetch_i_pre_pc;
//assign select_pc_o_pc =  (execute_i_need_jump) ? (execute_i_pre_pc  & ~32'h3): (fetch_i_pre_pc & ~32'h3);
endmodule