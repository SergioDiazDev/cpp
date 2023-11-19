#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:

	public:
		ScavTrap();
		ScavTrap(std::string name, int hit = 100, int energy = 50, int attack = 20);
		~ScavTrap();
		ScavTrap(ScavTrap const &copy);
		ScavTrap	&operator=(ScavTrap const &copy);

		void	attack(const std::string& target);
		void	guardGate();
};

#endif
