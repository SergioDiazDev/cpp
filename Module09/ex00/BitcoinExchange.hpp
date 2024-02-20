#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <exception>
# include <ctime>
# include <cstdlib> 
# include <map>

# define DB "data.csv"

class BitcoinExchange
{
	private:
		std::map<std::string, float> _map;
		BitcoinExchange(BitcoinExchange const &copy);
		BitcoinExchange	&operator=(BitcoinExchange const &copy);
		std::time_t validateDate(std::string date);

	public:
		BitcoinExchange();
		~BitcoinExchange();
		unsigned int size();

		class ErrorOpenFile;

};

#endif
