/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 20:20:04 by schuah            #+#    #+#             */
/*   Updated: 2022/08/29 15:32:58 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

/* Default constructor function of Ice class */
Ice::Ice() : AMateria("ice")
{

}

/* Constructor function for string input of Ice class */
Ice::Ice(std::string const &type) : AMateria(type)
{
	this->_type = type;
}

/* Copy constructor function of Ice class */
Ice::Ice(const Ice &src)
{
	*this = src;
}

/* Destructor function of Ice class */
Ice::~Ice()
{
	
}

/* Copy assignation operator function of Character class */
Ice	&Ice::operator=(const Ice &src)
{
	this->_type = src._type;
	return (*this);
}

/* Clone function to create a copy of Ice */
AMateria	*Ice::clone() const
{
	AMateria *newIce;

	try
	{
		newIce = new Ice;
		return (newIce);
	}
	catch(const std::exception& error)
	{
		std::cerr << error.what() << '\n';
		throw (error);
		return (NULL);
	}
}

/* Use function to use Ice on a target */
void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl; 
}
