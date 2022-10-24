/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 13:19:47 by schuah            #+#    #+#             */
/*   Updated: 2022/08/22 13:46:55 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		/* Orthrodox canonical form */
		ScavTrap();
		ScavTrap(const std::string &name);
		ScavTrap(const ScavTrap &src);
		virtual			~ScavTrap();
		ScavTrap		&operator=(const ScavTrap &src);
		
		/* Member functions */
		void			attack(const std::string &target);
		void			guardGate();
	protected:
		unsigned int	_hp;
		unsigned int	_ep;
		unsigned int	_ad;
};

#endif
