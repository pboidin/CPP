/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 15:24:59 by piboidin          #+#    #+#             */
/*   Updated: 2022/12/27 15:25:00 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/* Default constructor function of WrongAnimal */
WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal - Default Constructor function" << std::endl;
	this->_type = "WrongAnimal";
}

/* Copy contructori default of WrongAnimal */
WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
	std::cout << "WrongAnimal - Copy Constructor function" << std::endl;
	*this = src;
}

/* Destructor function of WrongAnimal */
WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal - Destructor function" << std::endl;
}

/* Surcharge d'opérateur */
WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &src)
{
	this->_type = src._type;
	return(*this);
}

/* MakeSound Function, because default WrongAnimal don't make noise */
void	WrongAnimal::makeSound() const
{
	std::cout << "Default WrongAnimal don't make noise" << std::endl;
}

/* Function to get the type of the WrongAnimal */
std::string	WrongAnimal::getType() const
{
	return(this->_type);
}

void    WrongAnimal::setType(std::string name)
{
    this->_type = name;
}
