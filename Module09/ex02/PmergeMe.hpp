#ifndef PMERGEME_HPP
#define PMERGEME_HPP

# include <iostream>
# include <algorithm>
# include <stdlib.h>
# include <ctime>

# include <deque>
# include <vector>

#include <iomanip>
class PmergeMe
{
	private:
		PmergeMe();
		PmergeMe(PmergeMe const &copy);
		PmergeMe	&operator=(PmergeMe const &copy);
		bool isNumber(const char* str);

		std::vector<int> sort_vector(std::vector<int> vector);
		std::vector<int> _vector;
		double _time_vector;

		std::deque<int> sort_deque(std::deque<int> deque);
		std::deque<int> _deque;
		double _time_deque;

	public:
		PmergeMe(int argc, char **argv);
		~PmergeMe();
};

#endif
