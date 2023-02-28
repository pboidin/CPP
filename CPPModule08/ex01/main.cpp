/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 20:02:13 by piboidin          #+#    #+#             */
/*   Updated: 2023/01/02 20:08:46 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

#define MAX_VAL 50000

int	main(void)
{
	std::cout << "Subject's tests" << std::endl;
	{	// Subject's tests
		Span	sp(5);

		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	std::cout << std::endl << "Massive tests with random values & SIZE = " << MAX_VAL << std::endl;
	{	// Massive tests
		Span	sp(MAX_VAL);
		srand(time(NULL));

		for (size_t i = 0; i < MAX_VAL; i++)
		{
			sp.addNumber(rand());
		}
		std::cout << "shortest span: " << sp.shortestSpan() << std::endl; 
		std::cout << "longest span: " << sp.longestSpan() << std::endl;
	}
	std::cout << std::endl << "Range insertion tests from an int array" << std::endl;
	{	// Range insertion tests
		Span	sp(10);
		int		tab[10] = {2147483647, -2147483648, 0, 999, -666, 1, 42, -21, 17, -9999};

		sp.addRange(tab, tab + 10);
		std::cout << sp << std::endl;
		std::cout << "shortest span: " << sp.shortestSpan() << std::endl; 
		std::cout << "longest span: " << sp.longestSpan() << std::endl;

	}
	std::cout << std::endl << "Exception tests" << std::endl;
	{
		Span	sp(1);

		try
		{
			sp.longestSpan();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		sp.addNumber(42);
		try
		{
			sp.shortestSpan();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		try
		{
			sp.addNumber(21);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}	
	}
	return (0);
}
