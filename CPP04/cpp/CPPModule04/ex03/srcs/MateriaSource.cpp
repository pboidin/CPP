/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 17:54:33 by schuah            #+#    #+#             */
/*   Updated: 2022/08/29 15:32:58 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/* Default constructor function of Cure class */
MateriaSource::MateriaSource()
{
	for (int i = 0; i < MAX_INV_SLOT; i++)
		this->_inventory[i] = NULL;
}

/* Copy constructor function of Cure class */
MateriaSource::MateriaSource(const MateriaSource &src)
{
	*this = src;
}

/* Destructor function of Cure class */
MateriaSource::~MateriaSource()
{
	for (int i = 0; i < MAX_INV_SLOT; i++)
		if (this->_inventory[i] != NULL)
			delete (this->_inventory[i]);
}

/* Copy assignation operator function of Character class */
MateriaSource	&MateriaSource::operator=(const MateriaSource &src)
{
	const AMateria	*temp;
	for (int i = 0; i < MAX_INV_SLOT; i++)
	{
		temp = src.getMateria(i);
		if (temp != NULL)
			this->_inventory[i] = temp->clone();
		else
			this->_inventory[i] = NULL;
	}
	return (*this);
}

/* Getter function for materia in inventory of MateriaSouce class */
const AMateria	*MateriaSource::getMateria(int i) const
{
	if (i < 0 || i > MAX_INV_SLOT)
		return (NULL);
	return (this->_inventory[i]);
}

/* Puts materia into inventory */
void	MateriaSource::learnMateria(AMateria *materia)
{
	for (int i = 0; i < MAX_INV_SLOT; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = materia;
			break ;
		}
	}
}

/* Returns a clone of a Materia */
AMateria	*MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < MAX_INV_SLOT; i++)
	{
		if (this->_inventory[i] == NULL)
			break ;
		if (this->_inventory[i]->getType() == type)
			return (this->_inventory[i]->clone());
	}
	return (0);
}
