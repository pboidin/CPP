/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 10:43:37 by schuah            #+#    #+#             */
/*   Updated: 2022/09/02 11:45:53 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int	main(void)
{
	{
		int a = 2;
		int b = 3;

		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}	
	{
		int		a = 6;
		int		b = 42;
		float	c = 24;
		float	d = 9;

		std::cout << "\n---------- EX00 Swap Test ----------\n" << std::endl;
		std::cout << "a: " << a << "\tb: " << b << std::endl;
		swap(a, b);
		std::cout << "a: " << a << "\tb: " << b << std::endl;
		swap(a, b);
		std::cout << "a: " << a << "\tb: " << b << std::endl;
		std::cout << "c: " << c << "\td: " << d << std::endl;
		swap(c, d);
		std::cout << "c: " << c << "\td: " << d << std::endl;
		swap(c, d);
		std::cout << "c: " << c << "\td: " << d << std::endl;
		std::cout << "\n---------- EX00 Min Test ----------\n" << std::endl;
		std::cout << "Min between a and b: " << min(a, b) << std::endl;
		std::cout << "Min between c and d: " << min(c, d) << std::endl;
		std::cout << "Min between a and a: " << min(a, a) << std::endl;
		std::cout << "\n---------- EX00 Max Test ----------\n" << std::endl;
		std::cout << "Max between a and b: " << max(a, b) << std::endl;
		std::cout << "Max between c and d: " << max(c, d) << std::endl;
		std::cout << "Max between a and a: " << max(a, a) << std::endl;
	}
	return (0);
}
