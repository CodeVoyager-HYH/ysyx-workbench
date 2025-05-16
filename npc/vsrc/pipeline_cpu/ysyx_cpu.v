module ysyx_cpu(
    //全局变量
    input  wire clock,
    input  wire reset,

    //SOC
    input  wire io_interrupt,//恒为0
//master
    //写地址通道 
    input  wire         io_master_awready,  //写地址准备信号。为高表示从设备空闲，准备接收地址；为低表示从设备忙。
    output wire         io_master_awvalid,  //写地址有效信号。
    output wire [3:0]   io_master_awid,     //写地址ID。这个信号是写地址组信号的标识标签。
    output wire [31:0]  io_master_awaddr,   //写入的地址
    output wire [7:0]   io_master_awlen,    //突发长度。突发长度给出了突发传输的确切数字。这个信息决定了与该地址相关联的数据传输的数量。突发长度=数据总长-1
    output wire [2:0]   io_master_awsize,   //突发尺寸。这个信号表示突发事件中每个传输的大小。另外配合字节通道选通信号（strobe,WSTRB）准确地指示要更新的字节通道。
    output wire [1:0]   io_master_awburst,  //突发类型。突发类型，加上大小信息（AWSIZE），详细说明了如何在突发中计算每个传输的地址。
    //写数据通道
    input  wire         io_master_wready,   //写ready。这个信号表示从机可以接受写数据:1 = slave就绪 0 = slave未准备好
    output wire         io_master_wvalid,   //写有效。这个信号表示有效的写数据和选通可用:1 = 写数据和WSTRB可用 ； 0 =写数据和WSTRB不可用。
    output wire [31:0]  io_master_wdata,    //写数据
    output wire [3:0]   io_master_wstrb,    //写选通（strobe）。这个信号指示内存中要更新的字节位置。
    output wire         io_master_wlast,    //写last。这个信号表示写入突发中的最后一次传输。
    //写响应通道----------用来指示是否完成了操作
    output wire         io_master_bready,   //响应ready。这个信号表示主机可以接受响应信息。1 = master就绪0 = master未就绪
    input  wire         io_master_bvalid,   //写响应有效。这个信号表明一个有效的写响应是可用的:1 =写响应可用0 =写响应不可用。
    input  wire [3:0]   io_master_bid,      //响应ID。写响应的标识标签。BID值必须匹配slave正在响应的写事务的AWID值。
    input  wire [1:0]   io_master_bresp,    //写响应。这个信号指示写事务的状态。允许的响应有OKAY、EXOKAY、SLVERR和DECERR。
    //读地址通道
    input  wire         io_master_arready,  //表明"从"可以接收地址和对应的控制信号。从机到主机。
    output wire         io_master_arvalid,  //有效信号，表明此通道的地址控制信号有效。主机到从机；
    output wire [3:0]   io_master_arid,     //读地址ID
    output wire [31:0]  io_master_araddr,   //读地址，给出一次读突发传输的读地址。主机到从机；
    output wire [7:0]   io_master_arlen,    //突发大小
    output wire [2:0]   io_master_arsize,   //读突发大小
    output wire [1:0]   io_master_arburst,  //突发类型，
    //读数据通道
    output wire         io_master_rready,   //读数据准备就绪，表示主设备可以接受读数据。
    input  wire         io_master_rvalid,   //读数据有效，表示通道上有有效的读数据。
    input  wire [3:0]   io_master_rid,      //读数据 ID 标签，用于标识读数据事务
    input  wire [31:0]  io_master_rdata,    //读数据
    input  wire [1:0]   io_master_rresp,    //读响应，指示读事务的状态,说明同 BRESP
    input  wire         io_master_rlast,    //读最后一个信号，表示突发事务中的最后一个传输

//slave    
	//-----------------------------
    // 写地址通道 (Slave 接收 Master 的请求)
    //-----------------------------
    output wire        io_slave_awready,  // Slave 准备好接收地址
    input  wire        io_slave_awvalid,  // Master 地址有效
    input  wire [31:0] io_slave_awaddr,   // 地址
    input  wire [3:0]  io_slave_awid,     // 事务 ID
    input  wire [7:0]  io_slave_awlen,    // 突发长度
    input  wire [2:0]  io_slave_awsize,   // 突发大小
    input  wire [1:0]  io_slave_awburst,  // 突发类型

    // 写数据通道 (Slave 接收数据)
    //-----------------------------
    output wire        io_slave_wready,   // Slave 准备好接收数据
    input  wire        io_slave_wvalid,   // Master 数据有效
    input  wire [31:0] io_slave_wdata,    // 数据
    input  wire [3:0]  io_slave_wstrb,    // 字节选通
    input  wire        io_slave_wlast,    // 最后一个数据包

    //-----------------------------
    // 写响应通道 (Slave 返回响应)
    //-----------------------------
    input  wire        io_slave_bready,   // Master 准备好接收响应
    output wire        io_slave_bvalid,   // Slave 响应有效
    output wire [1:0]  io_slave_bresp,    // 响应状态
    output wire [3:0]  io_slave_bid,      // 事务 ID

    //-----------------------------
    // 读地址通道 (Slave 接收读请求)
    //-----------------------------
    output wire        io_slave_arready,  // Slave 准备好接收地址
    input  wire        io_slave_arvalid,  // Master 地址有效
    input  wire [31:0] io_slave_araddr,   // 地址
    input  wire [3:0]  io_slave_arid,     // 事务 ID
    input  wire [7:0]  io_slave_arlen,    // 突发长度
    input  wire [2:0]  io_slave_arsize,   // 突发大小
    input  wire [1:0]  io_slave_arburst,  // 突发类型

    //-----------------------------
    // 读数据通道 (Slave 返回数据)
    //-----------------------------
    input  wire        io_slave_rready,   // Master 准备好接收数据
    output wire        io_slave_rvalid,   // Slave 数据有效
    output wire [1:0]  io_slave_rresp,    // 响应状态
    output wire [31:0] io_slave_rdata,    // 数据
    output wire        io_slave_rlast,    // 最后一个数据包
    output wire [3:0]  io_slave_rid,       // 事务 ID
    //difftest
    output wire [31:0]          cur_pc,
    output                      commit,
    output wire [31:0]          commit_pc,
    output wire [31:0]          commit_pre_pc
);

