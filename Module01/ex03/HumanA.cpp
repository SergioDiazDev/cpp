#include "HumanA.hpp"

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"

HumanA::HumanA(std::string name, Weapon& weapon)  : _weapon(weapon)
{
	_name = name;
}

HumanA::~HumanA()
{
	std::cout << RED << this->_name << " it was destroyed" << RESET << std::endl;
}

void	HumanA::attack()
{
	std::cout << this->_name << " attacks with their " << _weapon.getType() << std::endl;
}

