/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 15:29:29 by piboidin          #+#    #+#             */
/*   Updated: 2022/12/27 15:29:30 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_CPP
# define WRONGANIMAL_CPP

#include <iostream>
#include <string>

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &src);
		virtual		~WrongAnimal();
		WrongAnimal	&operator=(const WrongAnimal &src);

		void		makeSound() const;
		std::string	getType() const;
		void		setType(const std::string name);
	
	protected:
		std::string	_type;
};

#endif
