#include <iostream>
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main( void )
{
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();

	std::cout << j->getType() << " " << j->getType() << std::endl;
	std::cout << i->getType() << " " << std::endl;

	const WrongAnimal* jWrong = new WrongCat();

	i->makeSound();
	j->makeSound();

	std::cout << jWrong->getType() << " " << std::endl;

	jWrong->makeSound();

	delete jWrong;
	delete j;
	delete i;
	return 0;
}