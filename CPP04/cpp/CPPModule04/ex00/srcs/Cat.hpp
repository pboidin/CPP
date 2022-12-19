#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	public:
		/* Orthrodox canonical form */
		Cat();
		Cat(const Cat &src);
		virtual			~Cat();
		Cat				&operator=(const Cat &src);

		/* Member functions */
		virtual void	makeSound() const;
};

#endif
