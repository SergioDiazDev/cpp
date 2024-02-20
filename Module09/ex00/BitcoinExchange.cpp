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
	std::cout << GREEN << "Create BitcoinExchange Default" << RESET << std::endl;
	//load DB
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
		std::string value = line.substr(line.find(",") + 1);
		_map.insert(std::make_pair(validateDate(date), atof(value.c_str())));
	}

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

float BitcoinExchange::findValueForDate(std::string date)
{
	time_t date_num = validateDate(date);

	if (date_num == -1)
		std::cout << RED << "Not Valid Date:" << RESET << std::endl;
	std::map<time_t, float>::iterator it = _map.find(date_num);
	
	if (it != _map.end())
		return it->second;
	else
	{
		it = _map.lower_bound(date_num);
		if (it == _map.begin())
		{
			std::cout << RED << "No previous date found." << RESET << std::endl;
			return -1;
		}
		--it;
		return it->second;
	}
}

void BitcoinExchange::calculateFile(char *filename)
{
	std::ifstream file(filename);
	std::string line;

	if (!file.is_open())
		throw ErrorOpenFile();
	getline(file, line);
	while (getline(file, line))
	{
		if (line.find("|") == std::string::npos)
		{
			std::cout << RED << "Error format: " << line << RESET << std::endl;
			continue ;
		}
		std::string date = line.substr(0, line.find("|") - 1);
		std::string value_str = line.substr(line.find("|") + 1);
		float value = atof(value_str.c_str());
		if (0 > value)
		{
			std::cout << RED << "Error: not a positive number." << RESET << std::endl;
			continue ;
		}
		else if (value > 1000)
		{
			std::cout << RED << "Error: too large a number." << RESET << std::endl;
			continue ;
		}

		std::cout << date << " => " << value << " = " << findValueForDate(date) * value << std::endl;
	}

}


unsigned int BitcoinExchange::size(){return _map.size();}