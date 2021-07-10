library ieee;
use ieee.std_logic_1164.all;

entity Exp6 is
  port (
    A,B,C,D,E,F : in std_logic;
    LHS,RHS : out std_logic
  ) ;
end Exp6 ;

architecture bev of Exp6 is
begin
    LHS <= ((A and B) and ((C and D) or (D and F)));
    RHS <= ((A and B and C and D) or (A and B and E and F)); 
end bev ; -- bev