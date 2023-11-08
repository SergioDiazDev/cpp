#include <iostream>
#include "Fixed.hpp"

int main( void ) {
	// Fixed a = ( Fixed( 5 ) + Fixed( 2 ) );
	// std::cout << a << std::endl;
	// Fixed b = ( Fixed( 2 ) - Fixed( 5 ) );
	// std::cout << b << std::endl;
	// Fixed c = ( Fixed( 2.5f ) * Fixed( 5.5f ) );
	// std::cout << c << std::endl;
	// Fixed d = ( Fixed( 1 ) / Fixed( 0.25f ) );
	// std::cout << d << std::endl;

	// if (Fixed(5.12f) == Fixed(5.12f))
	// 	std::cout << "Correcto" << std::endl;
	// else 
	// 	std::cout << "Incorrecto" << std::endl;
	// return 0;
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	//std::cout << Fixed::max( a, b ) << std::endl;

}
