#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::~ScalarConverter()
{
}

ScalarConverter::ScalarConverter(ScalarConverter const &copy)
{
	*this = copy;
}

ScalarConverter	&ScalarConverter::operator=(const ScalarConverter &copy)
{
	(void)copy;
	return *this;
}

void ScalarConverter::convert(std::string literal)
{
	std::cout << "Char: " << literal << std::endl;
	std::cout << "Int: " << getInt(literal) << std::endl;
	std::cout << "Float: " << getFloat(literal) << std::endl;
	//std::cout << "double: " << literal << std::endl;
}

int			ScalarConverter::getInt(std::string literal)
{
	//std::cout << "Char: " << static_cast<int>(literal[0]) << std::endl;

	return (static_cast<int>(literal[0]));
}
float		ScalarConverter::getFloat(std::string literal)
{
	//std::cout << "Char: " << literal << std::endl;
	return (static_cast<float>(literal[0]));
}
double		ScalarConverter::getDouble(std::string literal)
{
	std::cout << "Char: " << literal << std::endl;

	return (1);
}