/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 15:30:35 by piboidin          #+#    #+#             */
/*   Updated: 2022/12/27 15:30:36 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_CPP
# define CHARACTER_CPP

# define MAX_INV 4
# include "ICharacter.hpp"

class Character : public ICharacter
{
    private:
        std::string	_name;
		AMateria	*_inventory[MAX_INV];
    public:
        Character();
		Character(const std::string &name);
		Character(const Character &src);
        virtual						~Character();
		Character					&operator=(const Character &src);
		virtual const std::string	&getName() const;
		const AMateria				*getMateria(int i) const;
		virtual void				equip(AMateria *m);
		virtual void				unequip(int idx);
		virtual void				use(int idx, ICharacter &target);
};

#endif
