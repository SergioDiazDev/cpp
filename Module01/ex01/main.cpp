#include "Zombie.hpp"

int main()
{
	Zombie z1;
	z1.announce();
	randomChump("jose");

	Zombie* z2;

	z2 = newZombie("Pedro");
	z2->announce();

	delete(z2);
}