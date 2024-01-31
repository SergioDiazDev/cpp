#include "AForm.hpp"

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define MAGENTA "\033[35m"
#define BLUE "\033[34m"

class AForm::GradeTooHighException : public std::exception {
	virtual const char *what() const throw(){
		return ("GradeTooHighException\n");
	} 
};

class AForm::GradeTooLowException : public std::exception {
	virtual const char *what() const throw(){
		return ("GradeTooLowException\n");
	} 
};

AForm::AForm(const std::string name, bool sig, const int gradeSig, const int gradeExe, const std::string target) : _name(name), _gradeSig(gradeSig), _gradeExe(gradeExe), _target(target)
{
	this->_sig = sig;
	if (this->_gradeSig <= 0 || this->_gradeExe <= 0)
		throw GradeTooHighException();
	if (this->_gradeSig > 150 || this->_gradeExe > 150)
		throw GradeTooLowException();
	std::cout << GREEN << "Created AForm " << this->_name << RESET << std::endl;
}

AForm::~AForm()
{
	std::cout << RED << "Destroy AForm: " << this->_name << RESET << std::endl;
}

AForm::AForm(AForm const &copy) : _name(copy._name), _gradeSig(copy._gradeSig), _gradeExe(copy._gradeExe)
{
	this->_sig = copy._sig;
	std::cout << YELLOW << "Copy AForm: " << this->_name << RESET << std::endl;
}

AForm	&AForm::operator=(const AForm &copy)
{
	if (this == &copy)
		return (*this);
	this->_sig = copy._sig;
	std::cout << YELLOW << "(!!CONST!!)Operator(=): " << this->_name << RESET << std::endl;
	return (*this);
}

const std::string	AForm::getName(void) const
{
	return this->_name;
}
bool				AForm::getSig(void) const
{
	return this->_sig;
}
const int			AForm::getGradeSig(void) const
{
	return this->_gradeSig;
}
const int			AForm::getGradeExe(void) const
{
	return this->_gradeExe;
}
const std::string	AForm::getTarget(void) const
{
	return this->_target;
}

void	AForm::beSigned(Bureaucrat &b)
{
	if (this->getGradeSig() < b.getGrade())
		throw GradeTooLowException();
	this->_sig = 1;
}

std::ostream& operator<<(std::ostream& os, const AForm& f)
{
	std::string sig("\033[32mSigned\033[0m, grade required to sign ");
	if (!f.getSig())
		sig = "\033[31mNo Signed\033[0m, grade required ";
	os << f.getName() << ", " << sig << f.getGradeSig() << ", grade required to execute " << f.getGradeExe() << std::endl;
	return os;
}
