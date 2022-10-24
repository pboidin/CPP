/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 13:46:07 by schuah            #+#    #+#             */
/*   Updated: 2022/08/29 15:32:58 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/* Default constructor function of WrongAnimal class */
WrongAnimal::WrongAnimal()
{
	std::cout << "(WrongAnimal) Default constructor function is called" << std::endl;
	this->_type = "WrongAnimal";
}

/* Copy constructor function of WrongAnimal class */
WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
	std::cout << "(WrongAnimal) Copy constructor function is called" << std::endl;
	*this = src;
}

/* Destructor function of WrongAnimal class */
WrongAnimal::~WrongAnimal()
{
	std::cout << "(WrongAnimal) Destructor function is called" << std::endl;
}

/* Copy assignation operator function of WrongAnimal class */
WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &src)
{
	this->_type = src._type;
	return (*this);
}

/* MakeSound function of WrongAnimal class, default WrongAnimal does not make any sounds */
void	WrongAnimal::makeSound() const
{
	std::cout << "(WrongAnimal) Default WrongAnimal does not make sounds" << std::endl;
}

void	WrongAnimal::setType(std::string name)
{
	this->_type = name;
}

/* Getter function for type of WrongAnimal class */
std::string	WrongAnimal::getType() const
{
	return (this->_type);
}
