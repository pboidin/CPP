/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 13:09:35 by schuah            #+#    #+#             */
/*   Updated: 2022/08/30 19:07:38 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* Default constructor function of Fixed class */
Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_number = 0;
}

/* Copy constructor function of Fixed class */
Fixed::Fixed(const Fixed &a)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = a;
}

/* Destructor function of Fixed class */
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

/* Copy assignation operator function of Fixed class */
Fixed	&Fixed::operator=(const Fixed &src)
{
	std::cout << "Copy assignation operator called" << std::endl;
	this->_number = src.getRawBits();
	return (*this);
}

/* Getter function for number of the Fixed class */
int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_number);
}

/* Setter function for integer of the Fixed class */
void	Fixed::setRawBits(const int input)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_number = input;
}
