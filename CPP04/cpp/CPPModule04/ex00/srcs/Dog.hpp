#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	public:
		/* Orthrodox canonical form */
		Dog();
		Dog(const Dog &src);
		virtual			~Dog();
		Dog				&operator=(const Dog &src);

		/* Member functions */
		virtual void	makeSound() const;
};

#endif
