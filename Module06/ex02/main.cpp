#include <iostream>
#include "Base.hpp"


int main()
{
	Base	*ptr;
	Base	*ref;

	std::srand(std::time(0));
	for (int i = 0; i < 5; i++)
	{
		ptr = generate();
		std::cout << "---- Generated new object ----" << std::endl;
		identify(ptr);
		delete ptr;
		std::cout << std::endl;
	}
	
	for (int i = 0; i < 5; i++)
	{
		ref = generate();
		std::cout << "---- Generated new object ----" << std::endl;
		identify(*ref);
		delete ref;
		std::cout << std::endl;
	}
	return 0;
}