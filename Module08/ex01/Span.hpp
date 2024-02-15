#ifndef SPAN_HPP
#define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>

class Span
{
	private:
		Span();
		std::vector<int> _v;
		unsigned int _n;
		unsigned int _nActual;
	public:
		Span(unsigned int n);
		~Span();
		Span(Span const &copy);
		Span	&operator=(Span const &copy);

		void addNumber(int number);
		unsigned int shortestSpan();
		unsigned int longestSpan();
		void randomFill(int size);
		unsigned int size();

		class NoSpace;
};

#endif
