#include "RobotomyRequestForm.hpp"

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define MAGENTA "\033[35m"
#define BLUE "\033[34m"

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy Creation Form", 0 ,72, 45, "Default")
{
	std::cout << GREEN << "Created Robotomy Default" << RESET << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("Robotomy Creation Form", 0 ,72, 45, target)
{
	std::cout << GREEN << "Created Robotomy " << this->getTarget() << RESET << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << RED << "Destroy Robotomy: " << this->getTarget() << RESET << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copy) : AForm(copy)
{
	std::cout << YELLOW << "Copy Robotomy: " << this->getTarget() << RESET << std::endl;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &copy)
{
	std::cout << YELLOW << "Operator(=): " << this->getTarget() << RESET << std::endl;
	if (this != &copy)
		*this = copy;
	return *this;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	std::cout << "bzzzz" << std::endl;
	sleep(1);
	std::cout << "ziiiiik" << std::endl;
	sleep(1);
	std::cout << "¡clank!" << std::endl;
	std::cout << "¡clank!" << std::endl;
	
	//Selecion de numero aleatorio (Recomendada)
	std::random_device rd;
	std::mt19937 generador(rd());
	std::uniform_int_distribution<int> distribucion(0, 1);

	int num = distribucion(generador);
	if (num)
		std::cout << GREEN << this->getTarget() << " has been robotomized successfully." << RESET << std::endl;
	else
		std::cout << RED << this->getTarget() << " has not been robotomized successfully." << RESET << std::endl;
}