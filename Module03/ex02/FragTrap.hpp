#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private:

	public:
		FragTrap();
		FragTrap(std::string name, int hit = 100, int energy = 100, int attack = 30);
		~FragTrap();
		FragTrap(FragTrap const &copy);
		FragTrap	&operator=(FragTrap const &copy);

		void	attack(const std::string& target);
		void	highFivesGuys(void);
};

#endif
