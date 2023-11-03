#include "Zombie.hpp"

int main()
{
	Zombie *z;
	int N = 5;

	z = zombieHorde(N, "Pedro");

	for (int i = 0; i < N; i++)
		z[i].announce();

	delete[] z;
}