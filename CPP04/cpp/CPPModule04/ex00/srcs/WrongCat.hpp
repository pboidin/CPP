#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		/* Orthrodox canonical form */
		WrongCat();
		WrongCat(const WrongCat &src);
		virtual			~WrongCat();
		WrongCat		&operator=(const WrongCat &src);

		/* Member functions */
		virtual void	makeSound() const;
};

#endif
