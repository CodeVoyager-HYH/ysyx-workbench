`include "define.v"
module regfile(
    input wire clk,
    input wire rst,
    
    input wire [2:0]   write_back_i_wb_csr_sel,
    input wire [11:0]  write_back_i_wb_csr_rd,

    input wire         write_back_i_wb_reg_wen,
	input wire [4:0]   write_back_i_wb_rd,
	input wire [31:0]  regW_i_pc,
    input wire [31:0]  write_back_i_wb_valD,

    input  wire [4:0]  decode_i_rs1,
    input  wire [11:0] decode_i_rs2,
    output wire [31:0] regfile_o_valA,
    output wire [31:0] regfile_o_valB
);
//---------------------------------------------------regfile-------------------------------------------------------
reg [31:0] regfile[31:0];
import "DPI-C" function void dpi_read_regfile(input logic [31 : 0] a []);

initial begin
	dpi_read_regfile(regfile);
end
initial begin
    integer i;
    for (i = 0; i < 32; i = i + 1) begin
        regfile[i] = 0;
    end
    regfile[20] = 32'h80000000;
end


assign regfile_o_valA = (decode_i_rs1 ==  5'd0  ) ? 32'd0   : regfile[decode_i_rs1[4:0]];

assign regfile_o_valB = (decode_i_rs2 ==  12'd0  ) ? 32'd0   : 
                        (decode_i_rs2 == `mstatus) ? mstatus : 
                        (decode_i_rs2 == `mtvec  ) ? mtvec   :
                        (decode_i_rs2 == `mepc   ) ? mepc    :
                        (decode_i_rs2 == `mcause ) ? mcause  : regfile[decode_i_rs2[4:0]];

always @(posedge clk) begin
    if(rst) begin
        regfile[0]  <= 32'd0;
    end
    else if(write_back_i_wb_reg_wen && write_back_i_wb_rd != 5'd0) begin
        regfile[write_back_i_wb_rd] <= write_back_i_wb_valD;
    end
end

//-----------------------------------------------------csr-------------------------------------------------------------
reg [31:0] mstatus; 
reg [31:0] mtvec;
reg [31:0] mcause;
reg [31:0] mepc;


always @(posedge clk) begin
	if(rst) begin
		mtvec   <= 32'd0;
		mstatus <= 32'h1800;
		mepc    <= 32'd0;
		mcause  <= 32'd0; 
    end
	else if(write_back_i_wb_csr_sel == `csr_sel_ecall) begin
		mepc    <= regW_i_pc ;
		mcause  <= write_back_i_wb_valD;
	end
	else if(write_back_i_wb_csr_sel == `csr_sel_csrrs || write_back_i_wb_csr_sel == `csr_sel_csrrw) begin
		if(write_back_i_wb_csr_rd 	== `mstatus) begin
            regfile[write_back_i_wb_rd] <= mstatus;
            mstatus	<= write_back_i_wb_valD;
        end
        else if(write_back_i_wb_csr_rd == `mtvec) begin
            regfile[write_back_i_wb_rd] <= mtvec;
            mtvec 	<= write_back_i_wb_valD;
        end
        else if(write_back_i_wb_csr_rd == `mepc) begin
            regfile[write_back_i_wb_rd] <= mepc;
            mepc 	<= write_back_i_wb_valD;
        end
    	else if(write_back_i_wb_csr_rd == `mcause) begin
            regfile[write_back_i_wb_rd] <= mcause;
            mcause 	<= write_back_i_wb_valD;  
        end
	end
end


endmodule