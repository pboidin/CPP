/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 15:30:49 by piboidin          #+#    #+#             */
/*   Updated: 2022/12/27 15:30:50 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{

}

Ice::Ice(std::string const &type) : AMateria(type)
{
    this->_type = type;
}

Ice::Ice(const Ice &src)
{
	*this = src;
}

Ice::~Ice()
{

}

Ice	&Ice::operator=(const Ice &src)
{
	this->_type = src._type;
	return (*this);
}

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

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl; 
}
