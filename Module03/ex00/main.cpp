#include <iostream>
#include "ClapTrap.hpp"

int main( void )
{
	ClapTrap a("Tu");
	a.attack("Juan");
	a.takeDamage(9);
	a.beRepaired(1);
	return 0;
}