/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 12:20:21 by schuah            #+#    #+#             */
/*   Updated: 2022/08/22 14:34:35 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	public:
		/* Orthrodox canonical form */
		DiamondTrap();
		DiamondTrap(const std::string &name);
		DiamondTrap(const DiamondTrap &src);
		virtual				~DiamondTrap();
		DiamondTrap			&operator=(const DiamondTrap &src);

		/* Member functions */
		using ScavTrap::attack;
		std::string			&getName();
		unsigned int		getHp();
		unsigned int		getEp();
		unsigned int		getAd();
		void				whoAmI();
		
	private:
		std::string		_name;
		using FragTrap::_hp;
		using ScavTrap::_ep;
		using FragTrap::_ad;

};

#endif
