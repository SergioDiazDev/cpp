#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main( void )
{
	ScavTrap a("Pepe");
	ClapTrap b;
	FragTrap c;
	a.attack("Juan");
	a.takeDamage(9);
	a.beRepaired(1);
	a.guardGate();
	c.highFivesGuys();
	return 0;
}