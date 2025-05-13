`include "define.v"
module fetch(
    input   wire [31:0] select_pc_i_pc,
    output  reg  [31:0] fetch_o_inst_ready,
    output  reg [31:0] fetch_o_instr  
);
import "DPI-C" function int dpi_mem_read (input int addr , input int len, output int rdata);

always @(*) begin
    fetch_o_inst_ready = dpi_mem_read(select_pc_i_pc, 4, fetch_o_instr);
end

endmodule