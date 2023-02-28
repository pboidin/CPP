/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:57:02 by piboidin          #+#    #+#             */
/*   Updated: 2022/11/14 16:57:03 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): _x(0), _y(0)
{

}

Point::Point(const float x, const float y): _x(x), _y(y)
{

}

Point::Point(const Point &p): _x(p.getX()), _y(p.getY())
{

}

Point::~Point()
{

}

const Fixed	&Point::getX(void) const
{
    return (this->_x);
}

const Fixed	&Point::getY(void) const
{
    return (this->_y);
}

Point   &Point::operator=(const Point &p)
{
    if (this == &p)
        return (*this);
    return (*this);
}
