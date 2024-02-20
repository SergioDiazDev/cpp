#include <iostream>
#include "RPN.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error with arguments." << std::endl;
		return 0;
	}

	RPN rpn;
	rpn.calculate(argv[1]);
	return 0;
}