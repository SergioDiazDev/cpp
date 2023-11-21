#include "Dog.hpp"

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define MAGENTA "\033[35m"
#define BLUE "\033[34m"

Dog::Dog()
{
	std::cout << GREEN << "Created Animal Dog" << RESET << std::endl;
	this->_brain = new Brain;
	this->setType("Dog");
}

Dog::~Dog()
{
	std::cout << RED << "Destroy Dog: " << this->_brain << RESET << std::endl;
	delete this->_brain;
}

Dog::Dog(Dog const &copy) : Animal(copy)
{
	std::cout << YELLOW << "Copy Dog: " << this->_brain << RESET << std::endl;
	this->_type = copy._type;
	this->_brain = copy._brain;
}

Dog	&Dog::operator=(const Dog &copy)
{
	std::cout << YELLOW << "Operator(=): " << this->_brain << RESET << std::endl;
	if (this == &copy)
		return *this;
	this->_type = copy._type;
	this->_brain = copy._brain;
	return *this;
}

void	Dog::makeSound(void) const
{
	std::cout << MAGENTA << "My sound is: Guau" << RESET << std::endl;
}
