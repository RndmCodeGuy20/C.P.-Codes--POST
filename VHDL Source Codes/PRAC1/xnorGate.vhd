library ieee;
use ieee.std_logic_1164.all;

entity xnorGate is
	port(A : in std_logic;
	     B : in std_logic;
	     Y : out std_logic);

end xnorGate;

architecture bev of xnorGate is
begin 
	Y <= A xnor B;
end bev;
