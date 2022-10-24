/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 10:48:21 by schuah            #+#    #+#             */
/*   Updated: 2022/08/19 12:46:49 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* Creates a new zombie using new and returns its pointer */
Zombie	*newZombie(std::string name)
{
	Zombie	*newZombie;
	
	newZombie = new Zombie;
	newZombie->set_name(name);
	return (newZombie);
}
