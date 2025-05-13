module regF(
    input  wire clk,
    input  wire rst,
    
    input  wire         ctrl_i_regF_stall,
    input  wire [31:0]  select_pc_o_pc,

    input  wire         io_master_awready,
    input  wire         io_master_wready,
    input  wire         io_master_bvalid,

    output reg          regF_o_io_master_awready,
    output reg          regF_o_io_master_wready,
    output reg          regF_o_io_master_bvalid,
    output reg  [31:0]  regF_o_pc
);
initial 
    regF_o_pc     = 32'h2000_0000;

always @(posedge clk) begin
    if(rst) begin
        regF_o_pc     <= 32'h2000_0000;
    end
    else if(~ctrl_i_regF_stall)begin
        regF_o_pc     <= select_pc_o_pc;
        regF_o_io_master_awready <= io_master_awready;
        regF_o_io_master_wready  <= io_master_wready;
        regF_o_io_master_bvalid  <= io_master_bvalid;
    end
end
endmodule
