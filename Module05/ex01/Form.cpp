#include "Form.hpp"

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define MAGENTA "\033[35m"
#define BLUE "\033[34m"

class Form::GradeTooHighException : public std::exception {
	virtual const char *what() const throw(){
		return ("GradeTooHighException\n");
	} 
};

class Form::GradeTooLowException : public std::exception {
	virtual const char *what() const throw(){
		return ("GradeTooLowException\n");
	} 
};

Form::Form() : _name("Default"), _sig(0), _gradeSig(150), _gradeExe(150)
{
	std::cout << GREEN << "Created Form Default" << RESET << std::endl;
}

Form::Form(const std::string name, bool sig, const int gradeSig, const int gradeExe) : _name(name), _gradeSig(gradeSig), _gradeExe(gradeExe)
{
	this->_sig = sig;
	if (this->_gradeSig <= 0 || this->_gradeExe <= 0)
		throw GradeTooHighException();
	if (this->_gradeSig > 150 || this->_gradeExe > 150)
		throw GradeTooLowException();
	std::cout << GREEN << "Created Form " << this->_name << RESET << std::endl;
}

Form::~Form()
{
	std::cout << RED << "Destroy Form: " << this->_name << RESET << std::endl;
}

Form::Form(Form const &copy) : _name(copy._name), _gradeSig(copy._gradeSig), _gradeExe(copy._gradeExe)
{
	this->_sig = copy._sig;
	std::cout << YELLOW << "Copy Form: " << this->_name << RESET << std::endl;
}

Form	&Form::operator=(const Form &copy)
{
	if (this == &copy)
		return (*this);
	this->_sig = copy._sig;
	std::cout << YELLOW << "(!!CONST!!)Operator(=): " << this->_name << RESET << std::endl;
	return (*this);
}

const std::string	Form::getName(void) const
{
	return this->_name;
}
bool				Form::getSig(void) const
{
	return this->_sig;
}
int			Form::getGradeSig(void) const
{
	return this->_gradeSig;
}
int			Form::getGradeExe(void) const
{
	return this->_gradeExe;
}

void	Form::beSigned(Bureaucrat &b)
{
	if (this->getGradeSig() > b.getGrade())
		throw GradeTooLowException();
	this->_sig = 1;
}

std::ostream& operator<<(std::ostream& os, const Form& f)
{
	std::string sig("\033[32mSigned\033[0m, grade required to sign ");
	if (!f.getSig())
		sig = "\033[31mNo Signed\033[0m, grade required ";
	os << f.getName() << ", " << sig << f.getGradeSig() << ", grade required to execute " << f.getGradeExe() << std::endl;
	return os;
}