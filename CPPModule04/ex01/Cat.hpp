/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 15:25:59 by piboidin          #+#    #+#             */
/*   Updated: 2022/12/27 15:26:00 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain			*brain;		
	public:
		Cat();
		Cat(const Cat &src);
		virtual		~Cat();
		Cat			&operator=(const Cat &src);

		virtual void    	makeSound() const;
		void				setBrainIdea(int i, const std::string &newIdea);
		const std::string	&getBrainIdea(int i) const;
};

#endif
