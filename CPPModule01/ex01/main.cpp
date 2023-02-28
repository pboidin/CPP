/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:13:33 by piboidin          #+#    #+#             */
/*   Updated: 2022/11/14 15:13:35 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name);

int	main(int argc, char **argv)
{
	std::string	name;
	Zombie		*horde;

	if (argc > 2)
	{
		horde = zombieHorde(atoi(argv[1]), argv[2]);
		for (int i = 0; i < atoi(argv[1]); i++)
			horde[i].announce();
		delete[] horde;
	}
	else
	{
		std::cout << "Please enter in arguments:" << std::endl;
		std::cout << "./zombieHorde [Number Zombie] [Zombie Name]" << std::endl;
	}
	return (0);
}
