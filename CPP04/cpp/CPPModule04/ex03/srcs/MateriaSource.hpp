/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 20:24:57 by schuah            #+#    #+#             */
/*   Updated: 2022/08/27 20:51:43 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include <string>
# include "IMateriaSource.hpp"
# include "Character.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		/* Orthrodox canonical form */
		MateriaSource();
		MateriaSource(const MateriaSource &src);
		virtual				~MateriaSource();
		MateriaSource		&operator=(const MateriaSource &src);

		/* Member functions */
		const AMateria		*getMateria(int i) const;
		virtual void		learnMateria(AMateria *materia);
		virtual AMateria	*createMateria(std::string const &type);
	private:
		AMateria	*_inventory[MAX_INV_SLOT];
};

#endif
