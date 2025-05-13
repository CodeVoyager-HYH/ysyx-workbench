`include "define.v"
module regfile(
    input  wire clk,
    input  wire rst,

    input  wire [4:0]  decode_i_reg_rs1,
    input  wire [4:0]  decode_i_reg_rs2,

    input  wire        write_back_i_reg_wen,
    input  wire [4:0]  write_back_i_reg_rd,
    input  wire [31:0] weitw_back_i_reg_data,

    output wire [31:0] regfile_o_valA,
    output wire [31:0] regfile_o_valB
);
import "DPI-C" function void dpi_read_regfile(input logic [31 : 0] a []);

reg [31:0] regfile[31:0];

initial begin
    dpi_read_regfile(regfile);
end

assign regfile_o_valA = (decode_i_reg_rs1 == 5'd0) ? 32'd0 : regfile[decode_i_reg_rs1];
assign regfile_o_valB = (decode_i_reg_rs2 == 5'd0) ? 32'd0 : regfile[decode_i_reg_rs2];

always @(posedge clk) begin
    if(rst) begin
        regfile[0]  <= 32'd0;
    end
    else if(write_back_i_reg_wen && write_back_i_reg_rd != 5'd0) begin
        regfile[write_back_i_reg_rd] <= weitw_back_i_reg_data;
    end
end

endmodule