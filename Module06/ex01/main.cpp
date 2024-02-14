#include <iostream>
#include "Serializer.hpp"
#include "Data.hpp"


int main()
{
	Data		data(5);	
	uintptr_t	ptr;

	std::cout << "Pointer Data: " << &data << "-->Value Data: " << data.getValue() << std::endl;

	ptr = Serializer::serialize(&data);
	std::cout << "Pointer Serialized: " << ptr << std::endl;

	Data*		dataPtr;
	dataPtr = Serializer::deserialize(ptr);
	std::cout << "Pointer Deserialized: " << dataPtr << "-->Value Data:" << dataPtr->getValue() << std::endl;

	return (0);
}