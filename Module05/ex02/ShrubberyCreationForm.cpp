#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery Creation Form", 0 ,145, 137, "Default")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("Shrubbery Creation Form", 0 ,145, 137, target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &copy) : AForm(copy)
{

}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy)
{
	if (this != &copy)
		*this = copy;
	return *this;
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::cout << "Executado" << std::endl;
}
