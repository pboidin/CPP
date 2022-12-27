/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 15:31:41 by piboidin          #+#    #+#             */
/*   Updated: 2022/12/27 15:31:42 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIALSOURCE_HPP
# define MATERIALSOURCE_HPP

# include <iostream>
# include <string>
# include "IMateriaSource.hpp"
# include "Character.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria    *_inventory[MAX_INV];
    public:
    	MateriaSource();
		MateriaSource(const MateriaSource &src);
    	virtual				~MateriaSource();
		MateriaSource		&operator=(const MateriaSource &src);
		const AMateria		*getMateria(int i) const;
		virtual void		learnMateria(AMateria *materia);
		virtual AMateria	*createMateria(std::string const &type);
};

#endif
