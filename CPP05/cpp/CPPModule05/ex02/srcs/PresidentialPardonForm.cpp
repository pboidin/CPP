/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 11:56:15 by schuah            #+#    #+#             */
/*   Updated: 2022/08/31 12:04:14 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/* Default constructor function of PresidentialPardonForm class */
PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5)
{
	this->_target = "Null";
}

/* Copy constructor function of PresidentialPardonForm class */
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : Form(src)
{
	*this = src;
}

/* Constructor function for string input of PresidentialPardonForm class */
PresidentialPardonForm::PresidentialPardonForm(const std::string target) : Form("PresidentialPardonForm", 25, 5)
{
	this->_target = target;
}

/* Destructor function of PresidentialPardonForm class */
PresidentialPardonForm::~PresidentialPardonForm()
{
	
}

/* Copy assignation operator function of PresidentialPardonForm class */
PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &src)
{
	Form::operator=(src);
	this->_target = src._target;
	return (*this);
}

/* PerformAction function to have the target pardoned by Zaphod Beeblebrox */
void	PresidentialPardonForm::performAction() const
{
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
