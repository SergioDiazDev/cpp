#include "Iter.hpp"
#include <iostream>

void square(int &num)
{
	num = num * num;
}

void print(int num[], int len)
{
	for (int i = 0; i < len; i++)
		std::cout << num[i] << std::endl;
}

int main()
{
	const int size = 5;
	int	a[size] = {1, 2, 3, 4, 5 };
	print(a, size);
	std::cout << std::endl;
	::iter(a, size, square);
	print(a, size);
}