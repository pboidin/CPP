/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 15:29:41 by piboidin          #+#    #+#             */
/*   Updated: 2022/12/27 15:29:42 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
    	WrongCat();
		WrongCat(const WrongCat &src);
    	virtual			~WrongCat();
		WrongCat		&operator=(const WrongCat &src);

		virtual void    makeSound() const;
};

#endif
