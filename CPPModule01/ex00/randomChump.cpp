/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:12:40 by piboidin          #+#    #+#             */
/*   Updated: 2022/11/14 15:12:42 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* Function creates the zombie, baptized him & announce itself */
void	randomChump(std::string name)
{
	Zombie	newZombie;

	newZombie.baptized(name);
	newZombie.announce();
}
