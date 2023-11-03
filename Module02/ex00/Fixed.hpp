#ifndef FIXED_HPP
#define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int _integer;
		static int const _bit_frac = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(Fixed const &copy);
		Fixed	&operator=(Fixed const &copy);

		int getRawBits( void ) const;
		void setRawBits ( int const raw );
};

#endif
