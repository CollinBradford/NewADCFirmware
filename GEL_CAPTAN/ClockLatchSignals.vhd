----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    11:13:58 09/23/2016 
-- Design Name: 
-- Module Name:    ClockLatchSignals - Behavioral 
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

entity ClockLatchSignals is
    Port ( clk : in  STD_LOGIC;
           rst : in  STD_LOGIC;
           signals : out  STD_LOGIC_VECTOR (7 downto 0));
end ClockLatchSignals;

--Hey, hey.  So, this is a module that creates signals to latch the DCMs.  Upon reset, this module will loop through the signals one at 
--a time starting with 0 and going to 7.  To latch your clocks, simply attach a signal from this module to the dcm.  If there are 
--multiple DCMs, attach signal 0 to the first, signal 1 to the second, and so on.  Each DCM is given about 16 clocks to latch.  

architecture Behavioral of ClockLatchSignals is
signal delay : unsigned(3 downto 0); --creates the delay for each latch.  
signal clock_place : unsigned(2 downto 0);  --Holds our place so we can tell which clock we need to latch next
signal triggered : std_logic;  --Set true after start of rst.  
signal done : std_logic;  --Sets when the trigger is finished.  Triggered is not reset until rst is low.  
--triggered and done are both reset when trigger is high, done is high, and rst is low.  
begin
	
	process(clk) begin
		
		if(rst = '1' and triggered = '0') then -- new trigger
			triggered <= '1';
			done <= '0';
			signals <= "00000001"; --reset the first signal
		end if;
		
		if(triggered = '1' and done = '0') then --In the middle of a trigger.  This is going to be the most complicated part here.  
			
			--TODO 
			
		end if;
		
	end process;
	
end Behavioral;

