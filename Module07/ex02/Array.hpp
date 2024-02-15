#ifndef ARRAY_HPP
#define ARRAY_HPP

# include <iostream>

template <typename T> class Array
{
	private:
		T * _array;
		unsigned int _size;
	public:
		Array();
		Array(unsigned int size);
		~Array();
		Array(Array const &copy);
		Array	&operator=(Array const &copy);

		unsigned int size() const;

		T &operator[](unsigned int);
};
# include "Array.tpp"

#endif
