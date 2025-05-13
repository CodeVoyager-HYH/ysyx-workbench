`include "define.v"
module select_pc(
    input   wire        clk,
    input   wire        decode_i_need_jump,
    input   wire        memory_i_commit,    
    input   wire [31:0] execute_i_valE,
    output  reg  [31:0] select_pc_o_pc
);

    always @(posedge clk) begin
        if(memory_i_commit) begin
            if(decode_i_need_jump)begin
                select_pc_o_pc <= execute_i_valE;
            end
            else 
                select_pc_o_pc <= select_pc_o_pc + 4;
        end        
    end

endmodule