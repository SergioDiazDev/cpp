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
}

BitcoinExchange::BitcoinExchange(std::string filename)
{
	std::ifstream file(filename.c_str());
	std::string line;

	if (!file.is_open())
		throw ErrorOpenFile();
	while (getline(file, line))
	{
		if (line.find("|") == std::string::npos)
		{
			std::cout << RED << "Error format" << RESET << std::endl;
			continue ;
		}
		std::string date = line.substr(0, line.find("|") - 1);
		std::string value = line.substr(line.find("|") + 1);
		if(!validateDate(date) || !validateValue(value))
			continue;
		//std::cout << "Date: " << date << " .Value: " << value << std::endl;

		std::cout << line << std::endl;
	}
	std::cout << GREEN << "Create BitcoinExchange" << RESET << std::endl;
}

std::time_t BitcoinExchange::validateDate(std::string date)
{
	std::tm tm = {}; // Inicializa todos los campos de la estructura tm a cero
	std::time_t date = -1; // Valor de retorno predeterminado en caso de error

	// Extrae la parte de la cadena que representa la fecha
	std::string date_string = line.substr(0, pos);
		// Utiliza sscanf para analizar la cadena de fecha
	if (std::sscanf(date_string.c_str(), "%d-%d-%d", &tm.tm_year, &tm.tm_mon, &tm.tm_mday) == 3)
	{
		// Configura los valores de hora para representar una fecha sin tiempo
		tm.tm_hour = 0;
		tm.tm_min = 0;
		tm.tm_sec = 0;
		// Convierte la estructura tm en un valor time_t utilizando mktime()
		date = std::mktime(&tm);
		return date;
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

unsigned int BitcoinExchange::getSize(){return _map.size();}