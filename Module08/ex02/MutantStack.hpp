#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

# include <iostream>
# include <deque>
# include <stack>
# include <list>

template <typename T> class MutantStack: public std::stack<T>
{
	public:
		MutantStack();
		~MutantStack();
		MutantStack(MutantStack const &copy);
		MutantStack &operator=(MutantStack const &copy);
		typedef typename std::deque<T>::iterator iterator;
		iterator begin() { return std::stack<T>::c.begin(); }
		iterator end() { return std::stack<T>::c.end(); }
};

template <typename T> MutantStack<T>::MutantStack() {};

template <typename T> MutantStack<T>::~MutantStack() {};

template <typename T> MutantStack<T>::MutantStack(MutantStack const &copy)
{
	this->c = copy.c;
}

template <typename T> MutantStack<T> &MutantStack<T>::operator=(MutantStack const &copy)
{
	this->c = copy.c;
	return (*this);
}

#endif
