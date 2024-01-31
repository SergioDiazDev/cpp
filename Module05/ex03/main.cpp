#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include "AForm.hpp"

int	main( void )
{
	Bureaucrat b("Hermes Conrad", 1);
	AForm *s = new ShrubberyCreationForm("home");
	AForm *r = new RobotomyRequestForm("Bender");
	AForm *p = new PresidentialPardonForm("Zoidberg");
	Intern someRandomIntern;
	AForm *rrf;
	//rrf = someRandomIntern.makeForm("robotomy request", "Flexo");

	//std::cout << b.getName() << ", " << b.getGrade() << std::endl;

	try{
		std::cout << b;

		std::cout << *s;
		b.signForm(*s);
		std::cout << *s;
		b.executeForm(*s);


		std::cout << *r;
		b.signForm(*r);
		std::cout << *r;
		b.executeForm(*r);

		std::cout << *p;
		b.signForm(*p);
		std::cout << *p;
		b.executeForm(*p);

		//std::cout << *rrf;
		b.signForm(*rrf);
		std::cout << "hola" << std::endl;
		//std::cout << *rrf;
		b.executeForm(*rrf);
	}
	catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}
	delete(s);
	delete(r);
	delete(p);
	
	return 0;
}