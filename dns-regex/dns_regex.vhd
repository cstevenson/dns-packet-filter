----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    20:38:28 12/02/2012 
-- Design Name: 
-- Module Name:    dns_regex - Behavioral 
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

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity dns_regex is
    Port ( clk 				: in  STD_LOGIC;
           reset 				: in  STD_LOGIC;
           data_in 			: in  STD_LOGIC_VECTOR (7 downto 0);
           sof_in_n 			: in  STD_LOGIC;
           eof_in_n 			: in  STD_LOGIC;
           src_rdy_in_n 	: in  STD_LOGIC;
           match_out 		: out STD_LOGIC;
           rdy_out 			: out STD_LOGIC);
end dns_regex;

architecture Behavioral of dns_regex is

type state_type is 
	(st_idle, st_count1, st_proto, st_count2, st_port, st_ready);
signal state_reg, state_next: state_type;
signal counter : std_logic_vector(7 downto 0);
signal port_buf_reg, port_next : std_logic_vector(15 downto 0);
signal match_buf_reg, match_next, rdy_buf_reg, rdy_next: std_logic;

begin

	-- state register
	process(clk, reset)
	begin
		if(reset='1') then
			state_reg <= st_idle;
		elsif (clk'event and clk='1') then
			state_reg <= state_next;
		end if;
	end process;
	
	-- output buffer
	process(clk, reset)
	begin
		if(reset='1') then
			match_buf_reg <= '0';
			rdy_buf_reg <= '0';
		elsif (clk'event and clk='1') then
			match_buf_reg <= match_next;
			rdy_buf_reg <= rdy_next;
		end if;
	end process;
	
	-- next-state logic
	process(state_reg, sof_in_n, eof_in_n, src_rdy_in_n)
	begin
		case state_reg is
			when st_idle =>
				if sof_in_n = '0' and src_rdy_in_n = '0' then
					state_next <= st_count1;
				end if;
			when st_count1 =>
				if counter < X"16" then -- 22
					counter <= counter + '1';
				else
					state_next <= st_proto;
				end if;
			when st_proto =>
			when st_count2 =>
			when st_port =>
			when st_ready =>
		end case;
	end process;
	
	-- look-ahead output logic
	process(state_next)
	begin
		match_next <= '0'; -- default value
		rdy_next <= '0'; -- default value
		case state_next is
			when st_idle =>
			when st_count1 =>
			when st_proto =>
			when st_count2 =>
			when st_port =>
			when st_ready =>
		end case;
	end process;

	-- output
	match_out <= match_buf_reg;
	rdy_out <= rdy_buf_reg;
end Behavioral;

