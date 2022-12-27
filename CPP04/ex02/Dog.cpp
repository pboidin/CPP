/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 15:29:06 by piboidin          #+#    #+#             */
/*   Updated: 2022/12/27 15:29:07 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/* Default constructor function of Dog */
Dog::Dog()
{
    std::cout << "Dog - Default Constructor function" << std::endl;
	this->_type = "Dog";
	try
	{
		this->brain = new Brain();
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		throw (e);
	}
}

/* Copy contructor default of Dog */
Dog::Dog(const Dog &src)
{
	std::cout << "Dog - Copy Constructor function" << std::endl;
	try
	{
		this->brain = new Brain();
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		throw (e);
	}
	*this = src;
}

/* Destructor function of Dog */
Dog::~Dog()
{
	std::cout << "Dog - Destructor function" << std::endl;
	delete (this->brain);
}

/* Surcharge d'opérateur */
Dog	&Dog::operator=(const Dog &src)
{
	this->_type = src._type;
	*this->brain = *(src.brain);
	return(*this);
}

/* MakeSound Function, because default Dog don't make noise */
void	Dog::makeSound() const
{
	std::cout << "Woof Woof" << std::endl;
}

/* Function for set the Brain's Idea */

void	Dog::setBrainIdea(int i, const std::string &newIdea)
{
	return (this->brain->setIdea(i, newIdea));
}

/* Function for get the Brain's Idea */
const std::string	&Dog::getBrainIdea(int i) const
{
	return (this->brain->getIdea(i));
}
