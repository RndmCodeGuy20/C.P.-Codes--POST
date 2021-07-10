library ieee;
use ieee.std_logic_1164.all;

entity Exp4 is
  port (
    A,B,C : in std_logic;
    LHS1,LHS2,RHS1,RHS2 : out std_logic
  ) ;
end Exp4 ;

architecture bev of Exp4 is
begin
    LHS1 <= A or B or C;
    LHS2 <= B or C or A;
    RHS1 <= C or A or B;
    RHS2 <= B or A or C;
end bev; -- bev