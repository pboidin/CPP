/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 13:59:15 by schuah            #+#    #+#             */
/*   Updated: 2022/08/27 16:26:04 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	public:
		/* Orthrodox canonical form */
		Animal();
		Animal(const Animal &src);
		virtual			~Animal();
		Animal			&operator=(const Animal &src);

		/* Member functions */
		virtual void	makeSound() const = 0;
		std::string		getType() const;
	protected:
		std::string		_type;
};

#endif
