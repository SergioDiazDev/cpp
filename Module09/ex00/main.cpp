#include "BitcoinExchange.hpp"


int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error with arguments." << std::endl;
		return 0;
	}
	std::string filename(argv[1]);
	std::cout << filename << std::endl;

	BitcoinExchange btc;

	std::cout << "Tamaño: " << btc.size() << std::endl;
	return 0;
}