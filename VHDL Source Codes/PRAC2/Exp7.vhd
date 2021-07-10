library ieee;
use ieee.std_logic_1164.all;

entity Exp7 is
  port (
    A,B,C : in std_logic;
    LHS,RHS : out std_logic
  ) ;
end Exp7;

architecture bev of Exp7 is
begin
    LHS <= not(A or B or C);
    RHS <= (not(A) and not(B) and not(C));
end bev ; -- bev