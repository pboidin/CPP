/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:56:37 by piboidin          #+#    #+#             */
/*   Updated: 2022/11/14 16:56:38 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/* Area of a triangle: [Ax(By - Cy) + Bx(Cy - Ay) + Cx(Ay - By)] / 2, return absolute value */
static float	ft_area(Point const a, Point const b, Point const c)
{
	float	area;

	area = ((a.getX().toFloat() * (b.getY().toFloat() - c.getY().toFloat())) + (b.getX().toFloat() * (c.getY().toFloat() - a.getY().toFloat())) + (c.getX().toFloat() * (a.getY().toFloat() - b.getY().toFloat()))) / 2;
	return (area >= 0 ? area : (area * - 1));
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	float	t_abc, t_pab, t_pbc, t_pac;

	t_abc = ft_area(a, b, c);
	t_pab = ft_area(point, a, b);
	t_pac = ft_area(point, a, c);
	t_pbc = ft_area(point, b, c);
	if (a.getX() == 0 && a.getY() == 0 && b.getX() == 0 && b.getY() == 0 && c.getX() == 0 && c.getY() == 0 && (point.getX() != 0 || point.getY() != 0))
		return (false);
	return (t_pab + t_pac + t_pbc == t_abc ? true : false);
}
