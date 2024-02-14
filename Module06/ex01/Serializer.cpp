#include "Serializer.hpp"

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define MAGENTA "\033[35m"
#define BLUE "\033[34m"

Serializer::Serializer()
{
	std::cout << GREEN << "Create Serialize Default" << RESET << std::endl;
}

Serializer::~Serializer()
{
	std::cout << RED << "Destroy Serialize Default" << RESET << std::endl;
}

Serializer::Serializer(Serializer const &copy)
{
	std::cout << YELLOW << "Copy Serialize Default" << RESET << std::endl;
	*this = copy;
}

Serializer	&Serializer::operator=(const Serializer &copy)
{
	if (this != &copy) {
		*this = copy;
	}
	std::cout << BLUE << "Operator = Serialize Default" << RESET << std::endl;
	return *this;
}

uintptr_t Serializer::serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);	
}