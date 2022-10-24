/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 12:05:33 by schuah            #+#    #+#             */
/*   Updated: 2022/08/20 12:27:45 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

/* Main function to showcase switch. By finding out which level is needed based
** on the user input, switch statement will call from that level to the bottom
** until either the switch loop is broken or called finished */
int	main(int ac, char **av)
{
	static std::string	level_list[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	std::string			level_input;
	Harl				harl;
	int					level;

	if (ac != 2)
	{
		std::cout << "./harlFilter [Warning Level]" << std::endl;
		return (0);
	}
	level_input = av[1];
	level = 4;
	for (int i = 0; i < 4; i++)
	{
		if (level_input == level_list[i])
		{
			level = i;
			break ;
		}
	}
	switch(level)
	{
		case 0:
			std::cout << "[ DEBUG ]" << std::endl;
			harl.complain(level_input);
			std::cout << std::endl;
		case 1:
			std::cout << "[ INFO ]" << std::endl;
			harl.complain(level_input);
			std::cout << std::endl;
		case 2:
			std::cout << "[ WARNING ]" << std::endl;
			harl.complain(level_input);
			std::cout << std::endl;
		case 3:
			std::cout << "[ ERROR ]" << std::endl;
			harl.complain(level_input);
			std::cout << std::endl;
			break ;
		case 4:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return (0);
}
