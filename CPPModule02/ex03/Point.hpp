/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:57:08 by piboidin          #+#    #+#             */
/*   Updated: 2022/11/14 16:57:09 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
	public:
		Point();
		Point(const float x, const float y);
		Point(const Point &p);
		~Point();

		Point		&operator=(const Point &p);

		const Fixed	&getX(void) const;
		const Fixed	&getY(void) const;

	private:
		const Fixed _x;
		const Fixed _y;
};

#endif
