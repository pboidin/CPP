/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 12:43:16 by schuah            #+#    #+#             */
/*   Updated: 2022/08/19 14:25:28 by schuah           ###   ########.fr       */
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
		void		attack(void);
		void		setType(std::string weaponType);
		std::string	getType(void);
	private:
		std::string	_weaponType;
};

#endif
