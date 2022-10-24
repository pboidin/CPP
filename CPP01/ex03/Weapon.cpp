#include "Weapon.hpp"

/* Default Constructor function of the Weapon Class */
Weapon::Weapon()
{
    return ;
}

/* Constructor function of Weapon Class */
Weapon::Weapon(std::string weaponType)
{
	this->_weaponType = weaponType;
}

/* Destructor function of the Weapon Class */
Weapon::~Weapon()
{
    return ;
}

/* Setter function of the weaponType */
void	Weapon::setType(std::string weaponType)
{
	this->_weaponType = weaponType;
}

/* Getter function of the weaponType */
std::string Weapon::getType(void)
{
	return (this->_weaponType);
}