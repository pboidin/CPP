/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 15:28:45 by piboidin          #+#    #+#             */
/*   Updated: 2022/12/27 15:28:47 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/* Default constructor function of Brain */
Brain::Brain()
{
    std::cout << "Brain - Default Constructor function" << std::endl;
}

/* Copy contructori default of Brain */
Brain::Brain(const Brain &src)
{
	std::cout << "Brain - Copy Constructor function" << std::endl;
	*this = src;
}

/* Destructor function of Brain */
Brain::~Brain()
{
	std::cout << "Brain - Destructor function" << std::endl;
}

/* Surcharge d'opérateur */
Brain	&Brain::operator=(const Brain &src)
{
	for (int i = 0; i < IDEAS; i++)
		this->setIdea(i, src.getIdea(i));
	return(*this);
}

/* SetIda Function */
void	Brain::setIdea(int i, const std::string &newIdea)
{
	if (i < 0 || i >= IDEAS)
		return ;
	this->_ideas[i] = newIdea;
}

/* Function to get idea the type of the Brain */
const std::string	&Brain::getIdea(int i) const
{
	if (i < 0 || i >= IDEAS)
		return (this->_ideas[0]);
	return (this->_ideas[i]);
}
