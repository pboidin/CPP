/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 17:07:53 by schuah            #+#    #+#             */
/*   Updated: 2022/08/29 15:32:58 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/* Default constructor function of Character class */
Character::Character(void)
{
	this->_name = "Null";
	for (int i = 0; i < MAX_INV_SLOT; i++)
		_inventory[i] = NULL;
}

/* Constructor function for string input of Character class */
Character::Character(std::string const &name)
{
	this->_name = name;
	for (int i = 0; i < MAX_INV_SLOT; i++)
		_inventory[i] = NULL;
}

/* Copy constructor function of Character class */
Character::Character(const Character &src)
{
	*this = src;
}

/* Destructor function of Character class */
Character::~Character(void)
{
	for (int i = 0; i < MAX_INV_SLOT; i++)
		if (_inventory[i] != NULL)
			delete (_inventory[i]);
}

/* Copy assignation operator function of Character class */
Character	&Character::operator=(const Character &src)
{
	const AMateria *temp;

	this->_name = src._name;
	for (int i = 0; i < MAX_INV_SLOT; i++)
	{
		temp = src.getMateria(i);
		if (temp != NULL)
			_inventory[i] = temp->clone();
		else
			_inventory[i] = NULL;
	}
	return (*this);
}

/* Getter function for name of Character class */
const std::string	&Character::getName() const
{
	return (this->_name);
}

/* Getter function for materia of Character class */
const AMateria	*Character::getMateria(int i) const
{
	if (i < 0 || i >= MAX_INV_SLOT)
		return (NULL);
	return (this->_inventory[i]);
}

/* Equips materia in inventory if it exists, else do nothing */
void	Character::equip(AMateria *m)
{
	for (int i = 0; i < MAX_INV_SLOT; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			break ;
		}
	}
}

/* Unequips materia in inventory if it exists, else do nothing */
void	Character::unequip(int idx)
{
	if (idx < 0 || idx >= MAX_INV_SLOT || this->_inventory[idx] == NULL)
		return ;
	this->_inventory[idx] = NULL;
}

/* Use materia in inventory if it exists, else do nothing */
void	Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx >= MAX_INV_SLOT || this->_inventory[idx] == NULL)
		return ;
	this->_inventory[idx]->use(target);
}
