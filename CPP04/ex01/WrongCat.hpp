/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 15:26:54 by piboidin          #+#    #+#             */
/*   Updated: 2022/12/27 15:26:55 by piboidin         ###   ########.fr       */
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
