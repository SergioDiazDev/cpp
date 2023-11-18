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
	this->_brain = new Brain;
	this->setType("Cat");
}

Cat::~Cat()
{
	std::cout << RED << "Destroy Cat: " << this->_brain << RESET << std::endl;
	delete this->_brain;
}

Cat::Cat(Cat const &copy)
{
	std::cout << YELLOW << "Copy Cat: " << this->_brain << RESET << std::endl;
	this->_type = copy._type;
	this->_brain = copy._brain;
}

Cat	&Cat::operator=(const Cat &copy)
{
	std::cout << YELLOW << "Operator(=): " << this->_brain << RESET << std::endl;
	if (this == &copy)
		return *this;
	this->_type = copy._type;
	this->_brain = copy._brain;
	return *this;
}

void	Cat::makeSound(void) const
{
	std::cout << MAGENTA << "My sound is: Guau" << RESET << std::endl;
}
