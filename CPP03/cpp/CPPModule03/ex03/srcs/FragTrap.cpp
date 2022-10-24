/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 12:01:16 by schuah            #+#    #+#             */
/*   Updated: 2022/08/29 15:32:09 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/* Default constructor function of FragTrap class */
FragTrap::FragTrap()
{
	std::cout << "(FragTrap) Default constructor function has been called" << std::endl;
	this->_name = "Null";
	this->_hp = 100;
	this->_ep = 100;
	this->_ad = 30;
}

/* Constructor function for string input of FragTrap class */
FragTrap::FragTrap(const std::string &name)
{
	std::cout << "(FragTrap) Constructor function with string input has been called" << std::endl;
	this->_name = name;
	this->_hp = 100;
	this->_ep = 100;
	this->_ad = 30;
}

/* Copy constructor function of FragTrap class */
FragTrap::FragTrap(const FragTrap &src)
{
	std::cout << "(FragTrap) Copy constructor function has been called" << std::endl;
	*this = src;
}

/* Desturctor function of FragTrap class */
FragTrap::~FragTrap()
{
	std::cout << "(FragTrap) Destructor function has been called" << std::endl;
}

/* Copy assignation operator function of FragTrap class */
FragTrap	&FragTrap::operator=(const FragTrap &src)
{
	this->_name = src._name;
	this->_hp = src._hp;
	this->_ep = src._ep;
	this->_ad = src._ad;
	return (*this);
}

/* Attack function of FragTrap class
** Check whether it has enough EP points first before any action
** Prints message and reduce ep by 1 if enough ep, else do nothing */
void	FragTrap::attack(const std::string &target)
{
	if (this->_ep > 0)
	{
		std::cout << "FragTrap " << this->_name << " attacks " << target
			<< ", causing " << this->_ad << " points of damage!" << std::endl;
		this->_ep--;
		std::cout << "FragTrap " << this->_name << " Ep has been reduced to "
			<< this->_ep << std::endl;
	}
	else
		std::cout << "FragTrap " << this->_name << " has not enough Ep!" << std::endl;
}

/* HighFivesGuys function of FragTrap class
** Check whether it has enough EP points first before any action
** Prints message and reduce ep by 1 if enough ep, else do nothing */
void	FragTrap::highFivesGuys()
{
	if (this->_ep > 0)
	{
		std::cout << "FragTrap " << this->_name << " wants to Hi-5!" <<std::endl;
		this->_ep--;
		std::cout << "FragTrap " << this->_name << " Ep has been reduced to "
			<< this->_ep << std::endl;
	}
	else
		std::cout << "FragTrap " << this->_name << " has not enough Ep!" << std::endl;
}
