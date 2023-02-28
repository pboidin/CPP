/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:12:08 by piboidin          #+#    #+#             */
/*   Updated: 2022/11/14 15:12:21 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

int	main(void)
{
	Zombie	fooZombie;
	Zombie	*zombie;

	fooZombie.baptized("Foo");
	fooZombie.announce();
	zombie = newZombie("New Zombie");
	zombie->announce();
	randomChump("Random");
	delete zombie;
	return (0);
}
