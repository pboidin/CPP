#include "Weapon.hpp"

/* Default Constructor function of the Weapon class */
Weapon::Weapon()
{
	
}

/* Constructor function of the Weapon class */
Weapon::Weapon(std::string weaponType)
{
	this->_weaponType = weaponType;
}

/* Destructor function of the Weapon class */
Weapon::~Weapon(void)
{
	
}

/* Setter function for the weaponType */
void	Weapon::setType(std::string weaponType)
{
	this->_weaponType = weaponType;
}

/* Getter function for the weaponType */
std::string	Weapon::getType(void)
{
	return (this->_weaponType);
}
