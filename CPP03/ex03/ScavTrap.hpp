#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
    	ScavTrap();
		ScavTrap(const std::string &name);
		ScavTrap(const ScavTrap &src);
		virtual		~ScavTrap();
		ScavTrap	&operator=(const ScavTrap &src);

		void		attack(const std::string &target);
		void		guardGate();
	
	protected:
		std::string		_name;
		unsigned int	_hp;
		unsigned int	_ep;
		unsigned int	_ad;
};

#endif