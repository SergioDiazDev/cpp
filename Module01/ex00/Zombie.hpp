#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

# include <iostream>

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"

class Zombie
{
	private:
		std::string _name;
	public:
		Zombie();
		~Zombie();
		void	announce( void );
		void	setName(std::string);
		
};

Zombie* newZombie( std::string name );
void	randomChump( std::string name );

#endif
