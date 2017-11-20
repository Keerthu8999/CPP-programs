module Dual_Input_DFF ( output reg Q, input D1, D2, select, clk, reset_b);
always @ ( posedge clk, negedge reset_b)
if (reset_b == 0) Q <= 0;
else Q <= select ? D2 : D1;
endmodule
module t_Dual_Input_DFF ();
wire Q;
reg D1, D2, select, clk, reset_b;
Dual_Input_DFF M0 (Q, D1, D2, select, clk, reset_b);
initial #350 $finish ;
initial begin clk = 0; forever #5 clk = ~clk; end
initial fork
select = 0;
#30 select = 1;
#60 select = 0;
join
initial fork
#2 reset_b = 1;
#3 reset_b = 0;
#4 reset_b = 1;
D1 = 0;
D2 = 1;
join
endmodule
