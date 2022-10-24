/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 12:41:41 by schuah            #+#    #+#             */
/*   Updated: 2022/08/22 12:11:38 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap a;
	std::cout << "name: " << a.getName() << std::endl;
    std::cout << "Hp: " << a.getHp() << std::endl;
    std::cout << "Ep: " << a.getEp() << std::endl;
    std::cout << "Ad: " << a.getAd() << std::endl;
    a.takeDamage(3);
    ClapTrap b(a);
    b.takeDamage(3);
    ClapTrap c;
    c = b;
    c.takeDamage(3);
	c.takeDamage(999);
	c.beRepaired(1);
	c.beRepaired(100);
	for (int i = 0; i < 10; i++)
		c.attack("noob");
	return (0);
}
