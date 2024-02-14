#include "C.hpp"

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define MAGENTA "\033[35m"
#define BLUE "\033[34m"

C::C()
{
	std::cout << GREEN << "Create C" << RESET << std::endl;
}

C::~C()
{
	std::cout << RED << "Destroy C" << RESET << std::endl;
}
