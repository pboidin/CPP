#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class Cure : public AMateria
{
	private:
		std::string		_type;
	public:
		Cure();
		Cure(std::string const &type);
		Cure(const Cure &src);
		virtual				~Cure();
		virtual Cure		&operator=(const Cure &src);
		virtual AMateria	*clone() const;
		virtual void		use(ICharacter &target);
};

#endif