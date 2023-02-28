/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:52:23 by piboidin          #+#    #+#             */
/*   Updated: 2022/11/14 16:52:24 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    this->_value = 0;
}

Fixed::Fixed(const Fixed &f)
{
    *this = f;
}

Fixed::Fixed(const int in)
{
	this->_value = in << this->_bits;
}

Fixed::Fixed(const float in)
{
	this->_value = roundf(in * (1 << this->_bits));
}

Fixed::~Fixed()
{

}

Fixed	&Fixed::operator=(const Fixed &src)
{
	this->_value = src.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	return(this->_value);
}

void	Fixed::setRawBits(int const raw)
{
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

bool	Fixed::operator>(Fixed f) const
{
	return(this->toFloat() > f.toFloat());
}

bool	Fixed::operator<(Fixed f) const
{
	return(this->toFloat() < f.toFloat());
}

bool	Fixed::operator>=(Fixed f) const
{
	return(this->toFloat() >= f.toFloat());
}

bool	Fixed::operator<=(Fixed f) const
{
	return(this->toFloat() <= f.toFloat());
}

bool	Fixed::operator==(Fixed f) const
{
	return(this->toFloat() == f.toFloat());
}

bool	Fixed::operator!=(Fixed f) const
{
	return(this->toFloat() != f.toFloat());
}

float	Fixed::operator+(Fixed f) const
{
	return(this->toFloat() + f.toFloat());
}

float	Fixed::operator-(Fixed f) const
{
	return(this->toFloat() - f.toFloat());
}

float	Fixed::operator*(Fixed f) const
{
	return(this->toFloat() * f.toFloat());
}

float	Fixed::operator/(Fixed f) const
{
	return(this->toFloat() / f.toFloat());
}

Fixed	Fixed::operator++()
{
	this->_value++;
	return(*this);
}

Fixed	Fixed::operator--()
{
	this->_value--;
	return(*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp;

	tmp = *this;
	this->_value++;
	return(tmp);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp;

	tmp = *this;
	this->_value--;
	return(tmp);
}

Fixed	&Fixed::min(Fixed &v1, Fixed &v2)
{
	return(v1.toFloat() <= v2.toFloat() ? v1 : v2);
}

const Fixed	&Fixed::min(Fixed const &v1, Fixed const &v2)
{
	return(v1.toFloat() <= v2.toFloat() ? v1 : v2);
}

Fixed	&Fixed::max(Fixed &v1, Fixed &v2)
{
	return(v1.toFloat() >= v2.toFloat() ? v1 : v2);
}

const Fixed	&Fixed::max(Fixed const &v1, Fixed const &v2)
{
	return(v1.toFloat() >= v2.toFloat() ? v1 : v2);
}

std::ostream	&operator<<(std::ostream &out, const Fixed &src)
{
	out << src.toFloat();
	return (out);
}
