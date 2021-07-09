library ieee;
use ieee.std_logic_1164.all;

entity Exp2 is
  port (
    A,B : in std_logic;
    LHS,RHS : out std_logic
  ) ;
end Exp2;

architecture bev of Exp2 is
begin
    LHS <= not(A xor B);
    RHS <= (A and B) or (not(A) and not(B));
end bev ; -- bev