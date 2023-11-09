#include "ScavTrap.hpp"

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define MAGENTA "\033[35m"
#define BLUE "\033[34m"

ScavTrap::ScavTrap()
{
	std::cout << MAGENTA << "Created ScavTrap Default" << RESET << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << RED << "Destroy ScavTrap " << this->getName() << RESET << std::endl;
}

ScavTrap::ScavTrap(std::string name, int hit, int energy, int attack)
{
	std::cout << GREEN << "Created ScavTrap " << this->getName() << RESET << std::endl;
	this->setName(name);
	this->setHit(hit);
	this->setEnergy(energy);
	this->setAttack(attack);
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->getHit() <= 0)
		std::cout << "ScavTrap " << YELLOW << this->getName() << " The dead do not attack" << RESET << std::endl;
	else if (this->getEnergy() <= 0)
		std::cout << "ScavTrap " << YELLOW << this->getName() << " (Attackkk...) Low battery" << RESET << std::endl;
	else
	{
		this->setEnergy(this->getEnergy() - 1);
		std::cout << "ScavTrap " << BLUE << this->getName() << " attack " << target << ", causing " << this->getAttack() << " points of damage." << RESET << std::endl;
		std::cout << "ScavTrap " << BLUE << this->getName() << " Total Energy = " << this->getEnergy() << RESET << std::endl;
	}
}

void	ScavTrap::guardGate()
{
	std::cout << MAGENTA << "Gate keeper mode" << RESET << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &copy)
{
	this->setName(copy.getName());
	this->setHit(copy.getHit());
	this->setEnergy(copy.getEnergy());
	this->setAttack(copy.getAttack());
	std::cout << YELLOW << "Copy Scavtrap" << RESET << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &copy)
{
	if (this == &copy)
		return *this;
	this->setName(copy.getName());
	this->setHit(copy.getHit());
	this->setEnergy(copy.getEnergy());
	this->setAttack(copy.getAttack());
	std::cout << MAGENTA << "Copy ScavTrap (=)" << RESET << std::endl;
	return *this;
}
