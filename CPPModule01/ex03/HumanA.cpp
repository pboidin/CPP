/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:14:59 by piboidin          #+#    #+#             */
/*   Updated: 2022/11/14 15:15:00 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

/* Constructor function of the HumanA class */
HumanA::HumanA(std::string name, Weapon &weaponType) : _weaponType(weaponType)
{
    this->_name = name;
}

/* Destructor function of the HumanA class */
HumanA::~HumanA()
{

}

/* Attack function of the HumanA class */
void    HumanA::attack(void)
{
    std::cout << _name << " attacks with their " << _weaponType.getType() << std::endl;
}
