#include "Fixed.hpp"

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define MAGENTA "\033[35m"
#define BLUE "\033[34m"

Fixed::Fixed()
{
	std::cout << GREEN << "Create Fixed, Default" << RESET << std::endl;
}

Fixed::~Fixed()
{
	std::cout << RED << "Destroy Fixed" << RESET << std::endl;
}

Fixed::Fixed(Fixed const &copy)
{
	this->_integer = copy._integer;
	std::cout << YELLOW << "Copy Fixed" << RESET << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &copy)
{
	if (this == &copy)
		return *this;
	this->_integer = copy._integer;
	std::cout << MAGENTA << "Copy Fixed (=)" << RESET << std::endl;
	return *this;
}

int Fixed::getRawBits( void ) const
{
	std::cout << BLUE << "Call getRawBits()"  << RESET << std::endl;
	return (this->_integer);
}
void Fixed::setRawBits ( int const raw )
{
	this->_integer = raw;
}
