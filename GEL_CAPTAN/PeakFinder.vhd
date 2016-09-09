----------------------------------------------------------------------------------
-- Company: Fermilab
-- Engineer: Collin Bradford
-- 
-- Create Date:    13:51:43 07/07/2016 
-- Design Name: 
-- Module Name:    PeakFinder - Behavioral 
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
use IEEE.numeric_std.all;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity PeakFinder is
    Port ( clk : in STD_LOGIC;
			  reset : in STD_LOGIC;
			  data_in : in  STD_LOGIC_VECTOR (15 downto 0);
			  signal_threshold : in STD_LOGIC_VECTOR(7 downto 0);
			  user_samples_after_trig : in std_logic_vector(15 downto 0);
           data_out : out  STD_LOGIC_VECTOR (15 downto 0);
           out_enable : out  STD_LOGIC);
end PeakFinder;

architecture Behavioral of PeakFinder is
	signal sample_one : unsigned(7 downto 0);
	signal sample_two : unsigned(7 downto 0);
	
	signal threshold : unsigned( 7 downto 0 );
	signal samplesSinceTrig : unsigned(15 downto 0);
	signal userSamplesSinceTrig : unsigned(15 downto 0);
	signal out_en_sig : std_logic;
	signal triggered : std_logic;--sets when we have a trigger and we are reading.  
begin
	sample_one <= unsigned(data_in(7 downto 0));
	sample_two <= unsigned(data_in(15 downto 8));
	
	threshold <= unsigned(signal_threshold);
	userSamplesSinceTrig <= unsigned(user_samples_after_trig);
	out_enable <= out_en_sig;
	
	process(clk)
	
	begin
		
		data_out(7 downto 0) <= data_in(15 downto 8);
		data_out(15 downto 8) <= data_in(7 downto 0);--I switched the signals because they weren't coming through right.  They were backwards.  
		--there is probably a good explination for this somewhere, but for now I am just going to work around it with this.  
		
		if(reset = '0') then--reset is low
			if(rising_edge(clk)) then--rising edge of clk and reset is low
				if(triggered = '0') then --If we aren't currently triggered, test for trigger.  
				
					if (sample_one > threshold or sample_two > threshold) then--controlls start of trigger.  
						out_en_sig <= '1';
						triggered <= '1';
					end if;
				else
					if(triggered = '1' and samplesSinceTrig >= userSamplesSinceTrig)then--Our sample count matches the user request.  Turn off.  
						out_en_sig <= '0';
						samplesSinceTrig <= (others => '0');
						triggered <= '0';
					end if;
				end if;
				
				if(out_en_sig = '1')then --We took another sample.  Increase the sample count
					samplesSinceTrig <= samplesSinceTrig + 1;
				end if;
			end if;
		else--reset is high
			out_en_sig <= '0';
			samplesSinceTrig <= (others => '0');
			triggered <= '0';
		end if;
	end process;
end Behavioral;

