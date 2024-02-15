#ifndef EASYFIND_HPP
#define EASYFIND_HPP

# include <iostream>
# include <algorithm>

class ErrorValue : public std::exception {
	virtual const char *what() const throw(){
		return ("Error Value\n");
	}
};

template<typename T> typename T::iterator easyfind(T &cInt, int value)
{
	typename T::iterator it = find(cInt.begin(), cInt.end(), value);
	if (it == cInt.end())
		throw ErrorValue();
	return it;

}

#endif
