/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 15:30:21 by piboidin          #+#    #+#             */
/*   Updated: 2022/12/27 15:30:22 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
    this->_type = "AMateria";
}

AMateria::AMateria(std::string const &type)
{
    this->_type = type;
}

AMateria::AMateria(const AMateria &src)
{
    *this = src;
}

AMateria::~AMateria(void)
{

}

AMateria    &AMateria::operator=(const AMateria &src)
{
    this->_type = src._type;
    return (*this);
}

const std::string   &AMateria::getType(void) const
{
    return (this->_type);
}

void    AMateria::use(ICharacter &target)
{
    std::cout << target.getName() << " said ok" << std::endl;
}
