/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 15:24:53 by piboidin          #+#    #+#             */
/*   Updated: 2022/12/27 15:24:54 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main() 
{
	{
		std::cout << "\n----------WITH ANIMAL----------\n" << std::endl;
		const Animal*	meta = new Animal();
		const Animal*	j = new Dog();
		const Animal*	i = new Cat();
		
		std::cout << j->getType() << " " << std::endl; 
		std::cout << i->getType() << " " << std::endl; 
		i->makeSound(); //will output the cat sound!
		j->makeSound();
	    meta->makeSound();
		delete (i);
		delete (j);
		delete (meta);
	}
	{
		std::cout << "\n----------WITH WRONGANIMAL----------\n" << std::endl;
		const WrongAnimal*	wrong_a = new WrongAnimal();
		const WrongAnimal*	wrong_c = new WrongCat();

		std::cout << wrong_a->getType() << " " << std::endl; 
		std::cout << wrong_c->getType() << " " << std::endl; 
		wrong_a->makeSound();
		wrong_c->makeSound();
		delete (wrong_c);
		delete (wrong_a);
		std::cout << "\n----------THE END----------\n" << std::endl;
	}
	return 0;
}
