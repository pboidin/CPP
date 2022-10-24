/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 13:59:11 by schuah            #+#    #+#             */
/*   Updated: 2022/08/29 15:32:58 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/* Default constructor function of Animal class */
Animal::Animal()
{
	std::cout << "(Animal) Default constructor function is called" << std::endl;
	this->_type = "Animal";
}

/* Copy constructor function of Animal class */
Animal::Animal(const Animal &src)
{
	std::cout << "(Animal) Copy constructor function is called" << std::endl;
	*this = src;
}

/* Destructor function of Animal class */
Animal::~Animal()
{
	std::cout << "(Animal) Destructor function is called" << std::endl;
}

/* Copy assignation operator function of Animal class */
Animal	&Animal::operator=(const Animal &src)
{
	this->_type = src._type;
	return (*this);
}

/* MakeSound function of Animal class, default animal does not make any sounds */
void	Animal::makeSound() const
{
	std::cout << "(Animal) Default animal does not make sounds" << std::endl;
}

/* Getter function for type of Animal class */
std::string	Animal::getType() const
{
	return (this->_type);
}
