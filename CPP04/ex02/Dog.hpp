/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 15:29:12 by piboidin          #+#    #+#             */
/*   Updated: 2022/12/27 15:29:13 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain				*brain;
	public:
		Dog();
        Dog(const Dog &src);
		virtual				~Dog();
        Dog					&operator=(const Dog &src);

        virtual void		makeSound() const;
        void				setBrainIdea(int i, const std::string &newIdea);
        const std::string	&getBrainIdea(int i) const;
};

#endif
