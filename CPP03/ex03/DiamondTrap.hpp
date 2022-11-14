#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	public:
    	DiamondTrap();
		DiamondTrap(const std::string &name);
		DiamondTrap(const DiamondTrap &src);
    	virtual		~DiamondTrap();
		DiamondTrap	&operator=(const DiamondTrap &src);

		using ScavTrap::attack;
		std::string			&getName();
		unsigned int		getHp();
		unsigned int		getEp();
		unsigned int		getAd();
		void				whoAmI();

    private:
		std::string		_name;
		using FragTrap::_hp;
		using ScavTrap::_ep;
		using FragTrap::_ad;
};

#endif