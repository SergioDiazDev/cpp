#include "Dog.hpp"

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define MAGENTA "\033[35m"
#define BLUE "\033[34m"

Dog::Dog()
{
	std::cout << GREEN << "Created Animal Dog" << RESET << std::endl;
	this->_type = "Dog";
}

Dog::~Dog()
{
	std::cout << RED << "Destroy Animal: " << this->getType() << RESET << std::endl;
}

Dog::Dog(Dog const &copy)
{
	this->_type = copy._type;
	std::cout << YELLOW << "Copy Dog" << RESET << std::endl;
}

Dog	&Dog::operator=(const Dog &copy)
{
	if (this == &copy)
		return *this;
	this->_type = copy._type;
	std::cout << MAGENTA << "Copy Dog (=)" << RESET << std::endl;
	return *this;
}

void	Dog::makeSound(void) const
{
	std::cout << MAGENTA << "My sound is: Guau" << RESET << std::endl;
}