//目前无用
assign io_master_awid   = 4'd0;
assign io_master_awlen  = 8'd0;
assign io_master_awburst= 2'd0;
assign io_master_wlast  = 1'd1;
assign io_master_arid   = 4'd0;
assign io_master_arlen  = 8'd0;
assign io_master_arburst= 2'd0;

assign io_slave_awready  = 1'b0;   // 1-bit
assign io_slave_wready   = 1'b0;   // 1-bit
assign io_slave_bvalid   = 1'b0;   // 1-bit
assign io_slave_bresp    = 2'h0;   // 2-bit
assign io_slave_bid      = 4'h0;   // 4-bit
assign io_slave_arready  = 1'b0;   // 1-bit
assign io_slave_rvalid   = 1'b0;   // 1-bit
assign io_slave_rresp    = 2'h0;   // 2-bit
assign io_slave_rdata    = 32'h0;  // 32-bit
assign io_slave_rlast    = 1'b0;   // 1-bit
assign io_slave_rid      = 4'h0;   // 4-bit

//difftest
// wire [31:0] cur_pc ;
// bit         commit ;
// wire [31:0] commit_pc ;
// wire [31:0] commit_pre_pc;

// import "DPI-C" function  void get_difftest(input int diff_cur_pc,input  bit diff_commit,input int diff_commit_pc, input int diff_commit_pre_pc , input int diff_instr);
// initial begin
//     get_difftest(cur_pc, commit, commit_pc, commit_pre_pc, instr);
// end

// output declaration of module rst
wire rst_o_reset;

rst u_rst(
    .clock  (clock),
    .reset  (reset),
    .rst_o_reset (rst_o_reset)
);  

// output declaration of module select_pc
wire [31:0] select_pc_o_pc ;
wire [31:0] instr;

