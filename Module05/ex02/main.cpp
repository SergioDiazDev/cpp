#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"

int	main( void )
{
	Bureaucrat b("Hermes Conrad", 34);
	AForm *f = new ShrubberyCreationForm("home");

	//std::cout << b.getName() << ", " << b.getGrade() << std::endl;

	try{
		std::cout << b;
		std::cout << *f;
		b.singForm(*f);
		std::cout << *f;
	}
	catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}
	return 0;
}