#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private:

	public:
		FragTrap();
		FragTrap(std::string name, int hit = 10, int energy = 10, int attack = 0);
		~FragTrap();
		FragTrap(FragTrap const &copy);
		FragTrap	&operator=(FragTrap const &copy);

		void	attack(const std::string& target);
		void	highFivesGuys(void);
};

#endif
