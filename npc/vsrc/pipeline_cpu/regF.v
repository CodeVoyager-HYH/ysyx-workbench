module regF(
    input  wire clk,
    input  wire rst,
    
    input  wire         ctrl_i_regF_stall,
    input  wire [31:0]  select_pc_o_pc,
input wire soc_stall,
input wire ctrl_o_regF_bubble,
    output reg  [31:0]  regF_o_pc
);
initial 
    regF_o_pc     = 32'h2000_0000;

always @(posedge clk) begin
    if(rst) begin
        regF_o_pc     <= 32'h2000_0000;
    end
    else if(ctrl_o_regF_bubble && soc_stall)begin
        regF_o_pc     <= select_pc_o_pc;
    end
    else if(~ctrl_i_regF_stall)begin
        regF_o_pc     <= select_pc_o_pc;
    end
    
end

endmodule
