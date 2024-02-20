#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <exception>
# include <map>

class BitcoinExchange
{
	private:
		BitcoinExchange();
		std::map<std::string, float> _map;
		BitcoinExchange(BitcoinExchange const &copy);
		BitcoinExchange	&operator=(BitcoinExchange const &copy);

	public:
		~BitcoinExchange();
		BitcoinExchange(std::string filename);
		unsigned int getSize();

		class ErrorOpenFile;

};

#endif
