/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 13:34:23 by schuah            #+#    #+#             */
/*   Updated: 2022/08/29 15:32:58 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/* Default constructor function of Dog class */
Dog::Dog()
{
	std::cout << "(Dog) Default constructor function is called" << std::endl;
	this->_type = "Dog";
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

/* Copy constructor function of Dog class */
Dog::Dog(const Dog &src)
{
	std::cout << "(Dog) Copy constructor function is called" << std::endl;
	try
	{
		this->brain = new Brain();
	}
	catch (const std::exception &error)
	{
		std::cerr << error.what() << std::endl;
		throw (error);
	}
	*this = src;
}

/* Destructor function of Dog class */
Dog::~Dog()
{
	std::cout << "(Dog) Destructor function is called" << std::endl;
	delete (this->brain);
}

/* Copy assignation operator function of Dog class */
Dog	&Dog::operator=(const Dog &src)
{
	this->_type = src._type;
	*this->brain = *(src.brain);
	return (*this);
}

/* MakeSound function of Dog class, dog barks */
void	Dog::makeSound() const
{
	std::cout << "(Dog) Woof!" << std::endl;
}

/* Setter function for Brain's idea of Dog class */
void	Dog::setBrainIdea(int i, const std::string &newIdea)
{
	return (this->brain->setIdea(i, newIdea));
}

/* Getter function for Brain's idea of Dog class */
const std::string	&Dog::getBrainIdea(int i) const
{
	return (this->brain->getIdea(i));
}
