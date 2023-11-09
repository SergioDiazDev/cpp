#include "FragTrap.hpp"

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define MAGENTA "\033[35m"
#define BLUE "\033[34m"

FragTrap::FragTrap()
{
	std::cout << MAGENTA << "Created FragTrap Default" << RESET << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << RED << "Destroy FragTrap " << this->getName() << RESET << std::endl;
}

FragTrap::FragTrap(std::string name, int hit, int energy, int attack)
{
	std::cout << GREEN << "Created FragTrap " << this->getName() << RESET << std::endl;
	this->setName(name);
	this->setHit(hit);
	this->setEnergy(energy);
	this->setAttack(attack);
}

void	FragTrap::attack(const std::string& target)
{
	if (this->getHit() <= 0)
		std::cout << "FragTrap " << YELLOW << this->getName() << " The dead do not attack" << RESET << std::endl;
	else if (this->getEnergy() <= 0)
		std::cout << "FragTrap " << YELLOW << this->getName() << " (Attackkk...) Low battery" << RESET << std::endl;
	else
	{
		this->setEnergy(this->getEnergy() - 1);
		std::cout << "FragTrap " << BLUE << this->getName() << " attack " << target << ", causing " << this->getAttack() << " points of damage." << RESET << std::endl;
		std::cout << "FragTrap " << BLUE << this->getName() << " Total Energy = " << this->getEnergy() << RESET << std::endl;
	}
}

void	FragTrap::highFivesGuys()
{
	std::cout << MAGENTA << "✋" << RESET << std::endl;
}

FragTrap::FragTrap(FragTrap const &copy)
{
	this->setName(copy.getName());
	this->setHit(copy.getHit());
	this->setEnergy(copy.getEnergy());
	this->setAttack(copy.getAttack());
	std::cout << YELLOW << "Copy Fragtrap" << RESET << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &copy)
{
	if (this == &copy)
		return *this;
	this->setName(copy.getName());
	this->setHit(copy.getHit());
	this->setEnergy(copy.getEnergy());
	this->setAttack(copy.getAttack());
	std::cout << MAGENTA << "Copy FragTrap (=)" << RESET << std::endl;
	return *this;
}
