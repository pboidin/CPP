/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 12:43:01 by schuah            #+#    #+#             */
/*   Updated: 2022/08/19 14:25:29 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

/* Default Constructor function of the Weapon class */
Weapon::Weapon()
{
	
}

/* Constructor function of the Weapon class */
Weapon::Weapon(std::string weaponType)
{
	this->_weaponType = weaponType;
}

/* Destructor function of the Weapon class */
Weapon::~Weapon(void)
{
	
}

/* Setter function for the weaponType */
void	Weapon::setType(std::string weaponType)
{
	this->_weaponType = weaponType;
}

/* Getter function for the weaponType */
std::string	Weapon::getType(void)
{
	return (this->_weaponType);
}
