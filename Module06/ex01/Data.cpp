#include "Data.hpp"

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define MAGENTA "\033[35m"
#define BLUE "\033[34m"

Data::Data()
{
	std::cout << GREEN << "Create Data Default, Value: " << _value << RESET << std::endl;
	_value = 42;
}

Data::Data(int value) : _value(value)
{
	std::cout << GREEN << "Create Data, Value: " << _value << RESET << std::endl;
}

Data::~Data()
{
	std::cout << RED << "Destroy Data"<< RESET << std::endl;
}

Data::Data(Data const &copy)
{
	std::cout << YELLOW << "copy Data" << RESET << std::endl;
	*this = copy;
}

Data	&Data::operator=(const Data &copy)
{
	if (this != &copy) {
		_value = copy._value;
	}
	std::cout << BLUE << "Operator = " << RESET << std::endl;
	return *this;
}

int Data::getValue(){return _value;}
