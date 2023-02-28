/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 15:30:54 by piboidin          #+#    #+#             */
/*   Updated: 2022/12/27 15:30:55 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class Ice : public AMateria
{
	private:
		std::string			_type;
	public:
		Ice();
		Ice(std::string const &type);
		Ice(const Ice &src);
		virtual				~Ice();
		virtual Ice			&operator=(const Ice &src);
		virtual AMateria	*clone() const;
		virtual void		use(ICharacter &target);
};

#endif
