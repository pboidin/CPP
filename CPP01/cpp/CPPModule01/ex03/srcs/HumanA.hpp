/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 12:37:09 by schuah            #+#    #+#             */
/*   Updated: 2022/08/19 14:28:42 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanA
{
	public:
		HumanA(std::string name, Weapon &weaponType);
		~HumanA();
		void	attack();
	private:
		std::string	_name;
		Weapon		&_weaponType;
};

#endif
