#include "HumanA.hpp"

/* Constructor function of the HumanA class */
HumanA::HumanA(std::string name, Weapon &weaponType) : _weaponType(weaponType)
{
	this->_name = name;
}

/* Destructor function of the HumanA class */
HumanA::~HumanA(void)
{

}

/* Attack function of the HumanA class */
void	HumanA::attack(void)
{
	std::cout << _name << " attacks with their " << _weaponType.getType() << std::endl;
}
