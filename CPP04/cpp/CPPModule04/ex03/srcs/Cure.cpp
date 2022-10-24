/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 20:04:53 by schuah            #+#    #+#             */
/*   Updated: 2022/08/29 15:32:58 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

/* Default constructor function of Cure class */
Cure::Cure() : AMateria("cure")
{

}

/* Constructor function for string input of Cure class */
Cure::Cure(std::string const &type) : AMateria(type)
{
	this->_type = type;
}

/* Copy constructor function of Cure class */
Cure::Cure(const Cure &src)
{
	*this = src;
}

/* Destructor function of Cure class */
Cure::~Cure()
{
	
}

/* Copy assignation operator function of Character class */
Cure	&Cure::operator=(const Cure &src)
{
	this->_type = src._type;
	return (*this);
}

/* Clone function to create a copy of Cure */
AMateria	*Cure::clone() const
{
	AMateria *newCure;

	try
	{
		newCure = new Cure;
		return (newCure);
	}
	catch(const std::exception& error)
	{
		std::cerr << error.what() << '\n';
		throw (error);
		return (NULL);
	}
}

/* Use function to use Cure on a target */
void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl; 
}
