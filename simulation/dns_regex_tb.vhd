--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   22:32:57 06/06/2012
-- Design Name:   
-- Module Name:   D:/pgm/dns_regex/dns_regex_tb.vhd
-- Project Name:  dns_regex
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: dns_regex
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.std_logic_textio.ALL;
use ieee.std_logic_unsigned.all;
--use ieee.std_logic_arith.all;
LIBRARY std;
USE std.textio.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY dns_regex_tb IS
END dns_regex_tb;
 
ARCHITECTURE behavior OF dns_regex_tb IS 
 
	FILE fr: TEXT OPEN READ_MODE IS "dns_test_input.txt";
	FILE fw: TEXT OPEN WRITE_MODE IS "test_results.txt";

    -- Component Declaration for the Unit Under Test (UUT) 
    COMPONENT dns_regex
    Port ( clk 				: in  STD_LOGIC;
           reset 				: in  STD_LOGIC;
           data_in 			: in  STD_LOGIC_VECTOR (7 downto 0);
           sof_in_n 			: in  STD_LOGIC;
           eof_in_n 			: in  STD_LOGIC;
           src_rdy_in_n 	: in  STD_LOGIC;
           match_out 		: out STD_LOGIC;
           rdy_out 			: out STD_LOGIC
        );
    END COMPONENT;
    

	-- constants
	constant PASS: string(1 to 4) := "pass";
	constant FAIL: string(1 to 4) := "fail";

   -- inputs
   signal clk : std_logic := '0';
   signal reset : std_logic := '0';
   signal data_in : std_logic_vector(7 downto 0) := (others => '0');
   signal sof_in_n : std_logic := '1';
   signal eof_in_n : std_logic := '1';
   signal src_rdy_in_n : std_logic := '1';

 	-- outputs
   signal rdy_o : std_logic;
   signal match_o : std_logic;

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: dns_regex PORT MAP (
          clk => clk,
          reset => reset,
          data_in => data_in,
          sof_in_n => sof_in_n,
          eof_in_n => eof_in_n,
			 src_rdy_in_n => src_rdy_in_n,
          rdy_out => rdy_o,
          match_out => match_o
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '1';
		wait for clk_period/2;
		clk <= '0';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process

	variable lr: LINE;
	variable lw: LINE;
	variable line_input: std_logic_vector(1263 downto 0);
	variable ascii_input: std_logic_vector(7 downto 0);
	variable good_value: boolean;
	variable N: integer range 0 to 1264;
	variable rdy: boolean := false;
	variable expected_result: std_ulogic;

   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for clk_period;
		reset <= '1';
      wait for clk_period*4;
		reset <= '0';
      wait for clk_period;

		while not ENDFILE(fr) LOOP
			
			ASSERT FALSE
				REPORT "Reading next DNS packet..."
				SEVERITY NOTE;
			READLINE(fr, lr);

			HREAD(lr, line_input, good_value);
			ASSERT (good_value)
				REPORT "Error reading input...!"
				severity FAILURE;
			
			READ(lr, expected_result, good_value);
			ASSERT (good_value)
				REPORT "Error reading expected result...!"
				severity FAILURE;
			
			rdy := false;
			N := 1264;
			sof_in_n <= '0';
			src_rdy_in_n <= '0';
			eof_in_n <= '1';
			while (not rdy AND N > 0) LOOP
					
				ascii_input := line_input((N - 1) downto (N - 8));
				N := (N - 8);
				data_in <= ascii_input;

				wait for clk_period;
				sof_in_n <= '1';
				if(rdy_o = '1') then
					rdy := true;
				end if;
			END LOOP;
			--src_rdy_in_n <= '1';
			--eof_in_n <= '0';
			
			ASSERT FALSE
				REPORT "Writing match results..."
			SEVERITY NOTE;
			if(match_o = expected_result) then
				WRITE(lw, PASS);
			else
				WRITE(lw, FAIL);
			end if;
			WRITELINE(fw, lw);
			
		END LOOP;
		file_close(fw);
		file_close(fr);

      wait;

   end process;

END;
