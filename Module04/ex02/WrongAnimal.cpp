#include "WrongAnimal.hpp"

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define MAGENTA "\033[35m"
#define BLUE "\033[34m"

WrongAnimal::WrongAnimal() : _type("Default")
{
	std::cout << GREEN << "Created WrongAnimal Default" << RESET << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << RED << "Destroy WrongAnimal: " << this->getType() << RESET << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &copy)
{
	this->setType(copy.getType());
	std::cout << YELLOW << "Copy WrongAnimal: " << this->getType() << RESET << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &copy)
{
	std::cout << YELLOW << "Operator(=): " << this->getType() << RESET << std::endl;
	if (this == &copy)
		return *this;
	this->setType(copy.getType());
	return *this;
}

std::string	WrongAnimal::getType(void) const
{
	return this->_type;
}
void		WrongAnimal::setType(std::string type)
{
	this->_type = type;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << MAGENTA << "My sound is: Wrong Defauld bark" << RESET << std::endl;
}