/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 13:25:09 by schuah            #+#    #+#             */
/*   Updated: 2022/08/29 15:32:09 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/* Default constructor function of ScavTrap class */
ScavTrap::ScavTrap()
{
	std::cout << "(ScavTrap) Default constructor function has been called" << std::endl;
	this->_name = "Null";
	this->_hp = 100;
	this->_ep = 50;
	this->_ad = 20;
}

/* Constructor function for string input of ScavTrap class */
ScavTrap::ScavTrap(const std::string &name)
{
	std::cout << "(ScavTrap) Constructor function with string input has been called" << std::endl;
	this->_name = name;
	this->_hp = 100;
	this->_ep = 50;
	this->_ad = 20;
}

/* Copy constructor function of ScavTrap class */
ScavTrap::ScavTrap(const ScavTrap &src)
{
	std::cout << "(ScavTrap) Copy constructor function has been called" << std::endl;
	*this = src;
}

/* Desturctor function of ScavTrap class */
ScavTrap::~ScavTrap()
{
	std::cout << "(ScavTrap) Destructor function has been called" << std::endl;
}

/* Copy assignation operator function of ScavTrap class */
ScavTrap	&ScavTrap::operator=(const ScavTrap &src)
{
	this->_name = src._name;
	this->_hp = src._hp;
	this->_ep = src._ep;
	this->_ad = src._ad;
	return (*this);
}

/* Attack function of ScavTrap class
** Check whether it has enough EP points first before any action
** Prints message and reduce ep by 1 if enough ep, else do nothing */
void	ScavTrap::attack(const std::string &target)
{
	if (this->_ep > 0)
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target
			<< ", causing " << this->_ad << " points of damage!" << std::endl;
		this->_ep--;
		std::cout << "ScavTrap " << this->_name << " Ep has been reduced to "
			<< this->_ep << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->_name << " has not enough Ep!" << std::endl;
}

/* GuardGate function of ScavTrap class
** Check whether it has enough EP points first before any action
** Prints message and reduce ep by 1 if enough ep, else do nothing */
void	ScavTrap::guardGate()
{
	if (this->_ep > 0)
	{
		std::cout << "ScavTrap " << this->_name << " is in Gate keeper mode" <<std::endl;
		this->_ep--;
		std::cout << "ScavTrap " << this->_name << " Ep has been reduced to "
			<< this->_ep << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->_name << " has not enough Ep!" << std::endl;
}
