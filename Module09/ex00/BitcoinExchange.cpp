#include "BitcoinExchange.hpp"

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define MAGENTA "\033[35m"
#define BLUE "\033[34m"

class BitcoinExchange::ErrorOpenFile : public std::exception {
		virtual const char *what() const throw(){
				return ("Error Open File.\n");
		} 
};

BitcoinExchange::BitcoinExchange()
{
	std::ifstream file(DB);
	std::string line;

	if (!file.is_open())
		throw ErrorOpenFile();
	while (getline(file, line))
	{
		if (line.find(",") == std::string::npos)
		{
			std::cout << RED << "Error format" << RESET << std::endl;
			continue ;
		}
		std::string date = line.substr(0, line.find(","));
		std::string value = line.substr(line.find(",") + 2);
		_map.insert(std::make_pair(date, atof(value.c_str())));
		
		//std::cout << atof(value.c_str()) << std::endl;
		//std:: cout << "Date: '" << date << "' ValidateDate: '" <<validateDate(date) << "'" << std::endl;
		//std::cout << "Date: '" << date << "' .Value: '" << value << "'" << std::endl;

		//std::cout << line << std::endl;
	}
	std::cout << GREEN << "Create BitcoinExchange Default" << RESET << std::endl;
}

std::time_t BitcoinExchange::validateDate(std::string date)
{
	std::tm tm = {};
	std::time_t date_num = -1;

	if (std::sscanf(date.c_str(), "%d-%d-%d", &tm.tm_year, &tm.tm_mon, &tm.tm_mday) == 3)
	{
		tm.tm_year -= 1900;
		tm.tm_mon -= 1;
		tm.tm_hour = 0;
		tm.tm_min = 0;
		tm.tm_sec = 0;
		date_num = std::mktime(&tm);
		return date_num;
	}
	return -1;
}

BitcoinExchange::~BitcoinExchange()
{
	std::cout << RED << "Destroy BitcoinExchange" << RESET << std::endl;
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &copy)
{
	_map = copy._map;
}

BitcoinExchange	&BitcoinExchange::operator=(const BitcoinExchange &copy)
{
	if (this != &copy) {
		_map = copy._map;
	}
	return *this;
}

unsigned int BitcoinExchange::size(){return _map.size();}