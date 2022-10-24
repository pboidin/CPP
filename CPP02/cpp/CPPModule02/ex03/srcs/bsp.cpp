/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 09:46:10 by schuah            #+#    #+#             */
/*   Updated: 2022/09/07 19:25:35 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/* Area of a triangle: [Ax(By - Cy) + Bx(Cy - Ay) + Cx(Ay - By)] / 2
** Return absolute value because area cannot be <= 0 */
static float get_area(Point const a, Point const b, Point const c)
{
	float	area;

	area = ((a.getX().toFloat() * (b.getY().toFloat() - c.getY().toFloat()))
			+ (b.getX().toFloat() * (c.getY().toFloat() - a.getY().toFloat()))
			+ (c.getX().toFloat() * (a.getY().toFloat() - b.getY().toFloat()))) / 2;
	return (area >= 0 ? area : (area * -1));
}

/* Returns true if area of PAB, PBC and PAC is equal to ABC
** Returns flase if area of PAB, PBC and PAC are 0 and point is not at 0, 0 */
bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	float	t_abc, t_pab, t_pbc, t_pac;

	t_abc = get_area(a, b, c);
	t_pab = get_area(point, a, b);
	t_pbc = get_area(point, b, c);
	t_pac = get_area(point, a, c);
	if (a.getX() == 0 && a.getY() == 0 && b.getX() == 0 && b.getY() == 0
		&& c.getX() == 0 && c.getY() == 0 && (point.getX() != 0 || point.getY() != 0))
			return (false);
	return (t_pab + t_pbc + t_pac == t_abc ? true : false);
}
