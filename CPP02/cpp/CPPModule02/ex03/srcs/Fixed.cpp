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
	this->_number = 0;
}

/* Copy constructor function of Fixed class */
Fixed::Fixed(const Fixed &src)
{
	*this = src;
}

/* Constructor function for int input of Fixed class
** Converts int to fpn by multiplying it by 2^bits or 2^8 or 256 */
Fixed::Fixed(const int input)
{
	this->_number = input << this->_bits;
}

/* Constructor function for float input of Fixed class
** Converts float to fpn by multiplying it by 2^bits or 2^8 or 256
** Rounding the number after multiplying */
Fixed::Fixed(const float input)
{
	this->_number = std::roundf(input * (1 << this->_bits));
}

/* Destructor function of Fixed class */
Fixed::~Fixed()
{

}

/* Copy assignation operator function of Fixed class */
Fixed	&Fixed::operator=(const Fixed &src)
{
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

/* Comparison operator function (>) of Fixed class
** Returns true if lhs is bigger than src, else returns false */
bool	Fixed::operator>(Fixed src) const
{
	return (this->toFloat() > src.toFloat());
}

/* Comparison operator function (<) of Fixed class
** Returns true if lhs is smaller than src, else returns false */
bool	Fixed::operator<(Fixed src) const
{
	return (this->toFloat() < src.toFloat());
}

/* Comparison operator function (>=) of Fixed class
** Returns true if lhs is bigger than or equal to src, else returns false */
bool	Fixed::operator>=(Fixed src) const
{
	return (this->toFloat() >= src.toFloat());
}

/* Comparison operator function (>=) of Fixed class
** Returns true if lhs is smaller than or equal to src, else returns false */
bool	Fixed::operator<=(Fixed src) const
{
	return (this->toFloat() <= src.toFloat());
}

/* Comparison operator function (==) of Fixed class
** Returns true if lhs is equal to src, else returns false */
bool	Fixed::operator==(Fixed src) const
{
	return (this->toFloat() == src.toFloat());
}

/* Comparison operator function (!=) of Fixed class 
** Returns true if lhs is not equal to src, else returns false*/
bool	Fixed::operator!=(Fixed src) const
{
	return (this->toFloat() != src.toFloat());
}

/* Arithmetic operator function (+) of Fixed class */
float	Fixed::operator+(Fixed src) const
{
	return (this->toFloat() + src.toFloat());
}

/* Arithmetic operator function (-) of Fixed class */
float	Fixed::operator-(Fixed src) const
{
	return (this->toFloat() - src.toFloat());
}

/* Arithmetic operator function (*) of Fixed class */
float	Fixed::operator*(Fixed src) const
{
	return (this->toFloat() * src.toFloat());
}

/* Arithmetic operator function (/) of Fixed class */
float	Fixed::operator/(Fixed src) const
{
	return (this->toFloat() / src.toFloat());
}

/* Pre-increment operator function (++n) of Fixed class */
Fixed	Fixed::operator++()
{
	this->_number++;
	return (*this);
}

/* Pre-reduction operator function (--n) of Fixed class */
Fixed	Fixed::operator--()
{
	this->_number--;
	return (*this);
}

/* Post-increment operator function (n++) of Fixed class */
Fixed	Fixed::operator++(int)
{
	Fixed	temp;

	temp = *this;
	this->_number++;
	return (temp);
}

/* Post-reduction operator function (n--) of Fixed class */
Fixed	Fixed::operator--(int)
{
	Fixed	temp;

	temp = *this;
	this->_number--;
	return (temp);
}

/* Input: two references to fpn, returns a reference to the smallest one */
Fixed	&Fixed::min(Fixed &n1, Fixed &n2)
{
	return (n1.toFloat() <= n2.toFloat() ? n1 : n2);
}

/* Input: two references to constant fpn, returns a reference to the smallest one */
const Fixed	&Fixed::min(Fixed const &n1, Fixed const &n2)
{
	return (n1.toFloat() <= n2.toFloat() ? n1 : n2);
}

/* Input: two references to fpn, returns a reference to the biggest one */
Fixed	&Fixed::max(Fixed &n1, Fixed &n2)
{
	return (n1.toFloat() >= n2.toFloat() ? n1 : n2);
}

/* Input: two references to constant fpn, returns a reference to the biggest one */
const Fixed	&Fixed::max(Fixed const &n1, Fixed const &n2)
{
	return (n1.toFloat() >= n2.toFloat() ? n1 : n2);
}

/* Function when << operator is called
** Gets the number's float from the class and outputs it to output stream */
std::ostream	&operator<<(std::ostream &output, const Fixed &src)
{
	output << src.toFloat();
	return (output);
}
