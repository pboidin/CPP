/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:15:31 by piboidin          #+#    #+#             */
/*   Updated: 2022/11/14 15:15:33 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
    public:
        Weapon();
		Weapon(std::string weaponType);
        ~Weapon();
		std::string	getType(void);
		void		setType(std::string weaponType);
		void		attack(void);

    private:
        std::string	_weaponType;
};

#endif
