#include "easyfind.hpp"
#include <list>
#include <vector>


int main()
{
	//Vector
	std::vector<int> v;

	for (int i = 0; i < 5; i++)
		v.push_back(i);

	std::cout << "Vector" << std::endl;
	std::vector<int>::iterator vIt = easyfind(v, 1);
	std::cout << "Vector find: " << *vIt << std::endl;

	//List
	std::list<int> l;

	for (int i = 0; i < 5; i++)
		l.push_back(i);

	std::cout << "List" << std::endl;
	std::list<int>::iterator lIt = easyfind(l, 2);
	std::cout << "List find: " << *lIt << std::endl;
	
	return (0);
}