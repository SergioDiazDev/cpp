#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	if (N <= 0)
	{
		std::cout << "No se pueden reservar numeros negativos" << std::endl;
		return NULL;
	}
	Zombie* z = new Zombie[N];
	for (int i = 0; i < N; i++)
		z[i].setName(name);
	return z;
}