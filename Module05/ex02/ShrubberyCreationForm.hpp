#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include "AForm.hpp"

class AForm;

class ShrubberyCreationForm : public AForm
{
	private:

	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string &target);
		~ShrubberyCreationForm();
		ShrubberyCreationForm(ShrubberyCreationForm const &copy);
		ShrubberyCreationForm	&operator=(ShrubberyCreationForm const &copy);

		void	execute(Bureaucrat const & executor) const;
};

#endif
