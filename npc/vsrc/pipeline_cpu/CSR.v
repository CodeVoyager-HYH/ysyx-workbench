// `include "define.v"
// //在写回阶段执行
// module CSR(
// 	input wire          clk,
// 	input wire			rst

// 	input wire	[1:0]	csr_sel,	//用来判断指令类型
// 	input wire	[31:0]	pc,			//ecall用来保存现在地址
// 	input wire	[31:0]	valE,

// 	input wire	[11:0]	csr_add,

// 	output wire	[31:0]	CSR_o_error_pc
// );

// reg [31:0] mstatus; 
// reg [31:0] mtvec;
// reg [31:0] mcause;
// reg [31:0] mepc;

// always @(posedge clk) begin
// 	if(rst) begin
// 		mtvec   <= 32'd0;
// 		mstatus <= 32'h1800;
// 		mepc    <= 32'd0;
// 		mcause  <= 32'd0; 
//     end
// 	else if(csr_sel == `csr_sel_ecall) begin
// 		mepc 			<= pc;
// 		mcause 			<= valE;
// 		CSR_o_error_pc	<= mtvec;
// 	end
// 	else if(csr_sel == `csr_sel_mret) begin
// 		CSR_o_error_pc	<= mepc;
// 	end
// 	else if(csr_sel == `csr_sel_csrrs || csr_sel == `csr_sel_csrrw) begin
// 		if(csr_add 	== 12'h300)
//             mstatus	<= valE;
//         else if(csr_add == 12'h305)
//             mtvec 	<= valE;
//         else if(csr_add == 12'h341)
//             mepc 	<= valE;
//     	else if(csr_add == 12'h342)
//             mcause 	<= valE;  
// 	end
// end

// endmodule
