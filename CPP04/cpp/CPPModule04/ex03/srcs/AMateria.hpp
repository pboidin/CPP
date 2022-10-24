/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 17:54:18 by schuah            #+#    #+#             */
/*   Updated: 2022/08/27 20:52:56 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	public:
		/* Orthrodox canonical form */
		AMateria();
		AMateria(const AMateria &src);
		AMateria(std::string const &type);
		virtual				~AMateria();
		virtual AMateria	&operator=(const AMateria &src);

		/* Member functions */
		const std::string	&getType() const;
		virtual AMateria	*clone() const = 0;
		virtual void		use(ICharacter &target);
	protected:
		std::string 		_type;
};

#endif
