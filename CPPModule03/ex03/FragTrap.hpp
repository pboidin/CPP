/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 13:07:03 by piboidin          #+#    #+#             */
/*   Updated: 2022/12/21 13:07:04 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(const std::string &name);
		FragTrap(const FragTrap &src);
		virtual		~FragTrap();
		FragTrap	&operator=(const FragTrap &src);

		void		attack(const std::string &tar);
		void		highFivesGuys();
	
	protected:
		unsigned int	_hp;
		unsigned int	_ep;
		unsigned int	_ad;
};

#endif
