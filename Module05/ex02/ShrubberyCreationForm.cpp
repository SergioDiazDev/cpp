#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string &target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &copy)
{
/* Class::Class(const Class &copy) : someValue(copy.someValue) {} */
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy)
{
	// if (this != &copy) {
		// someValue = copy.someValue;
	// }
	// return *this;
}

void	execute(Bureaucrat const & executor) const
{
	std::cout << "Executado" << std::endl;
}
