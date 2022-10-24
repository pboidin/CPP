/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 11:15:32 by schuah            #+#    #+#             */
/*   Updated: 2022/08/19 12:50:30 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* A zombie horde spawner that allocates N number of zombies all at once
** and sets their name using a while loop */
Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*zombie;

	if (N < 0)
		return (NULL);
	zombie = new Zombie[N];
	while (N-- > 0)
		zombie[N].set_name(name);
	return (zombie);
}
