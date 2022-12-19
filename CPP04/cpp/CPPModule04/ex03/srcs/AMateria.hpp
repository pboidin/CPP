#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	public:
		/* Orthrodox canonical form */
		AMateria();
		AMateria(const AMateria &src);
		AMateria(std::string const &type);
		virtual				~AMateria();
		virtual AMateria	&operator=(const AMateria &src);

		/* Member functions */
		const std::string	&getType() const;
		virtual AMateria	*clone() const = 0;
		virtual void		use(ICharacter &target);
	protected:
		std::string 		_type;
};

#endif
