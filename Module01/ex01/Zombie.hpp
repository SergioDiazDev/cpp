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

Zombie* zombieHorde( int N, std::string name );

#endif
