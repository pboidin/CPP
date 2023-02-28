/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 13:06:32 by piboidin          #+#    #+#             */
/*   Updated: 2022/12/21 13:06:57 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/* Default constructor of Fragtrap Class */
FragTrap::FragTrap()
{
	std::cout << "FragTrap - Call of Default constructor" << std::endl;
	this->_name = "Null";
	this->_hp = 100;
	this->_ep = 100;
	this->_ad = 30;
}

/* Default constructor with input of Fragtrap Class */
FragTrap::FragTrap(const std::string &name)
{
	std::cout << "FragTrap - Call of Default constructor with input" << std::endl;
	this->_name = name;
	this->_hp = 100;
	this->_ep = 100;
	this->_ad = 30;
}

/* Copy constructor of Fragtrap Class */
FragTrap::FragTrap(const FragTrap &src)
{
	std::cout << "FragTrap - Copy constructor function has been called" << std::endl;
	*this = src;
}

/* Destructor function of FragTrap class */
FragTrap::~FragTrap()
{
	std::cout << "FragTrap - Call of Default constructor" << std::endl;
}

/* Copy assignation function of Fragtrap Class */
FragTrap	&FragTrap::operator=(const FragTrap &src)
{
	this->_name = src._name;
	this->_hp = src._hp;
	this->_ep = src._ep;
	this->_ad = src._ad;
	return (*this);
}

/* Attack function for Scavtrap Class
** Check EP, print message and reduce by 1
*/

void	FragTrap::attack(const std::string &tar)
{
	if (this->_ep > 0)
	{
		std::cout << "FragTrap " << this->_name << " attacks " << tar << ", causing " << this->_ad << " points of damage!" << std::endl;
		this->_ep--;
		std::cout << "FragTrap " << this->_name << " Ep has been reduced to " << this->_ep << std::endl;
	}
	else
		std::cout << "FragTrap " << this->_name << " has not enough Ep!" << std::endl;
}

/* HighFivesGuys function for Scavtrap Class
** Check EP, print message and reduce by 1
*/

void	FragTrap::highFivesGuys()
{
	if (this->_ep > 0)
	{
		std::cout << "FragTrap " << this->_name << " wants to Hifives!" <<std::endl;
		this->_ep--;
		std::cout << "FragTrap " << this->_name << " Ep has been reduced to " << this->_ep << std::endl;
	}
	else
		std::cout << "FragTrap " << this->_name << " has not enough Ep!" << std::endl;
}
