/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:13:51 by piboidin          #+#    #+#             */
/*   Updated: 2022/11/14 15:13:52 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <stdio.h>
# include <stdlib.h>

class Zombie
{
    public:
        Zombie(void);
        ~Zombie();

		void	announce(void);
        void    baptized(std::string name);

    private:
        std::string	_name;
};

#endif
