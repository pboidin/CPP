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
		delete (meta);
		delete (j);
		delete (i);
	}
	{
		std::cout << "\n----------WITH WRONGANIMAL----------\n" << std::endl;
		const WrongAnimal*	wrong_a = new WrongAnimal();
		const WrongAnimal*	wrong_c = new WrongCat();

		std::cout << wrong_a->getType() << " " << std::endl; 
		std::cout << wrong_c->getType() << " " << std::endl; 
		wrong_a->makeSound();
		wrong_c->makeSound();
		delete (wrong_a);
		delete (wrong_c);
	}
	return 0;
}