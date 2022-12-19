#include "ClapTrap.hpp"

/* Default constructor of ClapTrap Class */
ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap - Default Constructor Called" << std::endl;
    this->_name = "Null";
    this->_hp = 10;
    this->_ep = 10;
    this->_ad = 0;
}

/* Copy constructor of ClapTrap Class */
ClapTrap::ClapTrap(const ClapTrap &src)
{
    std::cout << "ClapTrap - Copy Constructor Called" << std::endl;
    *this = src;
}

/* .Constructor function for string input of ClapTrap class */
ClapTrap::ClapTrap(const std::string &name)
{
	this->_name = name;
	this->_hp = 10;
	this->_ep = 10;
	this->_ad = 10;
}

/* Destructor of ClassTrap Class */
ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap - Destructor Called" << std::endl;
}

/* Copy assignation operator of ClapTrap Class */
ClapTrap 			&ClapTrap::operator=(const ClapTrap &src)
{
    this->_name = src._name;
    this->_hp = src._hp;
    this->_ep = src._ep;
    this->_ad = src._ad;
    return (*this);
}

/* Getter name function of ClassTrap Class */
const std::string   &ClapTrap::getName(void)
{
    return (this->_name);
}

/* Getter HP function of ClassTrap Class */
unsigned int        ClapTrap::getHp(void)
{
    return (this->_hp);
}

/* Getter EP function of ClassTrap Class */
unsigned int        ClapTrap::getEp(void)
{
    return (this->_ep);
}

/* Getter AD function of ClassTrap Class */
unsigned int        ClapTrap::getAd(void)
{
    return (this->_ad);
}

/* Attack function of ClassTrap Class
** Check EP before Action, Print Message and reduce EP by 1 */
void    ClapTrap::attack(const std::string &target)
{
    if (this->_ep > 0)
    {
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_ad << " points of damage!" << std::endl;
		this->_ep--;
		std::cout << "ClapTrap " << this->_name << " Ep has been reduced to " << this->_ep << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_name << " has not enough Ep!" << std::endl;
}

/* Damage function of ClassTrap Class
** Check amount nore HP, HP to 0 or reduce HP by amount */
void	ClapTrap::takeDamage(unsigned int amount)
{
	if (amount > this->_hp)
		this->_hp = 0;
	else
		this->_hp -= amount;
	std::cout << "ClapTrap " << this->_name << " takes " << amount << " amount of damge!" << std::endl;
	std::cout << "ClapTrap " << this->_name << " Hp has been reduced to " << this->_hp << std::endl;
}

/* Repaired function of ClassTrap Class
** Check EP before Action, Print Message and add EP by 1 */
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
