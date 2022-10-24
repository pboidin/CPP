#ifndef	HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanB
{
	public:
		HumanB(std::string name);
		~HumanB();
		void	setWeapon(Weapon &weaponType);
		void	attack();

	private:
		std::string	_name;
		Weapon		*_weaponType;
};

#endif