/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 09:31:55 by schuah            #+#    #+#             */
/*   Updated: 2022/08/21 10:34:22 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/* Default constructor function of Point class */
Point::Point(): _x(0), _y(0)
{

}

/* Constructor function for const float input of Point class */
Point::Point(const float x, const float y): _x(x), _y(y)
{
	
}

/* Copy constructor function of Point class */
Point::Point(const Point& src): _x(src.getX()), _y(src.getY())
{
	
}

/* Desturctor function of Point class */
Point::~Point()
{
	
}

/* Getter function for x of Point class */
const Fixed	&Point::getX(void) const
{
	return (this->_x);
}

/* Getter function for y of Point class */
const Fixed &Point::getY(void) const
{
	return (this->_y);
}

/* Assignation operator function of Point class */
Point	&Point::operator=(const Point &src)
{
	if (this == &src)
		return *this;
	return *this;
}
