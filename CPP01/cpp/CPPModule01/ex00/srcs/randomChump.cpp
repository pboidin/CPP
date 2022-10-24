/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 10:46:33 by schuah            #+#    #+#             */
/*   Updated: 2022/08/19 12:47:11 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* Creates a new zombie, setting its name and announces itself */
void	randomChump(std::string name)
{
	Zombie newZombie;

	newZombie.set_name(name);
	newZombie.announce();
}
