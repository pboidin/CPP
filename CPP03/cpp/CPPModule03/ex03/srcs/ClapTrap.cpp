/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 11:30:48 by schuah            #+#    #+#             */
/*   Updated: 2022/08/29 15:32:09 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* Default constructor function of ClapTrap class */
ClapTrap::ClapTrap()
{
	std::cout << "(ClapTrap) Default constructor function has been called" << std::endl;
	this->_name = "Null";
	this->_hp = 10;
	this->_ep = 10;
	this->_ad = 0;
}

/* Copy constructor function of ClapTrap class */
ClapTrap::ClapTrap(const ClapTrap &src)
{
	std::cout << "(ClapTrap) Copy constructor function has been called" << std::endl;
	*this = src;
}

/* Constructor function for string input of ClapTrap class */
ClapTrap::ClapTrap(const std::string &name)
{
	this->_name = name;
	this->_hp = 10;
	this->_ep = 10;
	this->_ad = 10;
}

/* Destructor function of ClapTrap class */
ClapTrap::~ClapTrap()
{
	std::cout << "(ClapTrap) Destructor function has been called" << std::endl;
}

/* Copy assignation operator function of ClapTrap class */
ClapTrap	&ClapTrap::operator=(const ClapTrap &src)
{
	this->_name = src._name;
	this->_hp = src._hp;
	this->_ep = src._ep;
	this->_ad = src._ad;
	return (*this);
}

/* Getter function for name of ClapTrap class */
const std::string	&ClapTrap::getName(void)
{
	return (this->_name);
}

/* Getter function for Hp of ClapTrap class */
unsigned int	ClapTrap::getHp(void)
{
	return (this->_hp);
}

/* Getter function for Ep of ClapTrap class */
unsigned int	ClapTrap::getEp(void)
{
	return (this->_ep);
}

/* Getter function for Ad of ClapTrap class */
unsigned int	ClapTrap::getAd(void)
{
	return (this->_ad);
}

/* Attack function of ClapTrap class
** Check whether it has enough EP points first before any action
** Prints message and reduce ep by 1 if enough ep, else do nothing */
void	ClapTrap::attack(const std::string &target)
{
	if (this->_ep > 0)
	{
		std::cout << "Claptrap " << this->_name << " attacks " << target
			<< ", causing " << this->_ad << " points of damage!" << std::endl;
		this->_ep--;
		std::cout << "Claptrap " << this->_name << " Ep has been reduced to "
			<< this->_ep << std::endl;
	}
	else
		std::cout << "Claptrap " << this->_name << " has not enough Ep!" << std::endl;
}

/* TakeDamage function of ClapTrap class
** Checks whether amount is more than current hp
** Set hp to 0 if it is, else reduce hp by amount and prints message */
void	ClapTrap::takeDamage(unsigned int amount)
{
	if (amount > this->_hp)
		this->_hp = 0;
	else
		this->_hp -= amount;
	std::cout << "Claptrap " << this->_name << " takes " << amount
		<< " amount of damage!" << std::endl;
	std::cout << "Claptrap " << this->_name << " Hp has been reduced to "
		<< this->_hp << std::endl;
}

/* BeRepaired function of ClapTrap class
** Check whether it has enough EP points first before any action
** Prints message and increase hp by 1 if enough ep, else do nothing */
void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_ep > 0)
	{
		std::cout << "Claptrap " << this->_name << " repairs " << amount
			<< " amount of Hp!" << std::endl;
		this->_hp += amount;
		std::cout << "Claptrap " << this->_name << " Hp has been increased to "
			<< this->_hp << std::endl;
		this->_ep--;
		std::cout << "Claptrap " << this->_name << " Ep has been reduced to "
			<< this->_ep << std::endl;
	}
	else
		std::cout << "Claptrap " << this->_name << " has not enough Ep!" << std::endl;
}
