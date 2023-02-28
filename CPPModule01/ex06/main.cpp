/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:44:42 by piboidin          #+#    #+#             */
/*   Updated: 2022/11/14 15:44:44 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	static std::string	list[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	std::string			input;
	Harl				harl;
	int					level;

	if (ac != 2)
	{
		std::cout << "./harlFilter [Warning Level]" << std::endl;
		return (0);
	}
	input = av[1];
	level = 4;
	for (int i = 0; i < 4; i++)
	{
		if (input == list[i])
		{
			level = i;
			break ;
		}
	}
	switch(level)
	{
		case 0:
			std::cout << "[ DEBUG ]" << std::endl;
			harl.complain(input);
			std::cout << std::endl;
			std::cout << "[ INFO ]" << std::endl;
			harl.complain("INFO");
			std::cout << std::endl;
			std::cout << "[ WARNING ]" << std::endl;
			harl.complain("WARNING");
			std::cout << std::endl;
			std::cout << "[ ERROR ]" << std::endl;
			harl.complain("ERROR");
			break;
		case 1:
			std::cout << "[ INFO ]" << std::endl;
			harl.complain(input);
			std::cout << std::endl;
			std::cout << "[ WARNING ]" << std::endl;
			harl.complain("WARNING");
			std::cout << std::endl;
			std::cout << "[ ERROR ]" << std::endl;
			harl.complain("ERROR");
			break;
		case 2:
			std::cout << "[ WARNING ]" << std::endl;
			harl.complain(input);
			std::cout << std::endl;
			std::cout << "[ ERROR ]" << std::endl;
			harl.complain("ERROR");
			break;
		case 3:
			std::cout << "[ ERROR ]" << std::endl;
			harl.complain(input);
			break ;
		case 4:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return (0);
}
