/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 15:24:40 by piboidin          #+#    #+#             */
/*   Updated: 2022/12/27 15:24:41 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/* Default constructor function of Dog */
Dog::Dog()
{
    std::cout << "Dog - Default Constructor function" << std::endl;
	this->_type = "Dog";
}

/* Copy contructori default of Dog */
Dog::Dog(const Dog &src)
{
	std::cout << "Dog - Copy Constructor function" << std::endl;
	*this = src;
}

/* Destructor function of Dog */
Dog::~Dog()
{
	std::cout << "Dog - Destructor function" << std::endl;
}

/* Surcharge d'opérateur */
Dog	&Dog::operator=(const Dog &src)
{
	this->_type = src._type;
	return(*this);
}

/* MakeSound Function, because default Dog don't make noise */
void	Dog::makeSound() const
{
	std::cout << "Woof Woof" << std::endl;
}
