module axi4_mem(
    input   wire        rst,

//写数据--------------------------------------------------
    input   wire        axi4_mem_i_io_master_wready,
    input   wire        memory_i_io_master_wvalid,   //写有效。这个信号表示有效的写数据和选通可用:1 = 写数据和WSTRB可用 ； 0 =写数据和WSTRB不可用。
    input   wire [31:0] memory_i_io_master_wdata,    //写数据
    input   wire [3:0]  memory_i_io_master_wstrb,    //写选通（strobe）。这个信号指示内存中要更新的字节位置。
  
    output  wire        axi4_mem_o_io_master_wvalid,
    output  wire [31:0] axi4_mem_o_io_master_wdata,
    output  wire [3:0]  axi4_mem_o_io_master_wstrb,

//写地址-------------------------------------------------	
    input   wire        axi4_mem_i_io_master_awready,
	input   wire 		memory_i_io_master_awvalid,    
	input   wire [2:0]	memory_i_io_master_awsize,
	input   wire [31:0] memory_i_io_master_awaddr,
  
    output  wire        axi4_mem_o_io_master_awvaild,
    output  wire [2:0]  axi4_mem_o_io_master_awsize,
    output  wire [31:0] axi4_mem_o_io_master_awaddr,

//写响应--------------------------------------------------
    output  wire        axi4_mem_o_io_master_bready,

//读数据--------------------------------------------------
    input   wire [31:0] regM_i_valE,    //要读的地址
    input   wire        axi4_mem_i_io_master_arready,
    input   wire        memory_i_io_master_arvalid,
    input   wire [2:0]  memory_i_io_master_arsize,
  
    output  wire [31:0] axi4_mem_o_io_master_araddr,
    output  wire        axi4_mem_o_io_master_arvalid,
    output  wire [2:0]  axi4_mem_o_io_master_arsize,

//读地址--------------------------------------------------
    input   wire        axi4_mem_i_io_master_rvalid,
    input   wire [31:0] axi4_mem_i_io_master_rdata,
	
	//辅助判断
	input 	wire [3:0]	regM_i_mem_rw,
	input 	wire [31:0] memory_i_valM,

    output  wire        axi4_mem_o_io_master_rready,
    output  wire [31:0] axi4_mem_o_io_master_rdata
);
	wire [31:0] araddr = (regM_i_valE >= `SRAM && regM_i_valE <= `SRAM_BOUND ) ? regM_i_valE : 32'b0;
	wire [2:0]	arsize = (araddr != 32'b0) ? memory_i_io_master_arsize : 3'b0;

	wire mem_no_rw    	= (regM_i_mem_rw == `mem_no_rw);
	wire rv32_lb  		= (regM_i_mem_rw == `mem_rw_lb);	
	wire rv32_lh  		= (regM_i_mem_rw == `mem_rw_lh);
	wire rv32_lw  		= (regM_i_mem_rw == `mem_rw_lw);
	wire rv32_lbu 		= (regM_i_mem_rw == `mem_rw_lbu);
	wire rv32_lhu 		= (regM_i_mem_rw == `mem_rw_lhu);
	wire rv32_load 		= rv32_lb | rv32_lh | rv32_lw | rv32_lbu | rv32_lhu;

	wire [31:0] rdata  = (rv32_lb) ? {{24{axi4_mem_i_io_master_rdata[7] }}, axi4_mem_i_io_master_rdata[7:0]} 	:
    	             	 (rv32_lh) ? {{16{axi4_mem_i_io_master_rdata[15]}}, axi4_mem_i_io_master_rdata[15:0]}	:
					     (rv32_lw) ? axi4_mem_i_io_master_rdata 							 					: 
					     (rv32_lbu)? {24'd0 , axi4_mem_i_io_master_rdata[7:0]} 			  						:
					     (rv32_lhu)? {16'd0, axi4_mem_i_io_master_rdata[15:0]} 									: axi4_mem_i_io_master_rdata;

    //读地址通道
	assign axi4_mem_o_io_master_arvalid = memory_i_io_master_arvalid;
    // (rst) ? 1'b0 :	//表示只有在从设备准备好后才可以输出有效地址
	// 									  (axi4_mem_i_io_master_arready ) ? memory_i_io_master_arvalid : 1'b0;
	assign axi4_mem_o_io_master_araddr	= araddr;
    // (rst) ? 32'b0 :
	// 									  (axi4_mem_o_io_master_arvalid	) ? araddr : 32'b0;
	assign axi4_mem_o_io_master_arsize	= arsize;
    // (rst) ? 3'b0 :
	// 									  (axi4_mem_o_io_master_arvalid	) ? arsize : 3'b0;

    //读数据通道
	assign axi4_mem_o_io_master_rready	= (rst) ? 1'b0 :	//当次次数据有效后才可以接收数据
										  (axi4_mem_i_io_master_rvalid ) ? 1'b1	: 1'b0;					  

	assign axi4_mem_o_io_master_rdata	= rdata;
    //  (rst)	? 32'b0 :
	// 									  (axi4_mem_i_io_master_rvalid ) ? rdata : 32'b0;

    //写数据通道
    assign axi4_mem_o_io_master_wvalid  = memory_i_io_master_wvalid;
    // (rst) ? 1'b1 : 
    //                                       (axi4_mem_i_io_master_wready  && axi4_mem_i_io_master_awready) ? memory_i_io_master_wvalid : 1'b0;  //在写地址通道和写数据通道空闲后才可以置一
    assign axi4_mem_o_io_master_wdata   = memory_i_io_master_wdata;
    // (rst) ? 32'b0 : 
    //                                       (axi4_mem_o_io_master_wvalid ) ? memory_i_io_master_wdata     : 32'b0;
    assign axi4_mem_o_io_master_wstrb   = memory_i_io_master_wstrb;
    // (rst) ? 4'b0 : 
    //                                       (axi4_mem_o_io_master_wvalid ) ? memory_i_io_master_wstrb : 4'b0;
    
    //写地址通道
    assign axi4_mem_o_io_master_awvaild = memory_i_io_master_awvalid;
    // (rst) ? 1'b1 : 
    //                                       (axi4_mem_i_io_master_wready  && axi4_mem_i_io_master_awready) ? memory_i_io_master_awvalid : 1'b0; //在写地址通道和写数据通道空闲后才可以置一
    assign axi4_mem_o_io_master_awsize  = memory_i_io_master_awsize;
    // (rst) ? 3'b0 : 
    //                                       (axi4_mem_o_io_master_awvaild) ? memory_i_io_master_awsize : 3'b0;
    assign axi4_mem_o_io_master_awaddr  = memory_i_io_master_awaddr;
    // (rst) ? 32'b0 : 
    //                                       (axi4_mem_o_io_master_awvaild) ? memory_i_io_master_awaddr : 32'b0;

    assign axi4_mem_o_io_master_bready  = (rst) ? 1'b1 : 
                                          (axi4_mem_i_io_master_wready  && axi4_mem_i_io_master_awready) ? 1'b1 : 1'b0; 

endmodule   

