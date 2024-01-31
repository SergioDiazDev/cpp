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
	std::map<std::string, int> map;

	map["shrubbery creation"] = 0;
	map["robotomy request"] = 1;
	map["presidential pardon"] = 2;

	std::map<std::string, int>::iterator it = map.find(name);

	if (it == map.end())
	{
		std::cout << "Not valid name." << std::endl;
		return NULL;
	}

	switch(it->second)
	{
		case 0:
			return (new ShrubberyCreationForm(target));
		case 1:
			return (new RobotomyRequestForm(target));
		case 2:
			return (new PresidentialPardonForm(target));
	}
	return NULL;
}