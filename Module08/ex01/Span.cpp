#include "Span.hpp"

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define MAGENTA "\033[35m"
#define BLUE "\033[34m"

class Span::NoSpace : public std::exception {
	virtual const char *what() const throw(){
		return ("No Space\n");
	}
};

Span::Span()
{}

Span::Span(unsigned int number) : _n(number), _nActual(0)
{
	std::cout << GREEN << "Create Span, Max: " << _n << RESET << std::endl;
}

Span::~Span()
{
	std::cout << RED << "Destroy Span" << RESET << std::endl;
}

Span::Span(Span const &copy)
{
	_n = copy._n;
	_nActual = copy._nActual;
	_v = copy._v;
}

Span	&Span::operator=(const Span &copy)
{
	if (this != &copy) {
		_n = copy._n;
		_nActual = copy._nActual;
		_v = copy._v;
	}
	return *this;
}

void Span::addNumber(int number)
{
	if (_n <= _nActual)
		throw NoSpace();
	_v.push_back(number);
	_nActual++;
	
}

unsigned int Span::shortestSpan()
{
	std::vector<int> cp = _v;
	std::sort(cp.begin(), cp.end());
	unsigned int diff = cp[1] - cp[0];
	int	size = cp.size();

	for (int i = 1; i < size - 1; i++)
	{
		if (cp[i + 1] - cp[i] < (int)diff)
			diff = cp[i + 1] - cp[i];
	}
	return (diff);
}

unsigned int Span::longestSpan()
{
	unsigned int min = *std::min_element(_v.begin(), _v.end());
	unsigned int max = *std::max_element(_v.begin(), _v.end());
	return (max - min);
}

void	Span::randomFill(int size)
{
	srand(time(NULL));
	for (int i = 0; i < size; i++)
		this->addNumber(std::rand());

}

unsigned int Span::size()
{
	return _v.size();
}