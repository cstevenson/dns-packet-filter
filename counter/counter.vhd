----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    22:21:30 12/05/2012 
-- Design Name: 
-- Module Name:    counter - behv 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

entity counter is
	generic (N: natural := 2);
   Port 	( clk 	: in  STD_LOGIC;
           clear 	: in  STD_LOGIC;
           inc    : in  STD_LOGIC;
           enable : in  STD_LOGIC;
           Q 		: out STD_LOGIC_VECTOR(N-1 downto 0)
			);
end counter;

architecture behv of counter is

	signal Pre_Q: std_logic_vector(N-1 downto 0) := (others=>'0');
	
begin

	process(clk, clear)
	begin
		if clear = '1' then
			Pre_Q <= Pre_Q - Pre_Q;
		elsif (clk='1' and clk'event) then
			if enable = '1' or inc = '1' then
				Pre_Q <= Pre_Q + '1';
			end if;
		end if;
	end process;	
	
   Q <= Pre_Q;

end behv;

