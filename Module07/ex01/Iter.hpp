#ifndef ITER_HPP
#define ITER_HPP

# include <iostream>

template<typename T, typename F> void iter(T &arr, int size, F f)
{
	for(int i = 0; i < size; ++i)
		f(arr[i]);
}

#endif
