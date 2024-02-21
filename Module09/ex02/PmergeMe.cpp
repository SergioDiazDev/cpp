#include "PmergeMe.hpp"

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define MAGENTA "\033[35m"
#define BLUE "\033[34m"

PmergeMe::PmergeMe()
{
	std::cout << GREEN << "Created PmergeMe Default" << RESET << std::endl;
}

PmergeMe::PmergeMe(int argc, char **argv)
{
	std::cout << GREEN << "Created PmergeMe" << RESET << std::endl;
	for (int i = 1; i < argc ; i++)
	{
		if (!isNumber(argv[i]))
		{
			std::cout << "Error" << std::endl;
			return ;
		}
		_vector.push_back(std::atoi(argv[i]));
		_deque.push_back(std::atoi(argv[i]));
	}
	std::vector<int>::iterator it = _vector.begin();

	std::cout << "Before: ";
	while (it != _vector.end())
	{
		std::cout << *it << " "; 
		it++;
	}
	std::cout << std::endl;

	_vector = sort_vector(_vector);
	_deque = sort_deque(_deque);

	std::vector<int>::iterator it2 = _vector.begin();

	std::cout << "After: ";
	while (it2 != _vector.end())
	{
		std::cout << *it2 << " "; 
		it2++;
	}
	std::cout << std::endl;
	std::cout << std::endl << "Time to process a range of " << _vector.size() << \
		 " elements with std::vector :  " << _time_vector << " µs" << std::endl;

	std::cout << std::endl << "Time to process a range of " << _deque.size() << \
		 " elements with std::deque :  " << _time_deque << " µs" << std::endl;

}

PmergeMe::~PmergeMe()
{
	std::cout << RED << "Destroy PmergeMe" << RESET << std::endl;
}

PmergeMe::PmergeMe(PmergeMe const &copy)
{
	_vector = copy._vector;
	_deque = copy._deque;
}

PmergeMe	&PmergeMe::operator=(const PmergeMe &copy)
{
	if (this != &copy) {
		_vector = copy._vector;
		_deque = copy._deque;
	}
	return *this;
}

std::vector<int> PmergeMe::sort_vector(std::vector<int> vector)
{
	// insert algorithm
	clock_t inicio = clock();
	int len =  vector.size();

	if (len < 20)
	{
		for (int i = 0; i < len; i++)
		{
			int key = vector[i];
			int j = i - 1;
			while (j >= 0 && vector[j] > key)
			{
				vector[j + 1] = vector[j];
				j--;
			}
			vector[j + 1] = key;
		}
		return vector;
	}
	//merge algorithm
	std::vector<int>::iterator mid =  vector.begin() + (len / 2);
	std::vector<int> left(vector.begin(), mid);
	std::vector<int> right(mid, vector.end());

	left = PmergeMe::sort_vector(left);
	right = PmergeMe::sort_vector(right);

	std::vector<int> result(vector.size());
	std::merge(left.begin(), left.end(), right.begin(), right.end(), result.begin());
	clock_t fin = clock();

	_time_vector = static_cast<double>((fin - inicio) * 1.e6) / CLOCKS_PER_SEC;

	return result;
}

std::deque<int> PmergeMe::sort_deque(std::deque<int> deque)
{
	// insert algorithm
	clock_t inicio = clock();
	int len =  deque.size();

	if (len < 20)
	{
		for (int i = 0; i < len; i++)
		{
			int key = deque[i];
			int j = i - 1;
			while (j >= 0 && deque[j] > key)
			{
				deque[j + 1] = deque[j];
				j--;
			}
			deque[j + 1] = key;
		}
		return deque;
	}
	//merge algorithm
	std::deque<int>::iterator mid =  deque.begin() + (len / 2);
	std::deque<int> left(deque.begin(), mid);
	std::deque<int> right(mid, deque.end());

	left = PmergeMe::sort_deque(left);
	right = PmergeMe::sort_deque(right);

	std::deque<int> result(deque.size());
	std::merge(left.begin(), left.end(), right.begin(), right.end(), result.begin());
	clock_t fin = clock();

	_time_deque = static_cast<double>((fin - inicio) * 1.e6) / CLOCKS_PER_SEC;

	return result;
}

bool PmergeMe::isNumber(const char* str)
{
	if (*str == '-' || *str == '+')
		return false;
		
	while (!*str) {
		if (!std::isdigit(*str)) {
			return false;
		}
		str++;
	}
	return true;
}