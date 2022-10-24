#ifndef HUMANA_CPP
# define HUMANA_CPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanA
{
	public:
		HumanA(std::string name, Weapon &weaponType);
		~HumanA();
		void	attack();

	private:
		std::string _name;
		Weapon		&_weaponType;
};

# endif