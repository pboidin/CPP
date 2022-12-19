#include "Cat.hpp"

/* Default constructor function of Cat */
Cat::Cat()
{
    std::cout << "Cat - Default Constructor function" << std::endl;
	this->_type = "Cat";
}

/* Copy contructori default of Cat */
Cat::Cat(const Cat &src)
{
	std::cout << "Cat - Copy Constructor function" << std::endl;
	*this = src;
}

/* Destructor function of Cat */
Cat::~Cat()
{
	std::cout << "Cat - Destructor function" << std::endl;
}

/* Surcharge d'opérateur */
Cat	&Cat::operator=(const Cat &src)
{
	this->_type = src._type;
	return(*this);
}

/* MakeSound Function, because default Cat don't make noise */
void	Cat::makeSound() const
{
	std::cout << "Miaou Miaou" << std::endl;
}