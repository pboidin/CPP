/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 15:30:29 by piboidin          #+#    #+#             */
/*   Updated: 2022/12/27 15:30:31 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
	this->_name = "Null";
	for (int i = 0; i < MAX_INV; i++)
		_inventory[i] = NULL;
	
}

Character::Character(std::string const &name)
{
	this->_name = name;
	for (int i = 0; i < MAX_INV; i++)
		_inventory[i] = NULL;
}

Character::Character(const Character &src)
{
	*this = src;
}

Character::~Character(void)
{
	for (int i = 0; i < MAX_INV; i++)
		if (_inventory[i] != NULL)
			delete (_inventory[i]);
}

Character	&Character::operator=(const Character &src)
{
	const AMateria *tmp;

	this->_name = src._name;
	for (int i = 0; i < MAX_INV; i++)
	{
		tmp = src.getMateria(i);
		if (tmp != NULL)
			_inventory[i] = tmp->clone();
		else
			_inventory[i] = NULL;
	}
	return (*this);
}

const std::string	&Character::getName() const
{
	return (this->_name);
}

const AMateria	*Character::getMateria(int i) const
{
	if (i < 0 || i >= MAX_INV)
		return (NULL);
	return (this->_inventory[i]);
}

void	Character::equip(AMateria *m)
{
	for (int i = 0; i < MAX_INV; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			break ;
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx >= MAX_INV || this->_inventory[idx] == NULL)
		return ;
	this->_inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx >= MAX_INV || this->_inventory[idx] == NULL)
		return ;
	this->_inventory[idx]->use(target);
}
