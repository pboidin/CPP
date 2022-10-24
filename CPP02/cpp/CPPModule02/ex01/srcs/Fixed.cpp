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

/* Constructor function for int input of Fixed class
** Converts int to fpn by multiplying it by 2^bits or 2^8 or 256 */
Fixed::Fixed(const int input)
{
	std::cout << "Int constructor called" << std::endl;
	this->_number = input << this->_bits;
}

/* Constructor function for float input of Fixed class
** Converts float to fpn by multiplying it by 2^bits or 2^8 or 256
** Rounding the number after multiplying */
Fixed::Fixed(const float input)
{
	std::cout << "Float constructor called" << std::endl;
	this->_number = std::roundf(input * (1 << this->_bits));
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

/* Getter function for integer of the Fixed class */
int	Fixed::getRawBits(void) const
{
	return (this->_number);
}

/* Setter function for integer of the Fixed class */
void	Fixed::setRawBits(const int input)
{
	this->_number = input;
}

/* Converts fpn to float by dividing it by 2^bits or 2^8 or 256 */
float	Fixed::toFloat(void) const
{
	return ((float)this->_number / (float)(1 << this->_bits));
}

/* Converts fpn to int by diving it by 2^bits or 2^8 or 256 */
int		Fixed::toInt(void) const
{
	return (this->_number >> this->_bits);
}

/* Function when << operator is called
** Gets the number's float from the class and outputs it to output stream */
std::ostream	&operator<<(std::ostream &output, const Fixed &src)
{
	output << src.toFloat();
	return (output);
}
