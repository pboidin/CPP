/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 09:23:28 by schuah            #+#    #+#             */
/*   Updated: 2022/08/21 10:34:27 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
	public:
		/* Constructor and destructor functions */
		Point();
		Point(const float x, const float y);
		Point(const Point &src);
		~Point();

		/* Copy assignation operator function */
		Point		&operator=(const Point &src);

		/* Getter functions */
		const Fixed &getX(void) const;
		const Fixed &getY(void) const;
	private:
		const Fixed	_x;
		const Fixed	_y;
};

#endif
