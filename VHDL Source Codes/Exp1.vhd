library ieee;
use ieee.std_logic_1164.all;

entity Exp1 is
  port (
    A,B : in std_logic;
    LHS,RHS : out std_logic
  ) ;
end Exp1;

architecture bev of Exp1 is
begin
    LHS <= A xor B;
    RHS <=(A and not(B)) or (not(A) and B);
end bev ; -- bev