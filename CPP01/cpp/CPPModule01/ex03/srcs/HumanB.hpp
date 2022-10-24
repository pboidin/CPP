/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 13:05:15 by schuah            #+#    #+#             */
/*   Updated: 2022/08/19 14:46:06 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanB
{
	public:
		HumanB(std::string name);
		~HumanB();
		void	setWeapon(Weapon &weaponType);
		void	attack();
	private:
		std::string	_name;
		Weapon		*_weaponType;
};

#endif