select_pc u_select_pc(
    .fetch_i_pre_pc      	(fetch_o_pre_pc       ),    
    .execute_i_pre_pc      	(execute_o_pre_pc     ),
    .execute_i_need_jump 	(execute_o_need_jump  ),
    .select_pc_o_pc      	(select_pc_o_pc       )
);

// output declaration of module regF
reg [31:0] regF_o_pc;
reg regF_o_io_master_awready;
reg regF_o_io_master_wready;
reg regF_o_io_master_bvalid;

regF u_regF(
    .clk               	        (clock                      ),
    .rst               	        (rst_o_reset                ),
    .ctrl_i_regF_stall 	        (ctrl_o_regF_stall          ),
    .select_pc_o_pc    	        (select_pc_o_pc             ),
    .io_master_awready          (io_master_awready          ),
    .io_master_wready           (io_master_wready           ),
    .io_master_bvalid           (io_master_bvalid           ),
    .regF_o_io_master_awready   (regF_o_io_master_awready   ),
    .regF_o_io_master_wready    (regF_o_io_master_wready    ),
    .regF_o_io_master_bvalid    (regF_o_io_master_bvalid    ),
    .regF_o_pc         	        (regF_o_pc                  )
);

// output declaration of module fetch
wire [31:0] fetch_o_pre_pc;
wire [31:0] fetch_o_instr;
wire fetch_o_commit;

fetch u_fetch(
    .regF_i_pc      	(regF_o_pc       ),
    .fetch_o_pre_pc 	(fetch_o_pre_pc  ),
    .fetch_o_instr  	(fetch_o_instr   ),
    .fetch_o_commit 	(fetch_o_commit  )
);

// output declaration of module regD
wire [31:0] regD_o_pc;
wire [31:0] regD_o_pre_pc;
wire        regD_o_commit;
wire [31:0] regD_o_instr;
wire        regD_o_io_master_awready;
wire        regD_o_io_master_wready;
wire        regD_o_io_master_bvalid;

regD u_regD(
    .clk            	        (clock                   ),
    .rst            	        (rst_o_reset             ),
    .ctrl_i_regD_bubble         (ctrl_o_regD_bubble      ),
    .ctrl_i_regD_stall          (ctrl_o_regD_stall       ),
    .regF_i_pc      	        (regF_o_pc               ),
    .regF_i_io_master_awready   (regF_o_io_master_awready),
    .regF_i_io_master_wready    (regF_o_io_master_wready ),
    .regF_i_io_master_bvalid    (regF_o_io_master_bvalid ),
    .fetch_i_instr              (fetch_o_instr           ),
    .fetch_i_pre_pc 	        (fetch_o_pre_pc          ),
    .fetch_i_commit 	        (fetch_o_commit          ),
    .regD_o_io_master_awready   (regD_o_io_master_awready),
    .regD_o_io_master_wready    (regD_o_io_master_wready ),
    .regD_o_io_master_bvalid    (regD_o_io_master_bvalid ),
    .regD_o_pc      	        (regD_o_pc               ),
    .regD_o_pre_pc  	        (regD_o_pre_pc           ),
    .regD_o_commit  	        (regD_o_commit           ),
    .regD_o_instr               (regD_o_instr            )
);


// output declaration of module decode
wire [31:0] decode_o_valA;
wire [31:0] decode_o_valB;
wire [31:0] decode_o_imm;
wire [1:0]  decode_o_alu_valA_sel;
wire [1:0]  decode_o_alu_valB_sel;
wire [3:0]  decode_o_alu_func_sel;
wire [3:0]  decode_o_mem_rw;
wire [4:0]  decode_o_wb_rd;
wire [1:0]  decode_o_wb_valD_sel;
wire [4:0]  decode_o_rs1;
wire [11:0] decode_o_rs2;
wire [2:0]  decode_o_wb_csr_sel;
wire [11:0] decode_o_wb_csr_rd;
wire [11:0] regE_i_wb_csr_rd;
wire decode_o_is_ecall;
wire decode_o_wb_reg_wen;
wire decode_o_need_jump;
wire decode_o_is_mret;
wire decode_o_is_jalr;
wire decode_o_need_jump;

