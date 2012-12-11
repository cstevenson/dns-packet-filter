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
use IEEE.STD_LOGIC_UNSIGNED.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity dns_regex is
	generic (PROTOCOL: STD_LOGIC_VECTOR (7 downto 0) := X"11"; -- UDP
	         PORT_NUM: STD_LOGIC_VECTOR (15 downto 0) := X"0035");
   Port (  clk 				: in  STD_LOGIC;
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
	(st_idle, st_any_char_counter, st_proto, st_any_char_counter2, st_port1, st_port2, st_match, st_no_match);
signal state_reg, state_next: state_type;
signal match_buf_reg, match_next, rdy_buf_reg, rdy_next: std_logic;

-- counter signals
signal offset : std_logic_vector(7 downto 0) := (others=>'0');
signal clear : std_logic := '0';

begin

	-- instantiate 8-bit counter 
	counter_8_unit : entity work.counter(behv)
		generic map(N=>8)
		port map(clk=>clk, clear=>clear, enable=>'1', Q=>offset);
		
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
	
	-------------------------------------------------------
	--                                                   --
	--    dns filter regex: ^.{23}11.{10,14}0035         --
	--                                                   --
	--------------------------------------------------------
	
	-- next-state logic
	process(state_reg, sof_in_n, src_rdy_in_n, data_in, offset)
	begin
		case state_reg is
			when st_idle =>
				if sof_in_n = '0' and src_rdy_in_n = '0' then
					state_next <= st_any_char_counter;
					clear <= '1';
				else
					clear <= '0';
					state_next <= st_idle;
				end if;
			when st_any_char_counter => -- count any character
				clear <= '0';
				if offset < X"15" then -- offset < 22
					state_next <= st_any_char_counter;
				else
					state_next <= st_proto;
				end if;
			when st_proto => -- protocol - offset = 23
				if data_in = PROTOCOL then
					state_next <= st_any_char_counter2;
					clear <= '1';
				else
					clear <= '0';
					state_next <= st_no_match;
				end if;
			when st_any_char_counter2 => -- count any character offset < 10
				clear <= '0';
				if offset < X"09" then -- < 10 (0-9 = 10 places)
					state_next <= st_any_char_counter2;
				else
					state_next <= st_port1;
				end if;
			when st_port1 =>				
				if offset < X"0E" then -- 14 where the port is located
					if data_in = PORT_NUM(15 downto 8) then
						state_next <= st_port2;
					else
						state_next <= st_port1;
					end if;
				else
					state_next <= st_no_match;
				end if;
			when st_port2 =>
				if offset <= X"0E" then -- offset <= 14
					if data_in = PORT_NUM(7 downto 0) then
						state_next <= st_match;
					else
						state_next <= st_port1;
					end if;
				else
					state_next <= st_no_match;
				end if;			
			when st_match =>
				state_next <= st_idle;
			when st_no_match =>
				state_next <= st_idle;
		end case;
	end process;
	
	-- look-ahead output logic
	process(state_next)
	begin
		match_next <= '0'; -- default value
		rdy_next <= '0'; -- default value
		case state_next is
			when st_idle =>
			when st_any_char_counter =>
			when st_proto =>
			when st_any_char_counter2 =>
			when st_port1 =>
			when st_port2 =>
			when st_match =>
				match_next <= '1';
				rdy_next <= '1';
			when st_no_match =>
				rdy_next <= '1';
		end case;
	end process;

	-- output
	match_out <= match_buf_reg;
	rdy_out <= rdy_buf_reg;
end Behavioral;

