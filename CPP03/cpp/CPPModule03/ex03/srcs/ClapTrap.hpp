/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 11:27:24 by schuah            #+#    #+#             */
/*   Updated: 2022/08/22 13:37:57 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_CPP
# define CLAPTRAP_CPP

# include <iostream>
# include <string>

class ClapTrap
{
	public:
		/* Orthrodox canonical form */
		ClapTrap();
		ClapTrap(const ClapTrap &src);
		ClapTrap(const std::string &name);
		virtual				~ClapTrap();
		ClapTrap			&operator=(const ClapTrap &src);
		
		/* Member functions */
		void				attack(const std::string &target);
		void				takeDamage(unsigned int amount);
		void				beRepaired(unsigned int amount);
		const std::string	&getName();
		unsigned int		getHp();
		unsigned int		getEp();
		unsigned int		getAd();
	protected:
		std::string			_name;
		unsigned int		_hp;
		unsigned int		_ep;
		unsigned int		_ad;
};

#endif
