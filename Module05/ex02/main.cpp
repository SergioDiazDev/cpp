#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"

int	main( void )
{
	Bureaucrat b("Hermes Conrad", 145);
	AForm *f = new ShrubberyCreationForm("home");
	AForm *r = new RobotomyRequestForm("Bender");

	//std::cout << b.getName() << ", " << b.getGrade() << std::endl;

	try{
		std::cout << b;
		std::cout << *f;
		b.singForm(*f);
		b.singForm(*r);
		std::cout << *f;
		f->execute(b);
		r->execute(b);
	}
	catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}
	delete(f);
	
	return 0;
}