#include "PresidentialPardonForm.hpp"

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define MAGENTA "\033[35m"
#define BLUE "\033[34m"

PresidentialPardonForm::PresidentialPardonForm() : AForm("Presidential Pardon Creation Form", 0 ,25, 5, "Default")
{
	std::cout << GREEN << "Created Presidential Pardon Default" << RESET << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm("Presidential Pardon Creation Form", 0 ,25, 5, target)
{
	std::cout << GREEN << "Created Presidential Pardon " << this->getTarget() << RESET << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << RED << "Destroy Presidential Pardon: " << this->getTarget() << RESET << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &copy) : AForm(copy)
{
	std::cout << YELLOW << "Copy Presidential Pardon: " << this->getTarget() << RESET << std::endl;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &copy)
{
	std::cout << YELLOW << "Operator(=): " << this->getTarget() << RESET << std::endl;
	if (this != &copy)
		*this = copy;
	return *this;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}