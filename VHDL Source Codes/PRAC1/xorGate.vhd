library ieee;
use ieee.std_logic_1164.all;

entity xorGate is
	port(A : in std_logic;
	     B : in std_logic;
	     Y : out std_logic);

end xorGate;

architecture bev of xorGate is
begin 
	Y <= A xor B;
end bev;
