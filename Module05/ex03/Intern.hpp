#ifndef INTERN_HPP
#define INTERN_HPP

# include <iostream>
# include <map>
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "AForm.hpp"

class Intern
{
	private:

	public:
		Intern();
		~Intern();
		Intern(Intern const &copy);
		Intern	&operator=(Intern const &copy);

		AForm *makeForm(std::string name, std::string target);
};

#endif
