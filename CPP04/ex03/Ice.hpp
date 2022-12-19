#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class Ice : public AMateria
{
	private:
		std::string			_type;
	public:
		Ice();
		Ice(std::string const &type);
		Ice(const Ice &src);
		virtual				~Ice();
		virtual Ice			&operator=(const Ice &src);
		virtual AMateria	*clone() const;
		virtual void		use(ICharacter &target);
};

#endif