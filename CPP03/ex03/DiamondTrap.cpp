#include "DiamondTrap.hpp"

/* Default constructor for Diamontrap Class */
DiamondTrap::DiamondTrap()
{
    ClapTrap("Null_clap_name");
    this->_name = "Null";
    std::cout << "DiamondTrap - Call of Default constructor" << std::endl;
}

/* Default constructor with input of Diamondtrap Class */
DiamondTrap::DiamondTrap(const std::string &name)
{
	std::cout << "DiamondTrap -  Constructor function with string input has been called" << std::endl;
	this->_name = name;
}

/* Copy constructor of Diamondtrap Class */
DiamondTrap::DiamondTrap(const DiamondTrap &src)
{
	std::cout << "DiamondTrap -  Copy constructor has been called" << std::endl;
	*this = src;
}

/* Destructor function of Diamondtrap Class */
DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap - Call of Default constructor" << std::endl;
}

/* Copy assignation operator of Diamondtrap Class */
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &src)
{
	this->_name = src._name;
	this->_hp = src._hp;
	this->_ep = src._ep;
	this->_ad = src._ad;
	return (*this);
}

/* GetterName function of Diamondtrap Class */
std::string	&DiamondTrap::getName(void)
{
	return (this->_name);
}

/* GetterHP function of Diamondtrap Class */
unsigned int	DiamondTrap::getHp(void)
{
	return (this->_hp);
}

/* GetterEP function of Diamondtrap Class */
unsigned int	DiamondTrap::getEp(void)
{
	return (this->_ep);
}

/* GetterAD function of Diamondtrap Class */
unsigned int	DiamondTrap::getAd(void)
{
	return (this->_ad);
}

/* WhoAmI function of DiamondTrap class, 
** print message */
void	DiamondTrap::whoAmI()
{
	std::cout << "My name is " << this->_name << " and my parents are " << this->ScavTrap::_name <<  " and " << this->FragTrap::_name << std::endl;
}