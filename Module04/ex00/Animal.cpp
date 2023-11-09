#include "Animal.hpp"

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define MAGENTA "\033[35m"
#define BLUE "\033[34m"

Animal::Animal() : _type("Default")
{
	std::cout << GREEN << "Created Animal Default" << RESET << std::endl;
}

Animal::~Animal()
{
	std::cout << RED << "Destroy Animal: " << this->getType() << RESET << std::endl;
}

Animal::Animal(Animal const &copy)
{
	this->setType(copy.getType());
	std::cout << YELLOW << "Copy Animal: " << this->getType() << RESET << std::endl;
}

Animal	&Animal::operator=(const Animal &copy)
{
	std::cout << YELLOW << "Operator(=): " << this->getType() << RESET << std::endl;
	if (this == &copy)
		return *this;
	this->setType(copy.getType());
	return *this;
}

std::string	Animal::getType(void) const
{
	return this->_type;
}
void		Animal::setType(std::string type)
{
	this->_type = type;
}

void	Animal::makeSound(void) const
{
	std::cout << MAGENTA << "My sound is: Defauld" << RESET << std::endl;
}