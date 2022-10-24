/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 10:27:43 by schuah            #+#    #+#             */
/*   Updated: 2022/08/19 12:40:55 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{
	public:
		Zombie();
		~Zombie();
		void		announce(void);
		void		set_name(std::string name);
		std::string	get_name(void);
	private:
		std::string	_name;
};

#endif
