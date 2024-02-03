#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

# include <iostream>
# include "Form.hpp"

class Form;

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
		void		signForm(Form &f);

		class GradeTooHighException;
		class GradeTooLowException;

};

std::ostream& operator<<(std::ostream&, const Bureaucrat&);


#endif
