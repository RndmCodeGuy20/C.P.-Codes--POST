library ieee;
use ieee.std_logic_1164.all;

entity Exp10 is
  port (
    A,B,C,D : in std_logic;
    LHS, RHS : out std_logic
  ) ;
end Exp10 ;

architecture bev of Exp10 is
begin
    LHS <= (A or B) and (C or D);
    RHS <= not(not(A or B) or not(C or D));
end architecture ; -- bev