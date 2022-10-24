/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 12:55:25 by schuah            #+#    #+#             */
/*   Updated: 2022/08/19 14:36:06 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

/* Constructor function of the HumanA class */
HumanA::HumanA(std::string name, Weapon &weaponType) : _weaponType(weaponType)
{
	this->_name = name;
}

/* Destructor function of the HumanA class */
HumanA::~HumanA(void)
{

}

/* Attack function of the HumanA class */
void	HumanA::attack(void)
{
	std::cout << _name << " attacks with their " << _weaponType.getType() << std::endl;
}
