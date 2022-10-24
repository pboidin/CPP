/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 13:33:53 by schuah            #+#    #+#             */
/*   Updated: 2022/08/27 15:13:43 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	public:
		/* Orthrodox canonical form */
		Dog();
		Dog(const Dog &src);
		virtual				~Dog();
		Dog					&operator=(const Dog &src);

		/* Member functions */
		virtual void		makeSound() const;
		void				setBrainIdea(int i, const std::string &newIdea);
		const std::string	&getBrainIdea(int i) const;
	private:
		Brain				*brain;
};

#endif
