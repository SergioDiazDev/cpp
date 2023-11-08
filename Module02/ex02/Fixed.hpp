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

		Fixed	operator+(const Fixed &);
		Fixed	operator-(const Fixed &);
		Fixed	operator*(const Fixed &);
		Fixed	operator/(const Fixed &);

		bool	operator==(const Fixed &);
		bool	operator!=(const Fixed &);
		bool	operator<(const Fixed &);
		bool	operator<=(const Fixed &);
		bool	operator>(const Fixed &);
		bool	operator>=(const Fixed &);

		Fixed	operator++(int);
		Fixed	operator--(int);

		Fixed	&operator++(void);
		Fixed	&operator--(void);

		static Fixed &min(Fixed &, Fixed &);
		static const Fixed &min(const Fixed &, const Fixed &);

		static Fixed &max(Fixed &, Fixed &);
		static const Fixed &max(const Fixed &, const Fixed &);


};

std::ostream& operator<<(std::ostream& os, const Fixed& number);

#endif
