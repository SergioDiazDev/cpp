#ifndef BRAIN_HPP
#define BRAIN_HPP

# include <iostream>

class Brain
{
	private:
		std::string _idea[100];
	public:
		Brain();
		~Brain();
		Brain(Brain const &copy);
		Brain	&operator=(Brain const &copy);
};

#endif
