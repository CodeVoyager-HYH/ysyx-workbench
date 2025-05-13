`include "define.v"
module memory (
	input  wire clk,
	input  wire rst,

	input  wire [31:0]	execute_i_valE,
	input  wire [31:0]	decode_i_reg_valB,
	input  wire [3:0]	decode_i_mem_rw,
    input  wire [31:0]  fetch_i_inst_ready,

	output wire [31:0]	memory_o_valM,
    output wire         memory_o_commit
);
import "DPI-C" function int dpi_mem_write(input int addr , input int data, int len);
import "DPI-C" function int dpi_mem_read (input int addr , input int len, output int rdata);


//----------------------------------------------read mem---------------------------------------------------
wire mem_no_rw    	= (decode_i_mem_rw == `mem_no_rw);
wire rv32_lb  		= (decode_i_mem_rw == `mem_rw_lb);
wire rv32_lh  		= (decode_i_mem_rw == `mem_rw_lh);
wire rv32_lw  		= (decode_i_mem_rw == `mem_rw_lw);
wire rv32_lbu 		= (decode_i_mem_rw == `mem_rw_lbu);
wire rv32_lhu 		= (decode_i_mem_rw == `mem_rw_lhu);
wire rv32_load 		= rv32_lb | rv32_lh | rv32_lw | rv32_lbu | rv32_lhu;

reg [31:0] read_mem_data;
reg [31:0] read_mem_ready;
always @(*) begin //防止毛刺
    if (mem_no_rw) begin
        read_mem_data = 32'd0;
        read_mem_ready = 32'd0;
    end       
    else if (rv32_load) begin
        read_mem_ready = dpi_mem_read(execute_i_valE, 4, read_mem_data);
    end
    else begin
        read_mem_data = 32'd0;
        read_mem_ready =32'd0;
    end
end

assign memory_o_valM  = (rv32_lb) ? {{24{read_mem_data[7] }}, read_mem_data[7:0]} 	:
                    	(rv32_lh) ? {{16{read_mem_data[15]}}, read_mem_data[15:0]}	:
						(rv32_lw) ? read_mem_data 							 	    : 
						(rv32_lbu)? {24'd0 , read_mem_data[7:0]} 			  	    :
						(rv32_lhu)? {16'd0, read_mem_data[15:0]} 				    : read_mem_data;

//-----------------------------------------------write mem---------------------------------------------------
wire rv32_sb  = (decode_i_mem_rw == `mem_rw_sb);
wire rv32_sh  = (decode_i_mem_rw == `mem_rw_sh);
wire rv32_sw  = (decode_i_mem_rw == `mem_rw_sw);
wire [31:0] data = decode_i_reg_valB;
wire [31:0] addr = execute_i_valE;

reg write_in_progress ; //表示只写入一次，防止忙线
reg [31:0] write_ready ;

always @(posedge clk) begin
    if(rv32_sb) begin
        if(!write_in_progress)
        	write_ready <= dpi_mem_write(addr, data, 1);
        write_in_progress <= 1'd1;
	end
	else if(rv32_sh) begin
        if(!write_in_progress)
    		write_ready <= dpi_mem_write(addr, data, 2);	
        write_in_progress <= 1'd1;	
	end
	else if(rv32_sw) begin
        if(!write_in_progress)
		    write_ready <= dpi_mem_write(addr, data, 4);
        write_in_progress <= 1'd1;				
	end
    else begin
        write_in_progress <= 1'd0;
        write_ready       <= 32'd0;
    end
end

//commit_mem表示延迟完成，可以进行接下来的操作
//等于mem_no_rw表示有读写操作，read_mem_ready == 1表示写完
assign memory_o_commit =    (decode_i_mem_rw != `mem_no_rw && read_mem_ready == 32'd1 && fetch_i_inst_ready == 32'd1) ? 1'b1 :
                            (decode_i_mem_rw != `mem_no_rw && write_ready    == 32'd1 && fetch_i_inst_ready == 32'd1) ? 1'b1 :
                            (decode_i_mem_rw == `mem_no_rw && fetch_i_inst_ready == 32'd1) ? 1'b1 : 1'b0;

endmodule