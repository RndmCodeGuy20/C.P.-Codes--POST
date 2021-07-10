library ieee;
use ieee.std_logic_1164.all;

entity Exp3 is
  port (
    A,B : in std_logic;
    LHS,RHS : out std_logic 
  ) ;
end Exp3 ;

architecture bev of Exp3 is
begin
    LHS <= A or B;
    RHS <= B or A;
end bev ; -- bev