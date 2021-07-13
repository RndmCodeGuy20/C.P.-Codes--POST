library ieee;
use ieee.std_logic_1164.all;

entity Exp9 is
  port (
    A,B,C : in std_logic;
    LHS,RHS : out std_logic
  ) ;
end Exp9 ;

architecture bev of Exp9 is
begin
    LHS <= (A and B) or (not(A) and C) or (B and C);
    RHS <= (A and B) or (not(A) and C);
end bev ; -- bev