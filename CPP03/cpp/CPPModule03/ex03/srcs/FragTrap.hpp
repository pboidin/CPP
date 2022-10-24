/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 13:19:47 by schuah            #+#    #+#             */
/*   Updated: 2022/08/22 14:42:49 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		/* Orthrodox canonical form */
		FragTrap();
		FragTrap(const std::string &name);
		FragTrap(const FragTrap &src);
		virtual			~FragTrap();
		FragTrap		&operator=(const FragTrap &src);
		
		/* Member functions */
		void			attack(const std::string &target);
		void			highFivesGuys();

	protected:
		unsigned int	_hp;
		unsigned int	_ep;
		unsigned int	_ad;
};

#endif
