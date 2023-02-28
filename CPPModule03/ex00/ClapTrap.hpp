/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 12:58:48 by piboidin          #+#    #+#             */
/*   Updated: 2022/12/21 12:58:50 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
    public:
        ClapTrap();
		ClapTrap(const ClapTrap &src);
        ~ClapTrap();
		ClapTrap 			&operator=(const ClapTrap &src);

		void				attack(const std::string& target);
		void				takeDamage(unsigned int amount);
		void				beRepaired(unsigned int amount);
		const std::string	&getName();
		unsigned int		getHp();
		unsigned int		getEp();
		unsigned int		getAd();
    
    private:
        std::string		_name;
		unsigned int	_hp;
		unsigned int	_ep;
		unsigned int	_ad;
};

#endif
