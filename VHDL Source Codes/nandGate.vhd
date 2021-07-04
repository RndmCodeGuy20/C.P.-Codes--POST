library ieee;
use ieee.std_logic_1164.all;

entity nandGate is
	port(A : in std_logic;
	     B : in std_logic;
	     Y : out std_logic);

end nandGate;

architecture bev of nandGate is
begin 
	Y <= A nand B;
end bev;
