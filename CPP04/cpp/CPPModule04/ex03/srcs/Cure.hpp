/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 20:04:45 by schuah            #+#    #+#             */
/*   Updated: 2022/08/27 20:10:08 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		/* Orthrodox canonical form */
		Cure();
		Cure(std::string const &type);
		Cure(const Cure &src);
		virtual				~Cure();
		virtual Cure		&operator=(const Cure &src);

		/* Member functions */
		virtual	AMateria	*clone() const;
		virtual	void		use(ICharacter &target);
	protected:
		std::string			_type;
};

#endif
