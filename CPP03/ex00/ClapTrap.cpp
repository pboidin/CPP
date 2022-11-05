#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "(ClapTrap) Default Constructor Called" << std::endl;
    this->_name = "Null";
    this->_hp = 10;
    this->_ep = 10;
    this->_ad = 0;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
    std::cout << "(ClapTrap) Copy Constructor Called" << std::endl;
    *this = src;
}

ClapTrap::~ClapTrap()
{
    std::cout << "(ClapTrap) Destructor Called" << std::endl;
}

ClapTrap 			&ClapTrap::operator=(const ClapTrap &src)
{
    this->_name = src._name;
    this->_hp = src._hp;
    this->_ep = src._ep;
    this->_ad = src._ad;
    return (*this);
}

const std::string   &ClapTrap::getName(void)
{
    return (this->_name);
}

unsigned int        ClapTrap::getHp(void)
{
    return (this->_hp);
}

unsigned int        ClapTrap::getEp(void)
{
    return (this->_ep);
}

unsigned int        ClapTrap::getAd(void)
{
    return (this->_ad);
}

void    ClapTrap::attack(const std::string &target)
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

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (amount > this->_hp)
		this->_hp = 0;
	else
		this->_hp -= amount;
	std::cout << "ClapTrap " << this->_name << " takes " << amount << " amount of damge!" << std::endl;
	std::cout << "ClapTrap " << this->_name << " Hp has been reduced to " << this->_hp << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_ep > 0)
	{
		std::cout << "ClapTrap " << this->_name << " repairs " << amount << " amount of Hp!" << std::endl;
		this->_hp += amount;
		std::cout << "ClapTrap " << this->_name << " Hp has been increased to " << this->_hp << std::endl;
		this->_ep--;
		std::cout << "ClapTrap " << this->_name << " Ep has been reduced to " << this->_ep << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_name << " has not enought EP!" << std::endl;
}
