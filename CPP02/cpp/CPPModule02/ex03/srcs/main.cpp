/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 10:12:14 by schuah            #+#    #+#             */
/*   Updated: 2022/09/07 19:26:24 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point);

int	main(void)
{
	{
		Point	a(0, 0);
		Point	b(10, 0);
		Point	c(0, 10);
		Point	point(3, 3);

		if (bsp(a, b, c, point) == true)
			std::cout << "True" << std::endl;
		else
			std::cout << "False" << std::endl;
	}
	{
		Point	a(-10, 0);
		Point	b(0, -10);
		Point	c(-10, -10);
		Point	point(-5, 5);

		if (bsp(a, b, c, point) == true)
			std::cout << "True" << std::endl;
		else
			std::cout << "False" << std::endl;
	}
	{
		Point	a(0, 0);
		Point	b(0, 0);
		Point	c(0, 0);
		Point	point(-5, 5);

		if (bsp(a, b, c, point) == true)
			std::cout << "True" << std::endl;
		else
			std::cout << "False" << std::endl;
	}
	{
		Point	a(-123, 123);
		Point	b(123, -123);
		Point	c(123, 123);
		Point	point(0, 0);

		if (bsp(a, b, c, point) == true)
			std::cout << "True" << std::endl;
		else
			std::cout << "False" << std::endl;
	}
	{
		Point	a(0, 0);
		Point	b(0, 0);
		Point	c(1, 1);
		Point	point(-1, 5);

		if (bsp(a, b, c, point) == true)
			std::cout << "True" << std::endl;
		else
			std::cout << "False" << std::endl;
	}
	return (0);
}