decode u_decode(
    .clk                     	(clock                      ),
    .rst                     	(rst_o_reset                ),
    .regD_i_instr            	(regD_o_instr               ),
    
	.regW_i_valE                (regW_o_valE                ),
	.regW_i_valM                (regW_o_valM                ),
	.regW_i_wb_valD_sel         (regW_o_wb_valD_sel         ),
	.regW_i_wb_rd               (regW_o_wb_rd               ),
	.regW_i_wb_reg_wen          (regW_o_wb_reg_wen          ),
    .regW_i_pc                  (regW_o_pc                  ),

	.regM_i_valE                (regM_o_valE                ),
	.memory_i_valM              (memory_o_valM              ),
	.regM_i_wb_valD_sel         (regM_o_wb_valD_sel         ),
	.regM_i_wb_rd               (regM_o_wb_rd               ),
	.regM_i_wb_reg_wen          (regM_o_wb_reg_wen          ),

    .regE_i_wb_csr_rd           (regE_i_wb_csr_rd           ),
    .regE_i_wb_reg_wen          (regE_o_wb_reg_wen          ),
	.regE_i_wb_rd               (regE_o_wb_rd               ),
	.execute_i_valE             (execute_o_valE             ),

    .write_back_i_wb_reg_wen 	(write_back_o_wb_reg_wen    ),
    .write_back_i_wb_rd      	(write_back_o_wb_rd         ),
    .write_back_i_wb_valD    	(write_back_o_wb_valD       ),
    .write_back_i_wb_csr_sel    (write_back_o_wb_csr_sel    ),
    .write_back_i_wb_csr_rd     (write_back_o_wb_csr_rd     ),
    
    .decode_o_valA           	(decode_o_valA              ),
    .decode_o_valB           	(decode_o_valB              ),
    .decode_o_imm            	(decode_o_imm               ),
    .decode_o_alu_valA_sel   	(decode_o_alu_valA_sel      ),
    .decode_o_alu_valB_sel   	(decode_o_alu_valB_sel      ),
    .decode_o_alu_func_sel   	(decode_o_alu_func_sel      ),

    .decode_o_mem_rw         	(decode_o_mem_rw            ),

    .decode_o_wb_csr_rd         (decode_o_wb_csr_rd         ),
    .decode_o_wb_reg_wen     	(decode_o_wb_reg_wen        ),
    .decode_o_wb_rd          	(decode_o_wb_rd             ),
    .decode_o_wb_valD_sel    	(decode_o_wb_valD_sel       ),
    .decode_o_rs1               (decode_o_rs1               ),
    .decode_o_rs2               (decode_o_rs2               ),

    .decode_o_wb_csr_sel        (decode_o_wb_csr_sel        ),
    .decode_o_need_jump         (decode_o_need_jump         ),
    .decode_o_is_jalr           (decode_o_is_jalr           ),    
    .decode_o_is_mret      	    (decode_o_is_mret           ),  
    .decode_o_is_ecall          (decode_o_is_ecall          )  
);

// output declaration of module regE
wire [31:0] regE_o_valA;
wire [31:0] regE_o_valB;
wire [31:0] regE_o_imm;
wire [1:0]  regE_o_alu_valA_sel;
wire [1:0]  regE_o_alu_valB_sel;
wire [3:0]  regE_o_alu_func_sel;
wire [3:0]  regE_o_mem_rw;
wire [4:0]  regE_o_wb_rd;
wire [11:0] regE_o_wb_csr_rd;
wire [1:0]  regE_o_wb_valD_sel;
wire [31:0] regE_o_pc;
wire [31:0] regE_o_instr;
wire [31:0] regE_o_pre_pc;
wire [2:0]  regE_o_wb_csr_sel;
wire        regE_o_is_jalr;
wire        regE_o_need_jump;
wire        regE_o_wb_reg_wen;
wire        regE_o_commit;
wire        regE_o_is_ecall;
wire        regE_o_is_mret;
wire        regE_o_io_master_awready;
wire        regE_o_io_master_wready;
wire        regE_o_io_master_bvalid;

