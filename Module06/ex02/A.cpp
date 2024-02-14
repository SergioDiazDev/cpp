#include "A.hpp"

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define MAGENTA "\033[35m"
#define BLUE "\033[34m"

A::A()
{
	std::cout << GREEN << "Create A" << RESET << std::endl;
}

A::~A()
{
	std::cout << RED << "Destroy A" << RESET << std::endl;
}
