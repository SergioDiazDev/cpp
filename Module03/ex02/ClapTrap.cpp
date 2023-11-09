#include "ClapTrap.hpp"

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define MAGENTA "\033[35m"
#define BLUE "\033[34m"

ClapTrap::ClapTrap()
{
	std::cout << GREEN << "Created ClapTrap Default" << RESET << std::endl;
	this->_name = "Default";
	this->_hit = 10;
	this->_energy = 10;
	this->_attack = 0;
}

ClapTrap::ClapTrap(std::string name, int hit, int energy, int attack)
{
	std::cout << GREEN << "Created ClapTrap " << name << RESET << std::endl;
	this->_name = name;
	this->_hit = hit;
	this->_energy = energy;
	this->_attack = attack;
}

ClapTrap::~ClapTrap()
{
	std::cout << RED << "Destroy ClapTrap " << this->_name << RESET << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &copy)
{
	this->_name = copy._name;
	this->_hit = copy._hit;
	this->_energy = copy._energy;
	this->_attack = copy._attack;
	std::cout << YELLOW << "Copy Claptrap" << RESET << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &copy)
{
	if (this == &copy)
		return *this;
	this->_name = copy._name;
	this->_hit = copy._hit;
	this->_energy = copy._energy;
	this->_attack = copy._attack;
	std::cout << MAGENTA << "Copy ClapTrap (=)" << RESET << std::endl;
	return *this;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_hit <= 0)
		std::cout << "ClapTrap " << YELLOW << this->_name << " The dead do not attack" << RESET << std::endl;
	else if (this->_energy <= 0)
		std::cout << "ClapTrap " << YELLOW << this->_name << " (Attackkk...) Low battery" << RESET << std::endl;
	else
	{
		this->_energy--;
		std::cout << "ClapTrap " << BLUE << this->_name << " attack " << target << ", causing " << this->_attack << " points of damage." << RESET << std::endl;
		std::cout << "ClapTrap " << BLUE << this->_name << " Total Energy = " << this->_energy << RESET << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << BLUE << this->_name << " take damege " << amount;
	this->_hit -= amount;
	if (this->_hit <= 0)
		std::cout << " and it dead :(" << RESET << std::endl;
	else
		std::cout << " and the hit of it is " << this->_hit << RESET << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hit <= 0)
		std::cout << "ClapTrap " << YELLOW << this->_name << " The dead do not repaire" << RESET << std::endl;
	else if (this->_energy <= 0)
		std::cout << "ClapTrap " << YELLOW << this->_name << " (Repair...)Low battery" << RESET << std::endl;
	else
	{
		this->_energy--;
		this->_hit += amount;
		std::cout << "ClapTrap " << BLUE << this->_name << " it repared " << amount << " points of hit." << " Total hit = " << this->_hit << RESET << std::endl;
		std::cout << "ClapTrap " << BLUE << this->_name << " Total Energy = " << this->_energy << RESET << std::endl;
	}
}

std::string	ClapTrap::getName(void) const
{
	return this->_name;
}
int			ClapTrap::getHit(void) const
{
	return this->_hit;
}
int 		ClapTrap::getEnergy(void) const
{
	return this->_energy;
}
int			ClapTrap::getAttack(void) const
{
	return this->_attack;
}
void		ClapTrap::setName(std::string name)
{
	this->_name = name;
}
void		ClapTrap::setHit(int hit)
{
	this->_hit = hit;
}
void		ClapTrap::setEnergy(int energy)
{
	this->_energy = energy;
}
void		ClapTrap::setAttack(int attack)
{
	this->_attack = attack;
}