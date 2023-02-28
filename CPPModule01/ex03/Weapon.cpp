/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:15:25 by piboidin          #+#    #+#             */
/*   Updated: 2022/11/14 15:15:26 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

/* Default Constructor function of the Weapon Class */
Weapon::Weapon()
{
    return ;
}

/* Constructor function of Weapon Class */
Weapon::Weapon(std::string weaponType)
{
	this->_weaponType = weaponType;
}

/* Destructor function of the Weapon Class */
Weapon::~Weapon()
{
    return ;
}

/* Setter function of the weaponType */
void	Weapon::setType(std::string weaponType)
{
	this->_weaponType = weaponType;
}

/* Getter function of the weaponType */
std::string Weapon::getType(void)
{
	return (this->_weaponType);
}