regE u_regE(
    .clk                   	    (clock                   ),
    .rst                   	    (rst_o_reset             ),
    .ctrl_i_regE_bubble    	    (ctrl_o_regE_bubble      ),
    .decode_i_valA         	    (decode_o_valA           ),
    .decode_i_valB         	    (decode_o_valB           ),
    .decode_i_imm               (decode_o_imm            ),
    .decode_i_alu_valA_sel      (decode_o_alu_valA_sel   ),
    .decode_i_alu_valB_sel 	    (decode_o_alu_valB_sel   ),
    .decode_i_is_jalr           (decode_o_is_jalr        ),
    .decode_i_is_mret           (decode_o_is_mret        ),
    .decode_i_is_ecall          (decode_o_is_ecall       ),
    .decode_i_alu_func_sel 	    (decode_o_alu_func_sel   ),
    .decode_i_mem_rw       	    (decode_o_mem_rw         ),
    .decode_i_wb_reg_wen   	    (decode_o_wb_reg_wen     ),
    .decode_i_wb_rd        	    (decode_o_wb_rd          ),
    .decode_i_wb_valD_sel  	    (decode_o_wb_valD_sel    ),
    .decode_i_wb_csr_sel        (decode_o_wb_csr_sel     ),
    .decode_i_need_jump    	    (decode_o_need_jump      ),
    .decode_i_wb_csr_rd         (decode_o_wb_csr_rd      ),
    .regD_i_io_master_awready   (regD_o_io_master_awready),
    .regD_i_io_master_wready    (regD_o_io_master_wready ),
    .regD_i_io_master_bvalid    (regD_o_io_master_bvalid ),
    .regD_i_instr           	(regD_o_instr            ),
    .regD_i_pc             	    (regD_o_pc               ),
    .regD_i_commit         	    (regD_o_commit           ),
    .regD_i_pre_pc         	    (regD_o_pre_pc           ),
    .regE_o_valA           	    (regE_o_valA             ),
    .regE_o_valB           	    (regE_o_valB             ),
    .regE_o_imm            	    (regE_o_imm              ),
    .regE_o_alu_valA_sel   	    (regE_o_alu_valA_sel     ),
    .regE_o_alu_valB_sel   	    (regE_o_alu_valB_sel     ),
    .regE_o_alu_func_sel   	    (regE_o_alu_func_sel     ),
    .regE_o_is_jalr             (regE_o_is_jalr          ),
    .regE_o_mem_rw         	    (regE_o_mem_rw           ),
    .regE_o_wb_reg_wen     	    (regE_o_wb_reg_wen       ),
    .regE_o_wb_rd          	    (regE_o_wb_rd            ),
    .regE_o_wb_csr_rd           (regE_o_wb_csr_rd        ),
    .regE_o_wb_csr_sel          (regE_o_wb_csr_sel       ),
    .regE_o_wb_valD_sel    	    (regE_o_wb_valD_sel      ),
    .regE_o_need_jump      	    (regE_o_need_jump        ),
    .regE_o_io_master_awready   (regE_o_io_master_awready),
    .regE_o_io_master_wready    (regE_o_io_master_wready ),
    .regE_o_io_master_bvalid    (regE_o_io_master_bvalid ),
    .regE_o_pc             	    (regE_o_pc               ),
    .regE_o_commit         	    (regE_o_commit           ),
    .regE_o_instr          	    (regE_o_instr            ),
    .regE_o_pre_pc         	    (regE_o_pre_pc           ),
    .regE_o_is_mret             (regE_o_is_mret          ),
    .regE_o_is_ecall            (regE_o_is_ecall         )
);


// output declaration of module execute
wire [31:0] execute_o_pre_pc;
wire [31:0] execute_o_valE;
wire execute_o_need_jump;
wire execute_o_is_jalr;

