#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	private:
		std::string	_name;
		int	_hit;
		int	_energy;
		int	_attack;
	public:
		ClapTrap();
		ClapTrap(std::string name, int hit = 100, int energy = 50, int attack = 20);
		~ClapTrap();
		ClapTrap(ClapTrap const &copy);
		ClapTrap	&operator=(ClapTrap const &copy);

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		std::string	getName(void) const;
		int			getHit(void) const;
		int 		getEnergy(void) const;
		int			getAttack(void) const;
		void		setName(std::string);
		void		setHit(int);
		void		setEnergy(int);
		void		setAttack(int);

};

#endif
