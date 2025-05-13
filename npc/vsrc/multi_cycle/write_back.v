`include "define.v"
module write_back(
    //write_back
    input wire          decode_i_wb_reg_wen,
    input wire [1:0]    decode_i_wb_valD_sel,
    input wire [31:0]   memory_i_valM,

    input wire          memory_i_commit,

    input wire [31:0]   select_pc_i_pc,
    input wire [31:0]   execute_i_valE,
    input wire [31:0]   fetch_i_instr,

    output wire         write_back_o_reg_wen,
    output wire [31:0]  write_back_o_reg_data
);

import "DPI-C" function void dpi_ebreak	(input int pc);

always @(*) begin
	if(fetch_i_instr == 32'h00100073) begin
		dpi_ebreak(0);
	end
end

assign write_back_o_reg_wen  = (memory_i_commit) ? decode_i_wb_reg_wen : 1'd0;

assign write_back_o_reg_data = (decode_i_wb_valD_sel  == `wb_valD_sel_valE && memory_i_commit) ? execute_i_valE : 
                               (decode_i_wb_valD_sel  == `wb_valD_sel_valP && memory_i_commit) ? select_pc_i_pc + 32'd4     :
                               (decode_i_wb_valD_sel  == `wb_valD_sel_valM && memory_i_commit) ? memory_i_valM  :  32'd0;



endmodule