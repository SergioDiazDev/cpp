#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main( void )
{
	Bureaucrat b("Hermes Conrad", 34);
	Form f("Formulario 0", 0, 42, 42);

	//std::cout << b.getName() << ", " << b.getGrade() << std::endl;

	try{
		std::cout << b;
		std::cout << f;
		//b.singForm(f);
		std::cout << f;
	}
	catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}
	return 0;
}