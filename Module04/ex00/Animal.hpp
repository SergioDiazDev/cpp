#ifndef ANIMAL_HPP
#define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected:
		std::string	_type;
	public:
		Animal();
		~Animal();
		Animal(Animal const &copy);
		Animal	&operator=(Animal const &copy);

		std::string	getType(void) const;
		void		setType(std::string);

		virtual void	makeSound(void) const;
};

#endif
