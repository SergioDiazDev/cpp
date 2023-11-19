#include <iostream>
#include "ClapTrap.hpp"

int main( void )
{
	ClapTrap a("Pedro");
	a.attack("Juan");
	a.takeDamage(1);
	a.beRepaired(1);
	a.beRepaired(1);
	a.beRepaired(1);
	a.beRepaired(1);
	a.beRepaired(1);
	a.beRepaired(1);
	a.beRepaired(1);
	a.beRepaired(1);
	a.beRepaired(1);
	a.beRepaired(1);
	a.beRepaired(1);
	a.attack("Juan");
	a.takeDamage(1);
	return 0;
}