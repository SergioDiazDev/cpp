#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	protected:
		std::string	_type;
	public:
		WrongAnimal();
		~WrongAnimal();
		WrongAnimal(WrongAnimal const &copy);
		WrongAnimal	&operator=(WrongAnimal const &copy);

		std::string	getType(void) const;
		void		setType(std::string);

		virtual void	makeSound(void) const;
};

#endif
