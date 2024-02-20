#include "BitcoinExchange.hpp"


int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error with arguments." << std::endl;
		return 0;
	}

	BitcoinExchange btc;

	//std::cout << "Tamaño: " << btc.findValueForDate("2012-01-11") << std::endl;
	
	btc.calculateFile(argv[1]);

	return 0;
}