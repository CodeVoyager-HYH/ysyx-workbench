module axi4_uart (
    //AXI4 全局变量
    input   wire        aclk        ,
    input   wire        aresetn     ,
    
    //AXI4 写地址通道
    input   wire        awvalid     ,//写地址有效信号。为高指示地址有效。
    output  reg         awready     ,//写地址准备信号。为高表示从设备空闲，准备接收地址；为低表示从设备忙。
    input   wire [31:0] awaddr      ,//写入的地址
    output  wire [ 2:0] awsize      ,//突发大小,确定突发传输中的每个传输的大小    

    //AXI4 写数据通道
    input   wire [31:0] wdata       ,//写入的数据
    input   wire [ 7:0] wstrb       ,//写掩码
    output  reg         wready      ,//写有效。为高指示数据有效。
    input   reg         wvalid      ,//写准备。为高表示从设备空闲，准备接收数据；为低表示从设备忙。

    //AXI4 读地址通道
    input   wire [31:0] araddr      ,//读出的地址
    input   wire        arvalid     ,//读地址有效信号。为高指示地址有效。
    output  reg         arready     ,//读地址准备信号。为高表示从设备空闲，准备接收地址；为低表示从设备忙。
    output  reg  [ 2:0] arsize      ,//突发大小。这个信号用于确定突发传输中每个传输的大小。

    //AXI4 读数据通道
    output  reg [31:0]  rdata       ,//读出的数据
    output  reg [ 1:0]  rresp       ,//读相应，该信号表示读状态，可允许相应的表示为OKAY ， EXOKAY ， SLVERR ， DECERR。
    input   reg         rready      ,//读准备。为高表示主设备空闲，准备接收数据；为低表示主设备忙。
    output  reg         rvalid      ,//	读有效。为高指示数据有效。
    
    //AXI4 写响应通道
    input   wire        bready      ,//写响应准备。为高表示主设备空闲，准备接收写响应；为低表示主设备忙。
    output  reg [ 1:0]  bresp       ,//写响应。该信号表示写状态，可允许相应的表示为OKAY\EXOKAY\SLVERR\DECERR。
    output  reg         bvalid       //写响应有效。为高指示响应数据有效。
);
/***********************************************************************************    
* 读事务握手依赖：
*  1.从机可以在 ARVALID 出现的时候在给出 ARREADY 信号，也可以先给出ARREADY信号，再等待 ARVALID 。
*  2.从机必须等待 ARVALID 和 ARREADY 信号有效才能给出RVALID信号，开始数据传输
************************************************************************************/



/***********************************************************************************
* 写事务握手依赖关系遵循以下 6 点：
* （ 1）主机不必等待从机先给出 AWREADY 或 WREADY 信号后再给出信号 AWVALID 或 WVLAID。
* （ 2）从机可以等待信号 AWVALID 有效或 WVALID 信号有效或者两个都有效之后再给出 AWREADY 信号。
* （ 3）从机可以在 AWVALID 有效或 WVALID 信号有效或者两个都有效之前给出 AWREADY 信号。
* （ 4）从机可以等待 AWVALID 或 WVALID 信号有效或者两个信号都有效之后再给出 WREADY 信号。
* （ 5）从机可以在 AWVALID 或 WVALID 信号有效或者两个信号都有效之前给出 WREADY 信号
* （ 6）从机必须在 WVALID 和 WREADY 信号有效之后再给出 BVALID 信号
***********************************************************************************/





endmodule