#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main() 
{
	{
		std::cout << "\n---------- MAIN ----------\n" << std::endl;
		const Animal*	j = new Dog();
		const Animal*	i = new Cat();

		delete	j;
		delete	i;
	}
	{
		std::cout << "\n---------- TEST 01 ----------\n" << std::endl;
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
		std::cout << "\n---------- TEST 02 ----------\n" << std::endl;
		Cat cat1;
		Cat	cat2;

		cat1.setBrainIdea(0, "The CaT");
		cat2 = cat1;
		std::cout << "Cat1 idea: " << cat1.getBrainIdea(0) << std::endl;
		std::cout << "Cat1 idea address: " << &(cat1.getBrainIdea(0)) << std::endl;
		std::cout << "Cat2 idea: " << cat2.getBrainIdea(0) << std::endl;
		std::cout << "Cat2 idea address: " << &(cat2.getBrainIdea(0)) << std::endl;
	}
	{
		std::cout << "\n---------- TEST 03 ----------\n" << std::endl;
		Cat cat1;
		cat1.setBrainIdea(0, "Really ? A fucking Cat");
		Cat	cat2(cat1);

		std::cout << "Cat1 idea: " << cat1.getBrainIdea(0) << std::endl;
		std::cout << "Cat1 idea address: " << &(cat1.getBrainIdea(0)) << std::endl;
		std::cout << "Cat2 idea: " << cat2.getBrainIdea(0) << std::endl;
		std::cout << "Cat2 idea address: " << &(cat2.getBrainIdea(0)) << std::endl;
	}
	return 0;
}