/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 13:45:26 by schuah            #+#    #+#             */
/*   Updated: 2022/08/27 14:01:28 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
	public:
		/* Orthrodox canonical form */
		WrongAnimal();
		WrongAnimal(const WrongAnimal &src);
		virtual			~WrongAnimal();
		WrongAnimal		&operator=(const WrongAnimal &src);

		/* Member functions */
		void			makeSound() const;
		std::string		getType() const;
		void			setType(const std::string name);
	protected:
		std::string		_type;
};

#endif
