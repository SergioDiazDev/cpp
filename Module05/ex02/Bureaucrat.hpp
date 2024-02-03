#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

# include <iostream>
# include "AForm.hpp"

class AForm;

class Bureaucrat
{
	private:
		const std::string _name;
		int _grade;
	public:
		Bureaucrat();
		Bureaucrat(const std::string, int = 150);
		~Bureaucrat();
		Bureaucrat(Bureaucrat const &copy);
		Bureaucrat	&operator=(Bureaucrat const &copy);
		std::string	getName(void) const;

		int			getGrade(void) const;
		void		highestGrade(int);
		void		lowestGrade(int);
		void		signForm(AForm &f);
		void		executeForm(AForm const & form);

		class GradeTooHighException;
		class GradeTooLowException;

};

std::ostream& operator<<(std::ostream&, const Bureaucrat&);


#endif
