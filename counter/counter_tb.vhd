--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   22:27:22 12/13/2012
-- Design Name:   
-- Module Name:   D:/_prj/dns-packet-filter/counter/counter_tb.vhd
-- Project Name:  counter
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: counter
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
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY counter_tb IS
END counter_tb;
 
ARCHITECTURE behavior OF counter_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT counter
    PORT(
         clk : IN  std_logic;
         clear : IN  std_logic;
         inc : IN std_logic;
         enable : IN  std_logic;
         Q : OUT  std_logic_vector(1 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal clear : std_logic := '0';
   signal inc : std_logic := '0';
   signal enable : std_logic := '0';

 	--Outputs
   signal Q : std_logic_vector(7 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
	-- instantiate 8-bit counter 
	counter_8_unit : entity work.counter(behv)
		generic map(N=>8)
		port map(clk=>clk, clear=>clear, inc=>inc, enable=>enable, Q=>Q);

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
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for clk_period*10;

      enable <= '1';
      wait for clk_period;
      wait for clk_period;
      wait for clk_period;
      wait for clk_period;
      clear <= '1';
      wait for clk_period;
      clear <= '0';
      enable <= '0';
      wait for clk_period;
      inc <= '1';
      wait for clk_period;
      inc <= '0';
      wait for clk_period;
      inc <= '1';
      wait for clk_period;
      inc <= '0';
      wait for clk_period;
      inc <= '1';
      wait for clk_period;
      inc <= '0';
      wait for clk_period;
      inc <= '1';
      wait for clk_period;
      inc <= '0';
      clear <= '1';
      wait for clk_period;
      clear <= '0';
      wait;
   end process;

END;
