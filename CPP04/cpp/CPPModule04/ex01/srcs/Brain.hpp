/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 14:30:26 by schuah            #+#    #+#             */
/*   Updated: 2022/08/27 16:08:02 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

# define IDEAS 100

class Brain
{
	public:
		/* Orthrodox canonical form */
		Brain();
		Brain(const Brain &src);
		virtual				~Brain();
		Brain				&operator=(const Brain &src);

		/* Member functions */
		void				setIdea(int i, const std::string &newIdea);
		const std::string	&getIdea(int i) const;
	private:
		std::string			_ideas[IDEAS];
};

#endif
