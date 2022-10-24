/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 16:48:19 by schuah            #+#    #+#             */
/*   Updated: 2022/08/29 12:25:21 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

int	main(void)
{
	{
		std::cout << "\n---------- EX01 Main ----------\n" << std::endl;
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		ICharacter* me = new Character("me");

		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);

		ICharacter* bob = new Character("bob");

		me->use(0, *bob);
		me->use(1, *bob);

		delete (bob);
		delete (me);
		delete (src);
	}
	{
		std::cout << "\n---------- EX01 First Test ----------\n" << std::endl;
		AMateria		*temp;
		IMateriaSource	*materia = new MateriaSource();
		ICharacter		*me2 = new Character("me2");
		
		materia->learnMateria(new Ice());
		materia->learnMateria(new Cure());
		me2->equip(materia->createMateria("ice"));
		temp = materia->createMateria("iice");
		if (temp == NULL)
			std::cout << "No such materia" << std::endl;
		temp = materia->createMateria("cure");
		me2->equip(temp);
		for (int i = 0; i < 2; i++)
		{
			me2->equip(materia->createMateria("cure"));
			me2->use(i, *me2);
		}
		me2->equip(materia->createMateria("ice"));
		me2->unequip(1);
		std::cout << std::endl;
		for (int i = 0; i < 4; i++)
		{
			std::cout << "Slot " << i << ": ";
			me2->use(i, *me2);
		}
		std::cout << std::endl;
		delete (temp);
		delete (materia);
		delete (me2);
	}
	return (0);
}
