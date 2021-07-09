library ieee;
use ieee.std_logic_1164.all;

entity norGate is
	port(A : in std_logic;
	     B : in std_logic;
	     Y : out std_logic);

end norGate;

architecture bev of norGate is
begin 
	Y <= A nor B;
end bev;