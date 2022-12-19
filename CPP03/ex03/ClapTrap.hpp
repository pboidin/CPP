#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
    public:
        ClapTrap();
		ClapTrap(const ClapTrap &src);
		ClapTrap(const std::string &name);
        virtual				~ClapTrap();
		
		ClapTrap 			&operator=(const ClapTrap &src);

		void				attack(const std::string& target);
		void				takeDamage(unsigned int amount);
		void				beRepaired(unsigned int amount);
		const std::string	&getName();
		unsigned int		getHp();
		unsigned int		getEp();
		unsigned int		getAd();
    
    protected:
        std::string		_name;
		unsigned int	_hp;
		unsigned int	_ep;
		unsigned int	_ad;
};

#endif
