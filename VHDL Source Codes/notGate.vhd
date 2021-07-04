library ieee;
use ieee.std_logic_1164.all;

entity notGate is
	port(A : in std_logic;
	     Y : out std_logic);

end notGate;

architecture bev of notGate is
begin 
	Y <= not A;
end bev;
