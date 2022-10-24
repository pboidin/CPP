/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 13:30:49 by schuah            #+#    #+#             */
/*   Updated: 2022/08/29 15:32:58 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/* Default constructor function of Cat class */
Cat::Cat()
{
	std::cout << "(Cat) Default constructor function is called" << std::endl;
	this->_type = "Cat";
	try
	{
		this->brain = new Brain();
	}
	catch (const std::exception &error)
	{
		std::cerr << error.what() << std::endl;
		throw (error);
	}
}

/* Copy constructor function of Cat class */
Cat::Cat(const Cat &src)
{
	std::cout << "(Cat) Copy constructor function is called" << std::endl;
	try
	{
		brain = new Brain();
	}
	catch (const std::exception &error)
	{
		std::cerr << error.what() << std::endl;
		throw (error);
	}
	*this = src;
}

/* Destructor function of Cat class */
Cat::~Cat()
{
	std::cout << "(Cat) Destructor function is called" << std::endl;
	delete (this->brain);
}

/* Copy assignation operator function of Cat class */
Cat	&Cat::operator=(const Cat &src)
{
	this->_type = src._type;
	*this->brain = *(src.brain);
	return (*this);
}

/* MakeSound function of Cat class, cat meows */
void	Cat::makeSound() const
{
	std::cout << "(Cat) Meow~" << std::endl;
}

/* Setter function for Brain's idea of Cat class */
void	Cat::setBrainIdea(int i, const std::string &newIdea)
{
	return (this->brain->setIdea(i, newIdea));
}

/* Getter function for Brain's idea of Cat class */
const std::string	&Cat::getBrainIdea(int i) const
{
	return (this->brain->getIdea(i));
}
