library ieee;
use ieee.std_logic_1164.all;

entity Exp5 is
  port (
    A,B,C,D,E : in std_logic;
    LHS,RHS : out std_logic
  ) ;
end Exp5 ;

architecture bev of Exp5 is
begin
    LHS <= (A and B and C and (D or E));
    RHS <= ((A and B and C and D) or (A and B and C and E));
end bev ; -- bev