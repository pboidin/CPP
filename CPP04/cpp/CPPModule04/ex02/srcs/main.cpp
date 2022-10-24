/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 13:59:07 by schuah            #+#    #+#             */
/*   Updated: 2022/08/27 16:17:18 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	{
		std::cout << "\n---------- EX01 Main ----------\n" << std::endl;
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		delete j;
		delete i;
	}
	{
		std::cout << "\n---------- EX01 First Test ----------\n" << std::endl;
		const Animal	*group[4];

		for (int i = 0; i < 4; i++)
		{
			if (i < 2)
				group[i] = new Dog();
			else
				group[i] = new Cat();
		}
		for (int i = 0; i < 4; i++)
			delete group[i];
	}
	{
		std::cout << "\n---------- EX01 Second Test ----------\n" << std::endl;
		Cat cat1;
		Cat cat2;
		
		cat1.setBrainIdea(0, "I am a cat");
		cat2 = cat1;
		std::cout << "Cat1 idea: " << cat1.getBrainIdea(0) << std::endl;
		std::cout << "Cat1 idea address: " << &(cat1.getBrainIdea(0)) << std::endl;
		std::cout << "Cat2 idea: " << cat2.getBrainIdea(0) << std::endl;
		std::cout << "Cat2 idea address: " << &(cat2.getBrainIdea(0)) << std::endl;
	}
	{
		std::cout << "\n---------- EX01 Third Test ----------\n" << std::endl;
		Cat cat1;
		cat1.setBrainIdea(0, "Why cat is I am?");
		Cat cat2(cat1);

		std::cout << "Cat1 idea: " << cat1.getBrainIdea(0) << std::endl;
		std::cout << "Cat1 idea address: " << &(cat1.getBrainIdea(0)) << std::endl;
		std::cout << "Cat2 idea: " << cat2.getBrainIdea(0) << std::endl;
		std::cout << "Cat2 idea address: " << &(cat2.getBrainIdea(0)) << std::endl;
	}
	return (0);
}
