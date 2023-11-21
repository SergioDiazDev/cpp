#include <iostream>
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main( void )
{
	//constructores
	const Animal* meta= new Animal();
	const Dog perro;
	const Animal* dog = new Dog(perro);
	const Animal* dog_clone = new Dog(perro);
	//Dicen sus tipos
	std::cout << meta->getType() << std::endl;
	std::cout << dog->getType() << std::endl;
	std::cout << dog_clone->getType() << std::endl;
	
	std::cout << meta->getType() << " say: ";
	meta->makeSound();
	std::cout << std::endl;

	std::cout << dog->getType()  << " say: ";
	dog->makeSound();
	std::cout << std::endl;

	//libero memoria y compruebo que la copia ha sido profunda
	delete meta;
	delete dog;
	delete dog_clone;


	//Ahora sin ser virtual makeSound.
	WrongAnimal * animal = new WrongCat();
	WrongAnimal * meta1 = new WrongAnimal();

	std::cout << meta1->getType() << " say: ";
	meta1->makeSound();
	std::cout << std::endl;

	std::cout << animal->getType()  << " say: ";
	animal->makeSound();
	std::cout << std::endl;

	return 0;
}