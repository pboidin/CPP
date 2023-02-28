/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:12:30 by piboidin          #+#    #+#             */
/*   Updated: 2022/11/14 15:12:31 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* Creates a new zombie using new and returns its pointer */
Zombie	*newZombie(std::string name)
{
    Zombie	*newZombie;

	newZombie = new Zombie;
	newZombie->baptized(name);
	return (newZombie);
}
