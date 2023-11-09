#include <iostream>
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main( void )
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;

	const WrongAnimal* metaWrong = new WrongAnimal();
	const WrongAnimal* jWrong = new WrongCat();

	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	std::cout << metaWrong->getType() << " " << std::endl;
	std::cout << jWrong->getType() << " " << std::endl;

	metaWrong->makeSound();
	jWrong->makeSound();

	delete metaWrong;
	delete jWrong;
	delete meta;
	delete j;
	delete i;
	return 0;
}