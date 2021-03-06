-- Author: Ryan Rivera, FNAL

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_arith.all;
use IEEE.std_logic_unsigned.all;

	-- when enable is high out_data = rx_data, else out_data = 0.
entity filter_data_out is
	port (	
		enable : in std_logic;
		rx_data : in std_logic_vector(7 downto 0);
		out_data : out std_logic_vector(7 downto 0)	
	) ;
end;


architecture filter_data_out_arch of filter_data_out is	
begin				  
	
	out_data <= rx_data when enable = '1' else (others => '0');		
	
end filter_data_out_arch;				