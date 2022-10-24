/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 13:28:25 by schuah            #+#    #+#             */
/*   Updated: 2022/08/27 13:36:31 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	public:
		/* Orthrodox canonical form */
		Cat();
		Cat(const Cat &src);
		virtual			~Cat();
		Cat				&operator=(const Cat &src);

		/* Member functions */
		virtual void	makeSound() const;
};

#endif
