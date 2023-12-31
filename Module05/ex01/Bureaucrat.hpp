#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		std::string _name;
		int _grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string, int = 150);
		~Bureaucrat();
		Bureaucrat(Bureaucrat const &copy);
		Bureaucrat	&operator=(Bureaucrat const &copy);
		std::string	getName(void) const;

		int			getGrade(void) const;
		void		highestGrade(int);
		void		lowestGrade(int);
		void		singForm(Form &f);

		class GradeTooHighException;
		class GradeTooLowException;

};

std::ostream& operator<<(std::ostream&, const Bureaucrat&);


#endif
