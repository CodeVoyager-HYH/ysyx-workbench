module write_back(
    //write_back
    input wire          regW_i_wb_reg_wen,
    input wire [4:0]    regW_i_wb_rd,
    input wire [11:0]   regW_i_wb_csr_rd,
    input wire [1:0]    regW_i_wb_valD_sel,
    input wire [2:0]    regW_i_wb_csr_sel,
    input wire [31:0]   regW_i_valM,

    input wire [31:0]   regW_i_pc,
    input wire [31:0]   regW_i_valE,
    input wire [31:0]   regW_i_instr,

    output wire         write_back_o_wb_reg_wen,
    output wire [4:0]   write_back_o_wb_rd,
    output wire [11:0]  write_back_o_wb_csr_rd,
    output wire [2:0]   write_back_o_wb_csr_sel,
    output wire [31:0]  write_back_o_wb_valD
);

import "DPI-C" function void dpi_ebreak		(input int pc);

always @(*) begin
	if(regW_i_instr == 32'h00100073) begin
		dpi_ebreak(regW_i_pc);
	end
end

assign write_back_o_wb_rd      = regW_i_wb_rd;
assign write_back_o_wb_csr_rd  = regW_i_wb_csr_rd;
assign write_back_o_wb_reg_wen = regW_i_wb_reg_wen;
assign write_back_o_wb_csr_sel = regW_i_wb_csr_sel;
assign write_back_o_wb_valD    = (regW_i_wb_valD_sel  == `wb_valD_sel_valE ) ? regW_i_valE : 
                                 (regW_i_wb_valD_sel  == `wb_valD_sel_valP ) ? regW_i_pc + 32'd4 :
                                 (regW_i_wb_valD_sel  == `wb_valD_sel_valM ) ? regW_i_valM : 32'd0;


endmodule