execute u_execute(
    .regE_i_valA         	(regE_o_valA          ),
    .regE_i_valB         	(regE_o_valB          ),
    .regE_i_imm          	(regE_o_imm           ),
    .regE_i_pc           	(regE_o_pc            ),
    .regE_i_alu_valA_sel 	(regE_o_alu_valA_sel  ),
    .regE_i_alu_valB_sel 	(regE_o_alu_valB_sel  ),
    .regE_i_alu_func_sel 	(regE_o_alu_func_sel  ),
    .regE_i_need_jump    	(regE_o_need_jump     ),
    .regE_i_is_jalr         (regE_o_is_jalr       ),
    .regE_i_is_ecall        (regE_o_is_ecall      ),
    .regE_i_is_mret         (regE_o_is_mret       ),   
    .regE_i_pre_pc       	(regE_o_pre_pc        ),
    .execute_o_pre_pc    	(execute_o_pre_pc     ),
    .execute_o_valE      	(execute_o_valE       ),
    .execute_o_need_jump 	(execute_o_need_jump  )
);

// output declaration of module regM
wire [31:0] regM_o_valE;
wire [3:0]  regM_o_mem_rw;
wire [4:0]  regM_o_wb_rd;
wire [1:0]  regM_o_wb_valD_sel;
wire [31:0] regM_o_instr;
wire [31:0] regM_o_pc;
wire [31:0] regM_o_pre_pc;
wire [31:0] regM_o_valB;
wire [2:0]  regM_o_wb_csr_sel;
wire [11:0] regM_o_wb_csr_rd;
wire regM_o_commit;
wire regM_o_wb_reg_wen;
wire regM_o_io_master_awready;
wire regM_o_io_master_wready;
wire regM_o_io_master_bvalid;

regM u_regM(
    .clk                	    (clock                   ),
    .rst                	    (rst_o_reset             ),
    .execute_i_valE     	    (execute_o_valE          ),
    .execute_i_pre_pc   	    (execute_o_pre_pc        ),
    .regE_i_mem_rw      	    (regE_o_mem_rw           ),
    .regE_i_wb_reg_wen  	    (regE_o_wb_reg_wen       ),
    .regE_i_wb_rd       	    (regE_o_wb_rd            ),
    .regE_i_wb_csr_rd           (regE_o_wb_csr_rd        ),
    .regE_i_wb_csr_sel          (regE_o_wb_csr_sel       ),
    .regE_i_wb_valD_sel 	    (regE_o_wb_valD_sel      ),
    .regE_i_instr       	    (regE_o_instr            ),
    .regE_i_pc          	    (regE_o_pc               ),
    .regE_i_commit      	    (regE_o_commit           ),
    .regE_i_io_master_awready   (regE_o_io_master_awready),
    .regE_i_io_master_wready    (regE_o_io_master_wready ),
    .regE_i_io_master_bvalid    (regE_o_io_master_bvalid ),
    .regE_i_valB                (regE_o_valB             ),
    .regM_o_valE        	    (regM_o_valE             ),
    .regM_o_mem_rw      	    (regM_o_mem_rw           ),
    .regM_o_valB                (regM_o_valB             ),
    .regM_o_wb_reg_wen  	    (regM_o_wb_reg_wen       ),
    .regM_o_wb_rd       	    (regM_o_wb_rd            ),
    .regM_o_wb_csr_rd           (regM_o_wb_csr_rd        ),
    .regM_o_wb_valD_sel 	    (regM_o_wb_valD_sel      ),
    .regM_o_wb_csr_sel          (regM_o_wb_csr_sel       ),
    .regM_o_io_master_awready   (regM_o_io_master_awready),
    .regM_o_io_master_wready    (regM_o_io_master_wready ),
    .regM_o_io_master_bvalid    (regM_o_io_master_bvalid ),
    .regM_o_instr       	    (regM_o_instr            ),
    .regM_o_pc          	    (regM_o_pc               ),
    .regM_o_commit      	    (regM_o_commit           ),
    .regM_o_pre_pc      	    (regM_o_pre_pc           )
);

