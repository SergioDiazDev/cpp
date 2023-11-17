#ifndef AANIMAL_HPP
#define AANIMAL_HPP

# include <iostream>

class AAnimal
{
	protected:
		std::string	_type;
		AAnimal();
	public:
		virtual ~AAnimal();
		AAnimal(AAnimal const &copy);
		AAnimal	&operator=(AAnimal const &copy);

		std::string	getType(void) const;
		void		setType(std::string);

		virtual void	makeSound(void) const = 0;
};

#endif
