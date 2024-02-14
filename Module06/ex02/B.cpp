#include "B.hpp"

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define MAGENTA "\033[35m"
#define BLUE "\033[34m"

B::B()
{
	std::cout << GREEN << "Create B" << RESET << std::endl;
}

B::~B()
{
	std::cout << RED << "Destroy B" << RESET << std::endl;
}

