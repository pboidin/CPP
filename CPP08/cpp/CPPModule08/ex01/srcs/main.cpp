/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 13:32:32 by schuah            #+#    #+#             */
/*   Updated: 2022/09/29 15:24:49 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void)
{
	{
		std::cout << "\n---------- EX01 Main Test ----------\n" << std::endl;
		Span	sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{
		std::cout << "\n---------- EX01 First ShortLong Test ----------\n" << std::endl;
		Span	sp = Span(4);

		sp.addNumber(-2);
		sp.addNumber(-1);
		sp.addNumber(2147483647);
		sp.addNumber(-2147483648);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{
		std::cout << "\n---------- EX01 Second ShortLong Test ----------\n" << std::endl;
		Span	sp = Span(2);

		sp.addNumber(0);
		sp.addNumber(0);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
    {
		std::cout << "\n---------- EX01 First Error Test ----------\n" << std::endl;
        Span sp = Span(1);

        try
        {
			sp.addNumber(1);
            sp.addNumber(1);
			std::cout << "No Error" << std::endl;
        }
        catch(const std::exception& e)
        {
			std::cerr << e.what() << std::endl;
        }
		try
        {
			sp.shortestSpan();
			std::cout << "No Error" << std::endl;
        }
        catch(const std::exception& e)
        {
			std::cerr << e.what() << std::endl;
        }
		try
        {
			sp.longestSpan();
			std::cout << "No Error" << std::endl;
        }
        catch(const std::exception& e)
        {
			std::cerr << e.what() << std::endl;
        }
    }
	{
		std::cout << "\n---------- EX01 First RangeFill Test ----------\n" << std::endl;
		Span	sp = Span(5);

		try
		{
			sp.addNumber(69);
			sp.addNumber(10);
			std::vector<int> vec(3, 3);
			sp.addNumber(vec.begin(), vec.end());
			std::cout << "No Error" << std::endl;
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		std::cout << "\n---------- EX01 Second RangeFill Test ----------\n" << std::endl;
		Span	sp = Span(10000);
		std::vector<int> vec(9999, 0);

		try
		{
			sp.addNumber(10);
			sp.addNumber(vec.begin(), vec.end());
			std::cout << "No Error" << std::endl;
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	return (0);
}
