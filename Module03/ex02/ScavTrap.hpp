#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:

	public:
		ScavTrap();
		ScavTrap(std::string name, int hit = 10, int energy = 10, int attack = 0);
		~ScavTrap();
		ScavTrap(ScavTrap const &copy);
		ScavTrap	&operator=(ScavTrap const &copy);

		void	attack(const std::string& target);
		void	guardGate(void);
};

#endif
