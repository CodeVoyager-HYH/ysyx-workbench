`include "define.v"
module memory(
	input wire clk,
	input wire rst,
	input wire  [31:0]	regM_i_valE,
	input wire  [31:0]	regM_i_valB,
	input wire  [3:0]	regM_i_mem_rw,

	input wire 	[31:0] 	instr,

//soc AXI
	//写数据
    output reg         memory_o_io_master_wvalid,   //写有效。这个信号表示有效的写数据和选通可用:1 = 写数据和WSTRB可用 ； 0 =写数据和WSTRB不可用。
    output reg  [31:0] memory_o_io_master_wdata,    //写数据
    output reg  [3:0]  memory_o_io_master_wstrb,    //写选通（strobe）。这个信号指示内存中要更新的字节位置。

	output reg  [2:0]	memory_o_io_master_awsize,
	output reg 			memory_o_io_master_awvalid,
	output reg  [31:0]	memory_o_io_master_awaddr,

	output wire [31:0]	memory_o_valM
);

import "DPI-C" function void dpi_mem_write(input int addr, input int data, int len, input int instr);
import "DPI-C" function int  dpi_mem_read (input int addr  , input int len, input int instr);

wire mem_no_rw    	= (regM_i_mem_rw == `mem_no_rw);
wire rv32_lb  		= (regM_i_mem_rw == `mem_rw_lb);
wire rv32_lh  		= (regM_i_mem_rw == `mem_rw_lh);
wire rv32_lw  		= (regM_i_mem_rw == `mem_rw_lw);
wire rv32_lbu 		= (regM_i_mem_rw == `mem_rw_lbu);
wire rv32_lhu 		= (regM_i_mem_rw == `mem_rw_lhu);
wire rv32_load 		= rv32_lb | rv32_lh | rv32_lw | rv32_lbu | rv32_lhu;



reg [31:0] read_mem_data;
assign memory_o_valM  = (rv32_lb) ? {{24{read_mem_data[7] }}, read_mem_data[7:0]} 	:
                    	(rv32_lh) ? {{16{read_mem_data[15]}}, read_mem_data[15:0]}	:
						(rv32_lw) ? read_mem_data 							 		: 
						(rv32_lbu)? {24'd0 , read_mem_data[7:0]} 			  		:
						(rv32_lhu)? {16'd0, read_mem_data[15:0]} 					: read_mem_data;
always @(*) begin
	if(mem_no_rw) begin
		read_mem_data = 32'd0;
	end
	else if(rv32_load)  begin
		read_mem_data = dpi_mem_read(regM_i_valE, 4, instr);
	end
	else begin
		read_mem_data = 32'd0;
	end
end

//S型指令
wire rv32_sb  = (regM_i_mem_rw == `mem_rw_sb);
wire rv32_sh  = (regM_i_mem_rw == `mem_rw_sh);
wire rv32_sw  = (regM_i_mem_rw == `mem_rw_sw);
wire [31:0] data = regM_i_valB;
wire [31:0] addr = regM_i_valE;

always @(posedge clk) begin
	if(rv32_sb) begin
		if (addr >= `UART && addr <= `UART_BOUND) begin
			memory_o_io_master_wstrb 		<= 4'b0001;
			memory_o_io_master_awsize		<= 3'd1;
			memory_o_io_master_awvalid		<= 1'b1;
			memory_o_io_master_wvalid		<= 1'b1;
			memory_o_io_master_wdata	 	<= data;
			memory_o_io_master_awaddr		<= addr;
		end
		else begin
			dpi_mem_write(addr, data, 1,instr);
		end
	end
	else if(rv32_sh) begin
		if (addr >= `UART && addr <= `UART_BOUND) begin
			memory_o_io_master_wstrb 		<= 4'b0010;
			memory_o_io_master_awsize		<= 3'd2;
			memory_o_io_master_awvalid		<= 1'b1;
			memory_o_io_master_wvalid		<= 1'b1;
			memory_o_io_master_wdata 		<= data;
			memory_o_io_master_awaddr		<= addr;
		end
		else begin
			dpi_mem_write(addr, data, 2,instr);		
		end
	end
	else if(rv32_sw) begin
		if (addr >= `UART && addr <= `UART_BOUND) begin
			memory_o_io_master_awvalid	<= 1'b1;
			memory_o_io_master_wstrb 		<= 4'b1000;
			memory_o_io_master_awsize		<= 3'd4;
			memory_o_io_master_wvalid		<= 1'b1;
			memory_o_io_master_wdata 		<= data;
			memory_o_io_master_awaddr		<= addr;
		end
		else begin
			dpi_mem_write(addr, data, 4,instr);		
		end
	end
	else begin
		memory_o_io_master_wstrb 		<= 4'd0;
		memory_o_io_master_awvalid	<= 1'b0;
		memory_o_io_master_wdata 		<= 32'd0;
		memory_o_io_master_awaddr		<= 32'd0;	
		memory_o_io_master_awsize		<= 3'd0;
		memory_o_io_master_wvalid		<= 1'b0;
	end

end
endmodule 
