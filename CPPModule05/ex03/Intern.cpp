/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 15:12:01 by piboidin          #+#    #+#             */
/*   Updated: 2023/01/02 15:12:03 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern &src)
{
    *this = src;
}

Intern::~Intern()
{
}

Intern	&Intern::operator=(const Intern &src)
{
	(void)src;
	return (*this);
}

Form	*Intern::makeForm(const std::string name, const std::string target)
{
	const std::string	avName[MAX_FORM] = {"ShrubberyCreation", "RobotomyRequest", "PresidentialGrace"};
	Form				*avForm[MAX_FORM] = {new ShrubberyCreationForm(target), new RobotomyRequestForm(target), new PresidentialPardonForm(target)};
	Form				*selectForm;

	selectForm = NULL;
	for (int i = 0; i < MAX_FORM; i++)
	{
		if (name == avName[i])
		{
			std::cout << "Intern creates " << name << "Form" << std::endl;
			selectForm = avForm[i];
		}
		else
			delete (avForm[i]);
	}
	if (selectForm == NULL)
		throw Intern::InvalidFormNameException();
	return (selectForm);
}

const char	*Intern::InvalidFormNameException::what() const throw()
{
	return ("Intern - InvalidFormNameException was called");
}
