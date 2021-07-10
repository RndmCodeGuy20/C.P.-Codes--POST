library ieee;
use ieee.std_logic_1164.all;

entity Exp8 is
  port (
    A,B,C,D,E,F,G : in std_logic;
    LHS,RHS : out std_logic
  ) ;
end Exp8 ;

architecture bev of Exp8 is
begin
    LHS <= not((A and B) or (C and D) or (E and F and G));
    RHS <= (not(A and B) and not(C and D) and not(E and F and G));
end bev ; -- bev