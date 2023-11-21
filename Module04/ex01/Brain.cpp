#include "Brain.hpp"

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define MAGENTA "\033[35m"
#define BLUE "\033[34m"

Brain::Brain()
{
	std::cout << GREEN << "Created Brain " << this << RESET << std::endl;
}

Brain::~Brain()
{
	std::cout << RED << "Destroi Brain " <<  this << RESET << std::endl;
}

Brain::Brain(Brain const &copy)
{
	std::cout << YELLOW << "Copy Brain: " << this->_idea << RESET << std::endl;
	for (int i = 0; i < 100; i++)
		this->_idea[i] = copy._idea[i];
}

Brain	&Brain::operator=(const Brain &copy)
{
	std::cout << YELLOW << "Operator(=): " << this->_idea << RESET << std::endl;
	if (this == &copy)
		return *this;
	for (int i = 0; i <= 100; i++)
		this->_idea[i] = copy._idea[i];
	return *this;
}
