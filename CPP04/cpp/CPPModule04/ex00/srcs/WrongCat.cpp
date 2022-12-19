#include "WrongCat.hpp"

/* Default constructor function of WrongCat class */
WrongCat::WrongCat()
{
	std::cout << "(WrongCat) Default constructor function is called" << std::endl;
	this->_type = "WrongCat";
}

/* Copy constructor function of WrongCat class */
WrongCat::WrongCat(const WrongCat &src)
{
	std::cout << "(WrongCat) Copy constructor function is called" << std::endl;
	*this = src;
}

/* Destructor function of WrongCat class */
WrongCat::~WrongCat()
{
	std::cout << "(WrongCat) Destructor function is called" << std::endl;
}

/* Copy assignation operator function of WrongCat class */
WrongCat	&WrongCat::operator=(const WrongCat &src)
{
	this->_type = src._type;
	return (*this);
}

/* MakeSound function of WrongCat class, WrongCat meows */
void	WrongCat::makeSound() const
{
	std::cout << "(WrongCat) Meow~" << std::endl;
}
