#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define MAGENTA "\033[35m"
#define BLUE "\033[34m"

Base::Base()
{
	std::cout << GREEN << "Create Base" << RESET << std::endl;
}

Base::~Base()
{
	std::cout << RED << "Destroy Base" << RESET << std::endl;
}

Base  *generate(void)
{
	int num = std::rand() % 3;

	switch (num)
	{
		case 0:
			return new A;
		case 1:
			return new B;
		case 2:
			return new C;
	}
	return NULL;
}
void  identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "This is A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "This is B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "This is C" << std::endl;
	else	
		std::cout << "This is Base" << std::endl;
}
void  identify(Base &p)
{
	if (dynamic_cast<A*>(&p) != NULL)
        std::cout << "This is A" << std::endl;
    else if (dynamic_cast<B*>(&p) != NULL)
        std::cout << "This is B" << std::endl;
    else if (dynamic_cast<C*>(&p) != NULL)
        std::cout << "This is C" << std::endl;
    else
        std::cout << "This is Base" << std::endl;
}
