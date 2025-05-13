`include "define.v"
module execute(
    input wire [31:0] select_pc_i_pc,
    input wire [31:0] decode_i_imm,
    input wire [31:0] decode_i_reg_valA,
    input wire [31:0] decode_i_reg_valB,

   	input wire [1:0]  decode_i_alu_valA_sel,   //选择alu的变量a是什么
	input wire [1:0]  decode_i_alu_valB_sel,   //选择alu的变量b是什么 
    input wire [3:0]  decode_i_alu_func_sel,
    
    input wire 		  decode_i_is_jalr,  
    input wire        decode_i_need_jump,

    output wire [31:0]  execute_o_pre_pc,
    output wire [31:0]  execute_o_valE
);

wire [31:0] alu_valA			= 	(decode_i_alu_valA_sel == `alu_valA_sel_valA) ?  decode_i_reg_valA    : 
									(decode_i_alu_valA_sel == `alu_valA_sel_pc  ) ?  select_pc_i_pc       : 
									(decode_i_alu_valA_sel == `alu_valA_sel_zero) ?  32'd0 	              : decode_i_reg_valA;

wire [31:0] alu_valB			= 	(decode_i_alu_valB_sel == `alu_valB_sel_valB) ?  decode_i_reg_valB    : 
									(decode_i_alu_valB_sel == `alu_valB_sel_imm)  ?  decode_i_imm         : decode_i_reg_valB;


assign execute_o_valE 			=	(decode_i_alu_func_sel == `alu_func_add 		)   ?  alu_valA + alu_valB							:
									(decode_i_alu_func_sel == `alu_func_sub 		)   ?  alu_valA - alu_valB							:
									(decode_i_alu_func_sel == `alu_func_sll 		)   ?  alu_valA << alu_valB[4:0] 					:
									(decode_i_alu_func_sel == `alu_func_slt  		)   ?  ($signed(alu_valA)   < $signed(alu_valB))   ? 32'd1 : 32'd0	:
									(decode_i_alu_func_sel == `alu_func_sltu		)   ?  ($unsigned(alu_valA) < $unsigned(alu_valB)) ? 32'd1 : 32'd0	:
									(decode_i_alu_func_sel == `alu_func_xor		    )   ?  {alu_valA[31:0]	^ alu_valB[31:0]}						  	:
									(decode_i_alu_func_sel == `alu_func_srl		    ) 	?  {$unsigned(alu_valA) >>  alu_valB[4:0]}		:
									(decode_i_alu_func_sel == `alu_func_sra		    )  	?  {$signed(alu_valA)   >>> alu_valB[4:0]}  	:
									(decode_i_alu_func_sel == `alu_func_or 		    )  	?  alu_valA | alu_valB							:
									(decode_i_alu_func_sel == `alu_func_and 		)  	?  alu_valA & alu_valB							: 32'd0;

assign execute_o_pre_pc = (decode_i_is_jalr) ? (execute_o_valE  & ~1) :
						  decode_i_need_jump ?  execute_o_valE     	  : (select_pc_i_pc + 4);

endmodule