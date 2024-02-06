#include <iostream>
#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
		return (std::cout << "Input not valid" , -1);

	std::string const av(argv[1]);

	ScalarConverter::convert(av);

	return (0);
}