module axi4_lite_clint (
    input         clk,              // 时钟输入
    input         resetn,           // 复位信号（低有效）
    input         awvalid,          // 写地址有效信号
    input [31:0]  awaddr,           // 写地址
    input         wvalid,           // 写数据有效信号
    input [31:0]  wdata,            // 写数据
    output        bvalid,           // 写响应有效
    output [1:0]  bresp,            // 写响应
    input         arvalid,          // 读地址有效信号
    input [31:0]  araddr,           // 读地址
    output        rvalid,           // 读响应有效
    output [31:0] rdata,            // 读数据
    output [1:0]  rresp             // 读响应
);

    // 64位的mtime寄存器
    reg  [63:0] mtime;
    // AXI4-Lite 读操作
    reg rvalid_reg;
    reg [31:0] rdata_reg;
    reg [1:0] rresp_reg;
    
    // 时钟周期递增函数
    always @(posedge clk or negedge resetn) begin
        if (~resetn)
            mtime <= 64'b0;
        else
            mtime <= mtime + 1;
    end

    always @(posedge clk or negedge resetn) begin
        if (~resetn) begin
            rvalid_reg <= 1'b0;
            rdata_reg <= 32'b0;
            rresp_reg <= 2'b00;
        end else if (arvalid) begin
            case (araddr)
                32'h20000000: begin // mtime低32位
                    rvalid_reg <= 1'b1;
                    rdata_reg <= mtime[31:0];
                    rresp_reg <= 2'b00; // OK response
                end
                32'h20000004: begin // mtime高32位
                    rvalid_reg <= 1'b1;
                    rdata_reg <= mtime[63:32];
                    rresp_reg <= 2'b00; // OK response
                end
                default: begin
                    rvalid_reg <= 1'b0;
                    rresp_reg <= 2'b10; // 错误响应
                end
            endcase
        end else begin
            rvalid_reg <= 1'b0;
        end
    end

    // AXI4-Lite 写操作
    reg bvalid_reg;
    reg [1:0] bresp_reg;
    always @(posedge clk or negedge resetn) begin
        if (~resetn) begin
            bvalid_reg <= 1'b0;
            bresp_reg <= 2'b00;
        end else if (awvalid && wvalid) begin
            case (awaddr)
                32'h20000000: begin // 写 mtime (只读寄存器，忽略)
                    bvalid_reg <= 1'b1;
                    bresp_reg <= 2'b00; // OK response
                end
                default: begin
                    bvalid_reg <= 1'b0;
                    bresp_reg <= 2'b10; // 错误响应
                end
            endcase
        end else begin
            bvalid_reg <= 1'b0;
        end
    end

    // 输出 AXI4-Lite 信号
    assign bvalid = bvalid_reg;
    assign bresp = bresp_reg;
    assign rvalid = rvalid_reg;
    assign rdata = rdata_reg;
    assign rresp = rresp_reg;

endmodule
