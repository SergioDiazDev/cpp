#include "Intern.hpp"

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define MAGENTA "\033[35m"
#define BLUE "\033[34m"

Intern::Intern()
{
	std::cout << GREEN << "Created Intern" << RESET << std::endl;
}

Intern::~Intern()
{
	std::cout << RED << "Destroy Intern:" << RESET << std::endl;
}

Intern::Intern(Intern const &copy)
{
	std::cout << YELLOW << "Copy AForm Intern" << RESET << std::endl;
}

Intern	&Intern::operator=(const Intern &copy)
{
	std::cout << YELLOW << "Operator(=) Intern" << RESET << std::endl;
	return *this;
}

AForm *Intern::makeForm(std::string name, std::string target)
{

	std::string map = "[shrubbery creation][robotomy request][presidential pardon]";

	int i = map.find(name, 0);

	switch(i)
	{
		case 1:
			return (new ShrubberyCreationForm(target));
		case 21:
			return (new RobotomyRequestForm(target));
		case 39:
			return (new PresidentialPardonForm(target));
		default :
		{
			std::cout << RED << "Target Error: " << name << RESET << std::endl; 
			return NULL;
		}
	}
	return NULL;
}