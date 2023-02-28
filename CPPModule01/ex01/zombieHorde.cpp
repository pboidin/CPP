/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:13:45 by piboidin          #+#    #+#             */
/*   Updated: 2022/11/14 15:13:46 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*zombie;

	if (N < 0)
		return (NULL);
	zombie = new Zombie[N];
	while (0 < N--)
		zombie[N].baptized(name);
	return (zombie);
}
