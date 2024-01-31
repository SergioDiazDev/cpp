#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include "AForm.hpp"

class AForm;

class PresidentialPardonForm : public AForm
{
	private:

	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const std::string &target);
		~PresidentialPardonForm();
		PresidentialPardonForm(PresidentialPardonForm const &copy);
		PresidentialPardonForm	&operator=(PresidentialPardonForm const &copy);
		void	execute(Bureaucrat const & executor) const;
};

#endif
