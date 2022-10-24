/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 11:22:16 by schuah            #+#    #+#             */
/*   Updated: 2022/08/20 12:07:28 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

/* Constructor function of the Harl class */
Harl::Harl()
{

}

/* Destructor function of the Harl class */
Harl::~Harl()
{
	
}

/* Debug function */
void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-\
pickle-specialketchup burger. I really do!" << std::endl;
}

/* Info function */
void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You \
didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!";
	std::cout << std::endl;
}

/* Warning function */
void	Harl::warning(void)
{
	std::cout <<  "I think I deserve to have some extra bacon for free. I’ve \
been coming for years whereas you started working here since last month.";
	std::cout << std::endl;
}

/* Error function */
void	Harl::error(void)
{
	std::cout <<  "This is unacceptable! I want to speak to the manager now.";
	std::cout << std::endl;
}

/* Calles respective function using pointers */
void	Harl::complain(std::string level)
{
	static std::string	level_list[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	static void			(Harl::*function_list[4])(void)
		= {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	void				(Harl::*selected)(void) = NULL;

	for(int i = 0; i < 4; i++)
	{
		if (level == level_list[i])
		{
			selected = function_list[i];
			break ;
		}
	}
	if (selected != NULL)
		(this->*selected)();
}
