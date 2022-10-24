/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 12:32:44 by schuah            #+#    #+#             */
/*   Updated: 2022/08/29 15:32:09 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/* Default constructor function for DiamondTrap class */
DiamondTrap::DiamondTrap()
{
	ClapTrap("Null_clap_name");
	this->_name = "Null";
	std::cout << "(DiamondTrap) Default constructor function has been called" << std::endl;
}

/* Constructor function for string input of DiamondTrap class */
DiamondTrap::DiamondTrap(const std::string &name)
{
	std::cout << "(DiamondTrap) Constructor function with string input has been called" << std::endl;
	this->_name = name;
}

/* Copy constructor function of DiamondTrap class */
DiamondTrap::DiamondTrap(const DiamondTrap &src)
{
	std::cout << "(DiamondTrap) Copy constructor function has been called" << std::endl;
	*this = src;
}

/* Destructor function of DiamondTrap class */
DiamondTrap::~DiamondTrap()
{
	std::cout << "(DiamondTrap) Destructor function has been called" << std::endl;
}

/* Copy assignation operator function of DiamondTrap class */
DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &src)
{
	this->_name = src._name;
	this->_hp = src._hp;
	this->_ep = src._ep;
	this->_ad = src._ad;
	return (*this);
}

/* Getter function for name of DiamondTrap class */
std::string	&DiamondTrap::getName(void)
{
	return (this->_name);
}

/* Getter function for Hp of DiamondTrap class */
unsigned int	DiamondTrap::getHp(void)
{
	return (this->_hp);
}

/* Getter function for Ep of DiamondTrap class */
unsigned int	DiamondTrap::getEp(void)
{
	return (this->_ep);
}

/* Getter function for Ad of DiamondTrap class */
unsigned int	DiamondTrap::getAd(void)
{
	return (this->_ad);
}

/* WhoAmI function of DiamondTrap class, prints a basic message of who the bot is 
** and who are the two parents */
void	DiamondTrap::whoAmI()
{
	std::cout << "My name is " << this->_name << " and my parent's name is "
		<< this->ScavTrap::_name <<  " and " << this->FragTrap::_name << std::endl;
}
