#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
    this->_value = 0;
}

Fixed::Fixed(const Fixed &f)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = f;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_value = src.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return(this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function" << std::endl;
	this->_value = raw;
}