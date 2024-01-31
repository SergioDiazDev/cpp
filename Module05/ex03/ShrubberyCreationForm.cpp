#include "ShrubberyCreationForm.hpp"
#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define MAGENTA "\033[35m"
#define BLUE "\033[34m"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery Creation Form", 0 ,145, 137, "Default")
{
	std::cout << GREEN << "Created Shrubbery Default" << RESET << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("Shrubbery Creation Form", 0 ,145, 137, target)
{
	std::cout << GREEN << "Created Shrubbery " << this->getTarget() << RESET << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << RED << "Destroy Shrubbery: " << this->getTarget() << RESET << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &copy) : AForm(copy)
{
	std::cout << YELLOW << "Copy Shrubbery: " << this->getTarget() << RESET << std::endl;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy)
{
	std::cout << YELLOW << "Operator(=): " << this->getTarget() << RESET << std::endl;
	if (this != &copy)
		*this = copy;
	return *this;
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::string ascii =
	""
    "   /\\           /\\           /\\\n"
    "  //\\\\         //\\\\         //\\\\\n"
    " //  \\\\       //  \\\\       //  \\\\\n"
    "//    \\\\     //    \\\\     //    \\\\\n"
    "   ||           ||           ||\n";

	std::string fileName = this->getTarget() + "_shrubbery";

	std::ofstream file(fileName.c_str());

	if (file.is_open()) {
		file << ascii;
		file.close();
		std::cout << "File shrubbery create: " << fileName << std::endl;
    } else {
        std::cout << "Error in a file" << std::endl;
    }
}
