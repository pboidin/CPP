/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 19:45:27 by piboidin          #+#    #+#             */
/*   Updated: 2023/01/02 19:45:28 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Base	*generate(void)
{
	int	n;

	srand(time(NULL));
	n = rand() % 3;
	if (n == 0)
		return (dynamic_cast<Base *>(new A));
	if (n == 1)
		return (dynamic_cast<Base *>(new B));
	return (dynamic_cast<Base *>(new C));
}

void	identify(Base *p)
{
	if (dynamic_cast<A *>(p) != NULL)
		std::cout << "A" << std::endl;
	if (dynamic_cast<B *>(p) != NULL)
		std::cout << "B" << std::endl;
	if (dynamic_cast<C *>(p) != NULL)
		std::cout << "C" << std::endl;
}

void	identify(Base &p)
{
	try
	{
		A & tmp = dynamic_cast<A &>(p);
		(void) tmp;
		std::cout << "A" << std::endl;
		return ;
	}
	catch (std::exception &e)
	{
	}
	try
	{
		B & tmp = dynamic_cast<B &>(p);
		(void) tmp;
		std::cout << "B" << std::endl;
		return ;
	}
	catch (std::exception &e)
	{
	}
	try
	{
		C & tmp = dynamic_cast<C &>(p);
		(void) tmp;
		std::cout << "C" << std::endl;
		return ;
	}
	catch (std::exception &e)
	{
	}
}

int	main(void)
{
	std::cout << "\n------ RANDOM TEST ------\n" << std::endl;
	Base	*random = generate();

	identify(random);
	identify(*random);

	delete random;
	return (0);
}
