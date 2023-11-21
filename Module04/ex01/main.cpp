#include <iostream>
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main( void )
{
	const Dog perro;
	const Animal* dog = new Dog(perro);
	const Animal* dog_clone = new Dog(perro);
	std::cout << dog->getType() << std::endl;
	std::cout << dog_clone->getType() << std::endl;
	delete dog;
	delete dog_clone;
	return 0;
}