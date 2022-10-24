/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 20:09:19 by schuah            #+#    #+#             */
/*   Updated: 2022/08/27 20:10:04 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		/* Orthrodox canonical form */
		Ice();
		Ice(std::string const &type);
		Ice(const Ice &src);
		virtual				~Ice();
		virtual Ice			&operator=(const Ice &src);

		/* Member functions */
		virtual	AMateria	*clone() const;
		virtual	void		use(ICharacter &target);
	protected:
		std::string			_type;
};

#endif
