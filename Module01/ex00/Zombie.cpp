#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	std::cout << RED << this->_name << ": It was destroyed." << RESET << std::endl;
}

void Zombie::announce( void )
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
	this->_name = name;
}

Zombie* newZombie( std::string name )
{
	Zombie* z = new Zombie();
	z->setName(name);
    return z;
}

void randomChump( std::string name )
{
	Zombie z;
	z.setName(name);
	z.announce();
}