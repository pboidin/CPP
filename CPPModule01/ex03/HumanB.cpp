/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:15:09 by piboidin          #+#    #+#             */
/*   Updated: 2022/11/14 15:15:10 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

/* Constructor function of the HumanB class */
HumanB::HumanB(std::string name)
{
	this->_name = name;
	this->_weaponType = NULL;
}

/* Destructor function of the HumanB class */
HumanB::~HumanB(void)
{

}

/* Setter function for the weaponType */
void	HumanB::setWeapon(Weapon &weaponType)
{
	this->_weaponType = &weaponType;
}

/* Attack function of the HumanB class */
void	HumanB::attack(void)
{
	if (_weaponType != NULL)
		std::cout << _name << " attacks with their " << _weaponType->getType() << std::endl;
	else
		std::cout << _name << " does not have a weapon to attack with" << std::endl;
}
