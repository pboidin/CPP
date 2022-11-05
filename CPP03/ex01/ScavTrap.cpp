#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "(ScavTrap) Default Constructor Called" << std::endl;
    this->_name = "Null";
    this->_hp = 100;
    this->_ep = 50;
    this->_ad = 20;
}

ScavTrap::ScavTrap(const std::string &name)
{
    std::cout << "(ScavTrap) Constructor function with string input Called" << std::endl;
	this->_name = name;
	this->_hp = 100;
	this->_ep = 50;
	this->_ad = 20;
}

ScavTrap::ScavTrap(const ScavTrap &src)
{
    std::cout << "(ScavTrap) Copy Constructor Called" << std::endl;
    *this = src;
}

ScavTrap::~ScavTrap()
{
    std::cout << "(ScavTrap) Destructor Called" << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &src)
{
	this->_name = src._name;
	this->_hp = src._hp;
	this->_ep = src._ep;
	this->_ad = src._ad;
	return (*this);
}

void    ScavTrap::attack(const std::string &target)
{
    if (this->_ep > 0)
    {
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_ad << " points of damage!" << std::endl;
		this->_ep--;
		std::cout << "ClapTrap" << this->_name << " Ep has been reduced to " << this->_ep << std::endl;
	}
	else
		std::cout << "ClapTrap" << this->_name << " has not enough Ep!" << std::endl;
}

void    ScavTrap::guardGate()
{
    if (this->_ep > 0)
    {
        std::cout << "ScavTrap " << this->_name << " is in Gate Keeper mode" << std::endl;
        this->_ep--;
        std::cout << "ScavTrap " << this->_name << " Ep has been reduced to " << this->_ep << std::endl;
    }
    else
        std::cout << "ScavTrap " << this->_name << " has not enought Ep!" << std::endl;
}