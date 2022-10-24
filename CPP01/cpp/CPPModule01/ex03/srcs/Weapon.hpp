#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
	public:
		Weapon();
		Weapon(std::string weaponType);
		~Weapon();
		void		attack(void);
		void		setType(std::string weaponType);
		std::string	getType(void);
	private:
		std::string	_weaponType;
};

#endif
