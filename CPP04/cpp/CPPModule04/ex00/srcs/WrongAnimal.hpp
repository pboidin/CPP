#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
	public:
		/* Orthrodox canonical form */
		WrongAnimal();
		WrongAnimal(const WrongAnimal &src);
		virtual			~WrongAnimal();
		WrongAnimal		&operator=(const WrongAnimal &src);

		/* Member functions */
		void			makeSound() const;
		std::string		getType() const;
		void			setType(const std::string name);
	protected:
		std::string		_type;
};

#endif
