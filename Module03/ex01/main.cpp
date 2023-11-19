#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main( void )
{
	ScavTrap a("Pepe");
	ClapTrap b("Juan");
	a.attack(b.getName());
	a.takeDamage(9);
	a.beRepaired(1);
	a.guardGate();
	return 0;
}