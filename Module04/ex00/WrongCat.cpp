#include "WrongCat.hpp"

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define MAGENTA "\033[35m"
#define BLUE "\033[34m"

WrongCat::WrongCat()
{
	std::cout << GREEN << "Created Animal WrongCat" << RESET << std::endl;
	this->_type = "WrongCat";
}

WrongCat::~WrongCat()
{
	std::cout << RED << "Destroy Animal: " << this->getType() << RESET << std::endl;
}

WrongCat::WrongCat(WrongCat const &copy)
{
	
}

WrongCat	&WrongCat::operator=(const WrongCat &copy)
{
	return *this;
}

void	WrongCat::makeSound(void) const
{
	std::cout << MAGENTA << "My sound is: Don't use vim, love yourself." << RESET << std::endl;
}
