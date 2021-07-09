library ieee;
use ieee.std_logic_1164.all;

entity combGates is
  port (
     A, B: in std_logic ;
      out_and, 
      out_or, 
      out_nand, 
      out_nor, 
      out_xor, 
      out_xnor, 
      out_not : out std_logic
  ) ;
end combGates;

architecture bev of combGates is
begin
    out_and <= A and B;
      out_or <= A or B;
      out_nand <= A nand B;
      out_nor <= A nor B;
      out_xor <= A xor B;
      out_xnor <= not (A xor B);
      out_not <= not A;
end bev ;