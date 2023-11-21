#ifndef AFORM_HPP
#define AFORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string	_name;
		bool				_sig;
		const int			_gradeSig;
		const int			_gradeExe;
	public:
		AForm();
		AForm(const std::string, bool, const int, const int);
		~AForm();
		AForm(AForm const &copy);
		AForm	&operator=(AForm const &copy);

		class	GradeTooHighException;
		class	GradeTooLowException;

		const std::string	getName(void) const;
		bool				getSig(void) const;
		const int			getGradeSig(void) const;
		const int			getGradeExe(void) const;

		void	beSigned(Bureaucrat &);

};

std::ostream& operator<<(std::ostream&, const AForm&);

#endif
