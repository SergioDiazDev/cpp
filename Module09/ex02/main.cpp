#include "PmergeMe.hpp"


int main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "Error with arguments." << std::endl;
		return 0;
	}

	PmergeMe merge(argc, argv);

	return 0;
}