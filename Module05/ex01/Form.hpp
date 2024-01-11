#ifndef FORM_HPP
#define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		bool				_sig;
		const int			_gradeSig;
		const int			_gradeExe;
	public:
		Form();
		Form(const std::string, bool, const int, const int);
		~Form();
		Form(Form const &copy);
		Form	&operator=(Form const &copy);

		class	GradeTooHighException;
		class	GradeTooLowException;

		const std::string	getName(void) const;
		bool				getSig(void) const;
		int			getGradeSig(void) const;
		int			getGradeExe(void) const;

		void	beSigned(Bureaucrat &);

};

std::ostream& operator<<(std::ostream&, const Form&);

#endif
