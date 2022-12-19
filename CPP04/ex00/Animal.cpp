#include "Animal.hpp"

/* Default constructor function of Animal */
Animal::Animal()
{
    std::cout << "Animal - Default Constructor function" << std::endl;
	this->_type = "Animal";
}

/* Copy contructori default of Animal */
Animal::Animal(const Animal &src)
{
	std::cout << "Animal - Copy Constructor function" << std::endl;
	*this = src;
}

/* Destructor function of Animal */
Animal::~Animal()
{
	std::cout << "Animal - Destructor function" << std::endl;
}

/* Surcharge d'opérateur */
Animal	&Animal::operator=(const Animal &src)
{
	this->_type = src._type;
	return(*this);
}

/* MakeSound Function, because default Animal don't make noise */
void	Animal::makeSound() const
{
	std::cout << "Default Animal don't make noise" << std::endl;
}

/* Function to get the type of the Animal */
std::string	Animal::getType() const
{
	return(this->_type);
}