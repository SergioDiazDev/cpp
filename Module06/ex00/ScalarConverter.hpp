#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

# include <iostream>
# include <cstdlib>
#include <string>

class ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(ScalarConverter const &copy);
		ScalarConverter	&operator=(ScalarConverter const &copy);

	public:
		~ScalarConverter();

		static void		convert(std::string literal);
		static int			getInt(std::string literal);
		static float		getFloat(std::string literal);
		static double		getDouble(std::string literal);

};

#endif
