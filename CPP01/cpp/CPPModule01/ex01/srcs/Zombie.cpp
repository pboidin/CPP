/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 10:38:27 by schuah            #+#    #+#             */
/*   Updated: 2022/08/19 12:48:51 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* Constructor function for the Zombie class */
Zombie::Zombie()
{
	std::cout << "A new zombie have spawned" << std::endl;
}

/* Destructor function for the Zombie class */
Zombie::~Zombie(void)
{
	std::cout << _name << " has despawned" << std::endl;
}

/* A function that annouce its own name */
void	Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

/* A setter function for the class's name */
void	Zombie::set_name(std::string name)
{
	this->_name = name;
	std::cout << "Zombie's name has been set to: " << name << "!" << std::endl;
}

/* A getter function for the class's name */
std::string	Zombie::get_name(void)
{
	return (this->_name);
}
