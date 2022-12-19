#include "Cat.hpp"

/* Default constructor function of Cat class */
Cat::Cat()
{
	std::cout << "(Cat) Default constructor function is called" << std::endl;
	this->_type = "Cat";
}

/* Copy constructor function of Cat class */
Cat::Cat(const Cat &src)
{
	std::cout << "(Cat) Copy constructor function is called" << std::endl;
	*this = src;
}

/* Destructor function of Cat class */
Cat::~Cat()
{
	std::cout << "(Cat) Destructor function is called" << std::endl;
}

/* Copy assignation operator function of Cat class */
Cat	&Cat::operator=(const Cat &src)
{
	this->_type = src._type;
	return (*this);
}

/* MakeSound function of Cat class, cat meows */
void	Cat::makeSound() const
{
	std::cout << "(Cat) Meow~" << std::endl;
}
