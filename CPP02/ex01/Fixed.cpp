/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:46:49 by piboidin          #+#    #+#             */
/*   Updated: 2022/11/14 16:46:50 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
    this->_value = 0;
}

Fixed::Fixed(const Fixed &f)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = f;
}

Fixed::Fixed(const int in)
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = in << this->_bits;
}

Fixed::Fixed(const float in)
{
	std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(in * (1 << this->_bits));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_value = src.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	return(this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function" << std::endl;
	this->_value = raw;
}

float	Fixed::toFloat(void) const
{
	return((float)this->_value / (float)(1 << this ->_bits));
}

int		Fixed::toInt(void) const
{
	return(this->_value >> this->_bits);
}

std::ostream	&operator<<(std::ostream &out, const Fixed &src)
{
	out << src.toFloat();
	return (out);
}
