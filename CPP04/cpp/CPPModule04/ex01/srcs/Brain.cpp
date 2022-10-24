/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 14:36:56 by schuah            #+#    #+#             */
/*   Updated: 2022/08/29 15:32:58 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/* Default constructor function of Brain class */
Brain::Brain()
{
	std::cout << "(Brain) Default constructor function is called" << std::endl;
}

/* Copy constructor function of Brain class */
Brain::Brain(const Brain &src)
{
	std::cout << "(Brain) Copy constructor function is called" << std::endl;
	*this = src;
}

/* Destructor function of Brain class */
Brain::~Brain()
{
	std::cout << "(Brain) Destructor function is called" << std::endl;
}

/* Copy assignation operator function of Brain class */
Brain	&Brain::operator=(const Brain &src)
{
	for (int i = 0; i < IDEAS; ++i)
		this->setIdea(i, src.getIdea(i));
	return (*this);
}

/* Setter function for idea of Brain class */
void	Brain::setIdea(int i, const std::string &newIdea)
{
	if (i < 0 || i >= IDEAS)
		return ;
	this->_ideas[i] = newIdea;
}

/* Getter funcitno for idea of Brain class */
const std::string	&Brain::getIdea(int i) const
{
	if (i < 0 || i >= IDEAS)
		return (this->_ideas[0]);
	return (this->_ideas[i]);
}
