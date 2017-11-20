// Design
// D flip-flop
module dff (clk, reset,
  d, q, qb);
  input      clk;
  input      reset;
  input      d;
  output     q;
  output     qb;

  reg        q;

  assign qb = ~q;

  always @(posedge clk or posedge reset)
  begin
    if (reset) begin
      // Asynchronous reset when reset goes high
      q <= 1'b0;
    end else begin
      // Assign D to Q on positive clock edge
      q <= d;
    end
  end
endmodule
// Testbench
module test;

  reg clk;
  reg reset;
  reg d;
  wire q;
  wire qb;
  
  // Instantiate design under test
  dff DFF(.clk(clk), .reset(reset),
          .d(d), .q(q), .qb(qb));
          
  initial begin
    // Dump waves
    $dumpfile("dump.vcd");
    $dumpvars(1);
    
    $display("Reset flop.");
    clk = 0;
    reset = 1;
    d = 1'bx;
    display;
    
    $display("Release reset.");
    d = 1;
    reset = 0;
    display;

    $display("Toggle clk.");
    clk = 1;
    display;
  end
  
  task display;
    #1 $display("d:%0h, q:%0h, qb:%0h",
      d, q, qb);
  endtask

endmodule
