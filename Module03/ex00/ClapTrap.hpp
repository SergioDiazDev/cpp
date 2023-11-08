#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	private:
		std::string	_name;
		int	_hit = 10;
		int	_energy = 10;
		int	_attack = 0;
	public:
		ClapTrap();
		ClapTrap(std::string name, int hit = 10, int energy = 10, int attack = 0);
		~ClapTrap();
		ClapTrap(ClapTrap const &copy);
		ClapTrap	&operator=(ClapTrap const &copy);

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

};

#endif
