#include "Cat.hpp"

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define MAGENTA "\033[35m"
#define BLUE "\033[34m"

Cat::Cat()
{
	std::cout << GREEN << "Created Animal Cat" << RESET << std::endl;
	this->_type = "Cat";
}

Cat::~Cat()
{
	std::cout << RED << "Destroy Animal: " << this->getType() << RESET << std::endl;
}

Cat::Cat(Cat const &copy) : Animal(copy)
{
	this->_type = copy._type;
	std::cout << YELLOW << "Copy Cat" << RESET << std::endl;
}

Cat	&Cat::operator=(const Cat &copy)
{
	if (this == &copy)
		return *this;
	this->_type = copy._type;
	std::cout << MAGENTA << "Copy Cat (=)" << RESET << std::endl;
	return *this;
}

void	Cat::makeSound(void) const
{
	std::cout << MAGENTA << "My sound is: Cats don't bark" << RESET << std::endl;
}
