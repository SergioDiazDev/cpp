#include "HumanB.hpp"

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"

HumanB::HumanB(std::string name)  : _weapon(NULL)
{
	_name = name;
}

HumanB::~HumanB()
{
	std::cout << RED << this->_name << " it was destroyed" << RESET << std::endl;
}

void	HumanB::attack()
{
	std::cout << this->_name << " attacks with their " << _weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}
