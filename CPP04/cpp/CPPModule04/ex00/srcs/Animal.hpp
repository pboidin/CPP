#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	public:
		/* Orthrodox canonical form */
		Animal();
		Animal(const Animal &src);
		virtual			~Animal();
		Animal			&operator=(const Animal &src);

		/* Member functions */
		virtual void	makeSound() const;
		std::string		getType() const;
	protected:
		std::string		_type;
};

#endif
