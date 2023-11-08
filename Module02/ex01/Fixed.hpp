#ifndef FIXED_HPP
#define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int _integer;
		static int const _bit_frac = 8;
	public:
		Fixed();
		Fixed(int);
		Fixed(float);
		~Fixed();
		Fixed(Fixed const &copy);
		int getRawBits( void ) const;
		void setRawBits ( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
		Fixed	&operator=(const Fixed &);
};

std::ostream& operator<<(std::ostream& os, const Fixed& number);

#endif