// output declaration of module memory
wire [31:0] memory_o_valM;
wire        memory_o_io_master_wvalid;
wire [31:0] memory_o_io_master_wdata;
wire [3:0]  memory_o_io_master_wstrb;
wire [2:0]  memory_o_io_master_awsize;
wire        memory_o_io_master_awvalid;
wire [31:0] memory_o_io_master_awaddr;

memory u_memory(
    .rst                        (rst_o_reset                ),
    .clk                        (clock                      ),
    .instr                      (regM_o_instr               ),
    .memory_o_io_master_wvalid  (memory_o_io_master_wvalid  ),
    .memory_o_io_master_wdata   (memory_o_io_master_wdata   ),
    .memory_o_io_master_wstrb   (memory_o_io_master_wstrb   ),
    .memory_o_io_master_awsize  (memory_o_io_master_awsize  ),
    .memory_o_io_master_awvalid (memory_o_io_master_awvalid ),
    .memory_o_io_master_awaddr  (memory_o_io_master_awaddr  ),
    .regM_i_valE   	            (regM_o_valE                ),
    .regM_i_valB                (regM_o_valB                ),
    .regM_i_mem_rw 	            (regM_o_mem_rw              ),
    .memory_o_valM 	            (memory_o_valM              )
);

axi4_mem u_axi4_mem(
    .rst                            (rst_o_reset                ),
    .regM_i_io_master_wready        (regM_o_io_master_wready    ),
    .memory_i_io_master_wvalid      (memory_o_io_master_wvalid  ),
    .memory_i_io_master_wdata       (memory_o_io_master_wdata   ),
    .memory_i_io_master_wstrb       (memory_o_io_master_wstrb   ),
    .regM_i_io_master_awready       (regM_o_io_master_awready   ),
    .memory_i_io_master_awvalid     (memory_o_io_master_awvalid ),
    .memory_i_io_master_awsize      (memory_o_io_master_awsize  ),
    .memory_i_io_master_awaddr      (memory_o_io_master_awaddr  ),
    .axi4_mem_o_io_master_wvalid    (io_master_wvalid           ),
    .axi4_mem_o_io_master_wdata     (io_master_wdata            ),
    .axi4_mem_o_io_master_wstrb     (io_master_wstrb            ),
    .axi4_mem_o_io_master_awvaild   (io_master_awvalid          ),
    .axi4_mem_o_io_master_awsize    (io_master_awsize           ),
    .axi4_mem_o_io_master_awaddr    (io_master_awaddr           ),
    .axi4_mem_o_io_master_bready    (io_master_bready           )
);


// output declaration of module regW
wire [4:0]  regW_o_wb_rd;
wire [1:0]  regW_o_wb_valD_sel;
wire [31:0] regW_o_valE;
wire [31:0] regW_o_pc;
wire [31:0] regW_o_instr;
wire [31:0] regW_o_pre_pc;
wire [31:0] regW_o_valM;
wire [2:0]  regW_o_wb_csr_sel;
wire [11:0] regW_o_wb_csr_rd;
wire regW_o_commit;
wire regW_o_wb_reg_wen;

regW u_regW(
    .clk                	(clock              ),
    .rst                	(rst_o_reset        ),
    .regM_i_wb_reg_wen  	(regM_o_wb_reg_wen  ),
    .regM_i_wb_rd       	(regM_o_wb_rd       ),
    .regM_i_wb_csr_rd       (regM_o_wb_csr_rd   ),
    .regM_i_wb_csr_sel      (regM_o_wb_csr_sel  ),
    .regM_i_wb_valD_sel 	(regM_o_wb_valD_sel ),
    .regM_i_valE        	(regM_o_valE        ),
    .regM_i_pc          	(regM_o_pc          ),
    .regM_i_instr       	(regM_o_instr       ),
    .regM_i_commit      	(regM_o_commit      ),
    .regM_i_pre_pc      	(regM_o_pre_pc      ),
    .memory_i_valM          (memory_o_valM      ),
    .regW_o_wb_reg_wen  	(regW_o_wb_reg_wen  ),
    .regW_o_wb_rd       	(regW_o_wb_rd       ),
    .regW_o_wb_csr_rd       (regW_o_wb_csr_rd   ),
    .regW_o_wb_csr_sel      (regW_o_wb_csr_sel  ),
    .regW_o_wb_valD_sel 	(regW_o_wb_valD_sel ),
    .regW_o_valE        	(regW_o_valE        ),
    .regW_o_valM            (regW_o_valM        ),
    .regW_o_pc          	(regW_o_pc          ),
    .regW_o_instr       	(regW_o_instr       ),
    .regW_o_commit      	(regW_o_commit      ),
    .regW_o_pre_pc      	(regW_o_pre_pc      )
);
// output declaration of module write_back
wire [4:0]  write_back_o_wb_rd;
wire [11:0] write_back_o_wb_csr_rd;
wire [31:0] write_back_o_wb_valD;
wire [2:0]  write_back_o_wb_csr_sel;
wire write_back_o_wb_reg_wen;

