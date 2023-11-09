#include "AAnimal.hpp"

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define MAGENTA "\033[35m"
#define BLUE "\033[34m"

AAnimal::AAnimal() : _type("Default")
{
	std::cout << GREEN << "Created AAnimal Default" << RESET << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << RED << "Destroy AAnimal: " << this->getType() << RESET << std::endl;
}

AAnimal::AAnimal(AAnimal const &copy)
{
	this->setType(copy.getType());
	std::cout << YELLOW << "Copy AAnimal: " << this->getType() << RESET << std::endl;
}

AAnimal	&AAnimal::operator=(const AAnimal &copy)
{
	std::cout << YELLOW << "Operator(=): " << this->getType() << RESET << std::endl;
	if (this == &copy)
		return *this;
	this->setType(copy.getType());
	return *this;
}

std::string	AAnimal::getType(void) const
{
	return this->_type;
}
void		AAnimal::setType(std::string type)
{
	this->_type = type;
}

void	AAnimal::makeSound(void) const
{
	std::cout << MAGENTA << "My sound is: Defauld" << RESET << std::endl;
}