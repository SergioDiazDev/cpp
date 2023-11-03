#include "Weapon.hpp"

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"

Weapon::Weapon(std::string type)
{
	this->_type = type;
}

Weapon::~Weapon()
{
	std::cout << RED << _type << " it was destoryed" << RESET <<std::endl;
}

const std::string	&Weapon::getType()
{
	return (this->_type);
}
void	Weapon::setType(std::string type)
{
	this->_type = type;
}
