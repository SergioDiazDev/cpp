#include "Fixed.hpp"

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define MAGENTA "\033[35m"
#define BLUE "\033[34m"

Fixed::Fixed() : _integer(0)
{
	std::cout << GREEN << "Create Fixed, Default" << RESET << std::endl;
}
Fixed::Fixed(int i)
{
	this->_integer = i * (1 << this->_bit_frac);
	std::cout << GREEN << "Create Fixed, integer" << RESET << std::endl;
}
Fixed::Fixed(float f)
{
	this->_integer = roundf(f * (1 << this->_bit_frac));
	std::cout << GREEN << "Create Fixed, float" << RESET << std::endl;
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

Fixed	Fixed::operator+(const Fixed &n)
{
	std::cout << MAGENTA << "Operator (+)" << RESET << std::endl;
	Fixed result = *this;
    result._integer += n._integer;
    return result;
}

Fixed	Fixed::operator-(const Fixed &n)
{
	std::cout << MAGENTA << "Operator (-)" << RESET << std::endl;
	Fixed result = *this;
    result._integer -= n._integer;
    return result;
}

Fixed	Fixed::operator*(const Fixed &n)
{
	std::cout << MAGENTA << "Operator (*)" << RESET << std::endl;
	Fixed result = *this;
    result._integer *= n._integer;
	result._integer = result.toFloat();
    return result;
}

Fixed	Fixed::operator/(const Fixed &n)
{
	std::cout << MAGENTA << "Operator (/)" << RESET << std::endl;
	Fixed result = *this;
    result._integer = result._integer / n.toFloat();
    return result;
}

bool	Fixed::operator==(const Fixed &n)
{
	return (this->_integer == n._integer);
}

bool	Fixed::operator!=(const Fixed &n)
{
	return (this->_integer != n._integer);
}

bool	Fixed::operator<(const Fixed &n)
{
	return (this->_integer < n._integer);
}

bool	Fixed::operator<=(const Fixed &n)
{
	return (this->_integer <= n._integer);
}

bool	Fixed::operator>(const Fixed &n)
{
	return (this->_integer > n._integer);
}

bool	Fixed::operator>=(const Fixed &n)
{
	return (this->_integer >= n._integer);
}

Fixed	Fixed::operator++(int)
{
	Fixed temp(*this);
	std::cout << MAGENTA << "Operator (++)" << RESET << std::endl;
	this->_integer++;
	return (temp);
}

Fixed	Fixed::operator--(int)
{
	Fixed temp(*this);
	std::cout << MAGENTA << "Operator (--)" << RESET << std::endl;
	this->_integer--;
	return (temp);
}

Fixed	&Fixed::operator++(void)
{
	std::cout << MAGENTA << "Operator (++)" << RESET << std::endl;
	this->_integer++;
	return (*this);
}

Fixed	&Fixed::operator--(void)
{
	std::cout << MAGENTA << "Operator (--)" << RESET << std::endl;
	this->_integer--;
	return (*this);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a.toFloat() < b.toFloat())
		return a;
	return b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.toFloat() < b.toFloat())
		return a;
	return b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a.toFloat() > b.toFloat())
		return a;
	return b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.toFloat() > b.toFloat())
		return a;
	return b;
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

float Fixed::toFloat( void ) const
{
	return ((float)this->_integer / (1 << this->_bit_frac));
}

int Fixed::toInt( void ) const
{
	return (this->_integer / (1 << this->_bit_frac));
}

std::ostream& operator<<(std::ostream& os, const Fixed& number)
{
	os << number.toFloat();
	return os;
}
