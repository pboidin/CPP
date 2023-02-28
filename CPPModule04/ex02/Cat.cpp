/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 15:28:55 by piboidin          #+#    #+#             */
/*   Updated: 2022/12/27 15:28:56 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/* Default constructor function of Cat */
Cat::Cat()
{
    std::cout << "Cat - Default Constructor function" << std::endl;
	this->_type = "Cat";
	try
	{
		this->brain = new Brain();
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		throw(e);
	}
}

/* Copy contructori default of Cat */
Cat::Cat(const Cat &src)
{
	std::cout << "Cat - Copy Constructor function" << std::endl;
	try
	{
		brain = new Brain();
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		throw (e);
	}
	*this = src;
}

/* Destructor function of Cat */
Cat::~Cat()
{
	std::cout << "Cat - Destructor function" << std::endl;
	delete (this->brain);
}

/* Surcharge d'opérateur */
Cat	&Cat::operator=(const Cat &src)
{
	this->_type = src._type;
	*this->brain = *(src.brain);
	return(*this);
}

/* MakeSound Function, because default Cat don't make noise */
void	Cat::makeSound() const
{
	std::cout << "Miaou Miaou" << std::endl;
}

/* Function for set the Brain's Idea */
void	Cat::setBrainIdea(int i, const std::string &newIdea)
{
	return (this->brain->setIdea(i, newIdea));
}

/* Function for get the Brain's Idea */
const std::string	&Cat::getBrainIdea(int i) const
{
	return (this->brain->getIdea(i));
}