write_back u_write_back(
    .regW_i_wb_reg_wen       	(regW_o_wb_reg_wen          ),
    .regW_i_wb_rd            	(regW_o_wb_rd               ),
    .regW_i_wb_csr_rd           (regW_o_wb_csr_rd           ),
    .regW_i_pc                  (regW_o_pc                  ),
    .regW_i_wb_valD_sel      	(regW_o_wb_valD_sel         ),
    .regW_i_wb_csr_sel          (regW_o_wb_csr_sel          ),
    .regW_i_valM                (regW_o_valM                ),
    .regW_i_valE             	(regW_o_valE                ),
    .regW_i_instr               (regW_o_instr               ),
    .write_back_o_wb_reg_wen 	(write_back_o_wb_reg_wen    ),
    .write_back_o_wb_rd      	(write_back_o_wb_rd         ),
    .write_back_o_wb_csr_rd     (write_back_o_wb_csr_rd     ),
    .write_back_o_wb_csr_sel    (write_back_o_wb_csr_sel    ),
    .write_back_o_wb_valD    	(write_back_o_wb_valD       )
);

assign cur_pc        = regF_o_pc;
assign commit        = regW_o_commit;
assign commit_pc     = regW_o_pc;
assign commit_pre_pc = regW_o_pre_pc;
assign instr         = regW_o_instr;


// output declaration of module ctrl
wire ctrl_o_regF_stall;
wire ctrl_o_regD_stall;
wire ctrl_o_regE_stall;
wire ctrl_o_regM_stall;
wire ctrl_o_regW_stall;
wire ctrl_o_regF_bubble;
wire ctrl_o_regD_bubble;
wire ctrl_o_regE_bubble;
wire ctrl_o_regM_bubble;
wire ctrl_o_regW_bubble;

ctrl u_ctrl(
    .execute_i_need_jump 	(execute_o_need_jump  ),
    .io_master_bvalid       (io_master_bvalid     ),
    .decode_i_rs1        	(decode_o_rs1         ),
    .decode_i_rs2        	(decode_o_rs2[4:0]    ),
    .regE_i_rd           	(regE_o_wb_rd         ),
    .regE_i_mem_rw       	(regE_o_mem_rw        ),
    .ctrl_o_regF_stall   	(ctrl_o_regF_stall    ),
    .ctrl_o_regD_stall   	(ctrl_o_regD_stall    ),
    .ctrl_o_regE_stall   	(ctrl_o_regE_stall    ),
    .ctrl_o_regM_stall   	(ctrl_o_regM_stall    ),
    .ctrl_o_regW_stall   	(ctrl_o_regW_stall    ),
    .ctrl_o_regF_bubble  	(ctrl_o_regF_bubble   ),
    .ctrl_o_regD_bubble  	(ctrl_o_regD_bubble   ),
    .ctrl_o_regE_bubble  	(ctrl_o_regE_bubble   ),
    .ctrl_o_regM_bubble  	(ctrl_o_regM_bubble   ),
    .ctrl_o_regW_bubble  	(ctrl_o_regW_bubble   )
);

endmodule
