/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 15:29:34 by piboidin          #+#    #+#             */
/*   Updated: 2022/12/27 15:29:35 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/* Default constructor function of WrongCat */
WrongCat::WrongCat()
{
    std::cout << "WrongCat - Default Constructor function" << std::endl;
	this->_type = "WrongCat";
}

/* Copy contructori default of WrongCat */
WrongCat::WrongCat(const WrongCat &src)
{
	std::cout << "WrongCat - Copy Constructor function" << std::endl;
	*this = src;
}

/* Destructor function of WrongCat */
WrongCat::~WrongCat()
{
	std::cout << "WrongCat - Destructor function" << std::endl;
}

/* Surcharge d'opérateur */
WrongCat	&WrongCat::operator=(const WrongCat &src)
{
	this->_type = src._type;
	return(*this);
}

/* MakeSound Function, because default WrongCat don't make noise */
void	WrongCat::makeSound() const
{
	std::cout << "Cui Cui Cui Cui" << std::endl;
}
