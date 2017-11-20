



module A(a,b,c);
    input a,b;
    output c;

    assign c=a&b;

    initial
      $display("%b",c);
endmodule

module testbench11;
   reg a,b;
   wire c;

   A a1(a,b,c);

   initial
      $monitor(,$time,"a=%b,b=%b,c=%b",a,b,c);

   initial
      begin
         #0 a=1'b0;b=1'b0;         
         #3 a=1'b0;b=1'b0; 
         #3 a=1'b0;b=1'b0; 
      end
endmodule


