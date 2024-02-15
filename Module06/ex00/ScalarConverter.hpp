#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# include <exception>
# include <errno.h>
# include <limits>
# include <limits.h>
# include <float.h>
# include <math.h>

class ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(ScalarConverter const &copy);
		ScalarConverter	&operator=(ScalarConverter const &copy);

		static char c;
		static int i;
		static float f;
		static double d;
		static char type;
		static int c_err;
		static int i_err;
		static int f_err;
		static int d_err;

	public:
		~ScalarConverter();

		static void convert(std::string const &literal);
		static char getType(std::string const &literal);
		static void print(void);
		static void error(void);
		static bool is_number(std::string const &literal);

};

#endif
