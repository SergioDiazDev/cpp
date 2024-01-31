#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"

int	main( void )
{
	Bureaucrat b("Hermes Conrad", 1);
	AForm *s = new ShrubberyCreationForm("home");
	AForm *r = new RobotomyRequestForm("Bender");
	AForm *p = new PresidentialPardonForm("Zoidberg");


	//std::cout << b.getName() << ", " << b.getGrade() << std::endl;

	try{
		std::cout << b;

		std::cout << *s;
		b.singForm(*s);
		std::cout << *s;
		s->execute(b);


		std::cout << *r;
		b.singForm(*r);
		std::cout << *r;
		r->execute(b);

		std::cout << *p;
		b.singForm(*p);
		std::cout << *p;
		p->execute(b);
	}
	catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}
	delete(s);
	delete(r);
	delete(p);
	
	return 0;
}