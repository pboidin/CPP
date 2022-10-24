/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 17:07:54 by schuah            #+#    #+#             */
/*   Updated: 2022/08/29 11:09:06 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# define MAX_INV_SLOT 4
# include "ICharacter.hpp"

class Character : public ICharacter
{
	public:
		/* Orthrodox canonical form */
		Character();
		Character(const std::string &name);
		Character(const Character &src);
		virtual						~Character();
		Character					&operator=(const Character &src);
		/* Member functions */
		virtual const std::string	&getName() const;
		const AMateria				*getMateria(int i) const;
		virtual void				equip(AMateria *m);
		virtual void				unequip(int idx);
		virtual void				use(int idx, ICharacter &target);
	private:
		std::string	_name;
		AMateria 	*_inventory[MAX_INV_SLOT];
};

#endif
