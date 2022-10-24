/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 17:55:42 by schuah            #+#    #+#             */
/*   Updated: 2022/08/29 15:32:58 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/* Default constructor function of AMateria class */
AMateria::AMateria(void)
{
	this->_type = "AMateria";
}

/* Constructor function for string input of Amateria class */
AMateria::AMateria(std::string const &type)
{
	this->_type = type;
}

/* Copy constructor function of AMateria class */
AMateria::AMateria(const AMateria &src)
{
	*this = src;
}

/* Destructor function of AMateria class */
AMateria::~AMateria(void)
{

}

/* Copy assignation operator function of AMateria class */
AMateria	&AMateria::operator=(const AMateria &src)
{
	this->_type = src._type;
	return (*this);
}

/* Getter function for type of AMateria class */
const std::string	&AMateria::getType(void) const
{
	return (this->_type);
}

/* Use function, to be used on the target */
void	AMateria::use(ICharacter &target)
{
	std::cout << target.getName() << " said ok" << std::endl;
}
