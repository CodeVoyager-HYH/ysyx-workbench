module axi4_mem(
    input   wire        rst,

    input   wire        regM_i_io_master_wready,
    input   wire        memory_i_io_master_wvalid,   //写有效。这个信号表示有效的写数据和选通可用:1 = 写数据和WSTRB可用 ； 0 =写数据和WSTRB不可用。
    input   wire [31:0] memory_i_io_master_wdata,    //写数据
    input   wire [3:0]  memory_i_io_master_wstrb,    //写选通（strobe）。这个信号指示内存中要更新的字节位置。

    input   wire        regM_i_io_master_awready,
	input   wire 		memory_i_io_master_awvalid,    
	input   wire [2:0]	memory_i_io_master_awsize,
	input   wire [31:0] memory_i_io_master_awaddr,

    output  wire        axi4_mem_o_io_master_wvalid,
    output  wire [31:0] axi4_mem_o_io_master_wdata,
    output  wire [3:0]  axi4_mem_o_io_master_wstrb,

    output  wire        axi4_mem_o_io_master_awvaild,
    output  wire [2:0]  axi4_mem_o_io_master_awsize,
    output  wire [31:0] axi4_mem_o_io_master_awaddr,

    output  wire        axi4_mem_o_io_master_bready
);
//目前选择的是当写数据和写地址都为空才可以进行操作    
    //写数据通道
    assign axi4_mem_o_io_master_wvalid  = (rst) ? 1'b1 : 
                                          (regM_i_io_master_wready  && regM_i_io_master_awready) ? memory_i_io_master_wvalid : 1'b0;  //在写地址通道和写数据通道空闲后才可以置一
    assign axi4_mem_o_io_master_wdata   = (rst) ? 32'b0 : 
                                          (axi4_mem_o_io_master_wvalid ) ? memory_i_io_master_wdata     : 32'b0;
    assign axi4_mem_o_io_master_wstrb   = (rst) ? 4'b0 : 
                                          (axi4_mem_o_io_master_wvalid ) ? memory_i_io_master_wstrb : 4'b0;
    
    //写地址通道
    assign axi4_mem_o_io_master_awvaild = (rst) ? 1'b1 : 
                                          (regM_i_io_master_wready  && regM_i_io_master_awready) ? memory_i_io_master_awvalid : 1'b0; //在写地址通道和写数据通道空闲后才可以置一
    assign axi4_mem_o_io_master_awsize  = (rst) ? 3'b0 : 
                                          (axi4_mem_o_io_master_awvaild) ? memory_i_io_master_awsize : 3'b0;
    assign axi4_mem_o_io_master_awaddr  = (rst) ? 32'b0 : 
                                          (axi4_mem_o_io_master_awvaild) ? memory_i_io_master_awaddr : 32'b0;

    assign axi4_mem_o_io_master_bready  = (rst) ? 1'b1 : 
                                          (regM_i_io_master_wready  && regM_i_io_master_awready) ? 1'b1 : 1'b0; 
endmodule   

