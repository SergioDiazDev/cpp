#ifndef DATA_HPP
#define DATA_HPP

# include <iostream>

class Data
{
	private:
		int _value;
	public:
		Data();
		Data(int value);
		~Data();
		Data(Data const &copy);
		Data	&operator=(Data const &copy);
		
		int getValue();
};

#endif
