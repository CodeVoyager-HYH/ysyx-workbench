module rst(
  input   wire clock,
  input   wire reset, 
  output  reg  rst_o_reset
);

  reg rst_n_r1,rst_n_r2;

  always @ (posedge clock or negedge reset) begin
    if (~reset) begin
        rst_n_r1 <= 1'b0 ; 
        rst_n_r2 <= 1'b0 ;
    end 
    else begin
        rst_n_r1 <= 1'b1  ; 
        rst_n_r2 <= rst_n_r1; 
    end
  end

  assign rst_o_reset = rst_n_r2 ;

endmodule