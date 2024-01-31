#include "Bureaucrat.hpp"

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define MAGENTA "\033[35m"
#define BLUE "\033[34m"

class Bureaucrat::GradeTooHighException : public std::exception {
	virtual const char *what() const throw(){
		return ("GradeTooHighException\n");
	} 
};

class Bureaucrat::GradeTooLowException : public std::exception {
	virtual const char *what() const throw(){
		return ("GradeTooLowException\n");
	} 
};

Bureaucrat::Bureaucrat() : _name("Default"), _grade(150)
{
	std::cout << GREEN << "Created Bureaucrat Default" << RESET << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade)
{
	if (grade <= 0)
		throw GradeTooLowException();
	if (grade > 150)
		throw GradeTooHighException();
	this->_name = name;
	this->_grade = grade;
	std::cout << GREEN << "Created Bureaucrat " << this->_name << ", grade: " << this->_grade << RESET << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << RED << "Destroy Bureaucrat: " << this->getName() << RESET << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy)
{
	std::cout << YELLOW << "Copy Bureaucrat: " << this->getName() << RESET << std::endl;
	this->_name = copy._name;
	this->_grade = copy._grade;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &copy)
{
	std::cout << YELLOW << "Operator(=): " << this->getName() << RESET << std::endl;
	if (this == &copy)
		return *this;
	this->_name = copy._name;
	this->_grade = copy._grade;
	return *this;
}

std::string	Bureaucrat::getName(void) const
{
	return (this->_name);
}
int			Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}
void		Bureaucrat::highestGrade(int i)
{
	if (this->_grade + i > 150)
		throw GradeTooHighException();
	this->_grade += i;
}
void		Bureaucrat::lowestGrade(int i)
{
	if (this->_grade - i <= 0)
		throw GradeTooLowException();
	this->_grade -= i;
}

void		Bureaucrat::singForm(Form &f)
{
	f.beSigned(*this);
	std::cout << BLUE << "Bureaucraf " << this->getName() << " signed " << f.getName() << RESET << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b)
{
	os << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl;;
	return os;
}