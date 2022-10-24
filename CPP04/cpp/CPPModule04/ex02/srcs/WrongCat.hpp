/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 13:47:06 by schuah            #+#    #+#             */
/*   Updated: 2022/08/27 13:47:36 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		/* Orthrodox canonical form */
		WrongCat();
		WrongCat(const WrongCat &src);
		virtual			~WrongCat();
		WrongCat		&operator=(const WrongCat &src);

		/* Member functions */
		virtual void	makeSound() const;
};

#endif
