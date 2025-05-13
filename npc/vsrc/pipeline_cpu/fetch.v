module fetch(
	input wire  [31:0] regF_i_pc,

//	output wire [31:0] fetch_o_valP,
	output wire [31:0] fetch_o_pre_pc,
	output reg [31:0] fetch_o_instr,
	output wire  	   fetch_o_commit
);
import "DPI-C" function int  dpi_mem_read 	(input int addr  , input int len, int instr);
import "DPI-C" function void  mrom_read 	(input int addr  , output int data);

assign fetch_o_pre_pc = regF_i_pc + 32'd4; //分支预测
//assign fetch_o_instr  = (regF_i_pc == 32'h80000008 ) ? mrom_read(regF_i_pc ,  fetch_o_instr) : dpi_mem_read(regF_i_pc, 4, 32'b1);
assign fetch_o_commit = 1;

always @(*) begin
	if(regF_i_pc >= `MROM && regF_i_pc <= `MROM_BOUND) begin
		mrom_read(regF_i_pc ,  fetch_o_instr);
	end
	else begin
		fetch_o_instr =  dpi_mem_read(regF_i_pc, 4, 32'b1);
	end
end

endmodule