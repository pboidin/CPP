#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		/* Orthrodox canonical form */
		FragTrap();
		FragTrap(const std::string &name);
		FragTrap(const FragTrap &src);
		virtual			~FragTrap();
		FragTrap		&operator=(const FragTrap &src);
		
		/* Member functions */
		void			attack(const std::string &target);
		void			highFivesGuys();

	protected:
		unsigned int	_hp;
		unsigned int	_ep;
		unsigned int	_ad;
};

#endif
