#ifndef DOG_HPP
#define DOG_HPP

# include <iostream>
# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal
{
	private:
		Brain	*_brain;
	public:
		Dog();
		~Dog();
		Dog(Dog const &copy);
		Dog	&operator=(Dog const &copy);

		void	makeSound(void) const;
};

#endif
