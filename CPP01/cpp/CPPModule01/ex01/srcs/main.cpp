/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 11:16:45 by schuah            #+#    #+#             */
/*   Updated: 2022/08/19 12:49:32 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <stdlib.h>
#include <iostream>

Zombie	*zombieHorde(int N, std::string name);

/* A simple main function to show how the code runs following the rules given */
int	main(int ac, char **av)
{
	Zombie		*horde;
	std::string	name;
	
	if (ac > 2)
	{
		horde = zombieHorde(atoi(av[1]), av[2]);
		for (int i = 0; i < atoi(av[1]); i++)
			horde[i].announce();
		delete[] horde;
	}
	else
		std::cout << "./zombieHorde [N Zombies] [Zombie name]" << std::endl;
	return (0);
}
