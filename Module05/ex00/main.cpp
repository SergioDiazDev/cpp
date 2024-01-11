#include <iostream>
#include "Bureaucrat.hpp"

int main( void )
{
	Bureaucrat b("Hermes Conrad", 34);

	//std::cout << b.getName() << ", " << b.getGrade() << std::endl;

	try{
		std::cout << b;
		b.lowestGrade(33);
		//TooLowGrade
		//b.lowestGrade(1);
		std::cout << b;
		b.highestGrade(149);
		//TooHighGrade
		b.highestGrade(1);
		std::cout << b;
	}
	catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}
	return 0;
}