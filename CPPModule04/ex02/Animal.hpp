/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 15:28:40 by piboidin          #+#    #+#             */
/*   Updated: 2022/12/27 15:28:41 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
	public:
    	Animal();
		Animal(const Animal &src);
    	virtual			~Animal();
		Animal			&operator=(const Animal &src);
		virtual	void	makeSound() const = 0;
		std::string		getType() const;

	protected:
		std::string		_type;
};

#endif
