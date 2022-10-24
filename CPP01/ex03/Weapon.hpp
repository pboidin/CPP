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
		std::string	getType(void);
		void		setType(std::string weaponType);
		void		attack(void);

    private:
        std::string	_weaponType;
};

#endif