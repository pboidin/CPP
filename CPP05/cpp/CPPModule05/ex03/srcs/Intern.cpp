/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 15:38:38 by schuah            #+#    #+#             */
/*   Updated: 2022/08/31 16:19:55 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

/* Default constructor function of Intern class */
Intern::Intern()
{
	
}

/* Copy constructor function of Intern class */
Intern::Intern(const Intern &src)
{
	*this = src;
}

/* Destructor function of Intern class */
Intern::~Intern()
{
	
}

/* Copy assignation operator function of Intern class */
Intern	&Intern::operator=(const Intern &src)
{
	(void)src;
	return (*this);
}

/* MakeForm function to make forms using string name and target input */
Form	*Intern::makeForm(const std::string formName, const std::string target)
{
	const std::string	availableName[MAX_FORMS]
		= {"ShrubberyCreation", "RobotomyRequest", "PresidentialPardon"};
	Form				*availableForm[MAX_FORMS]
		= {new ShrubberyCreationForm(target), new RobotomyRequestForm(target), new PresidentialPardonForm(target)};
	Form				*selectedForm;

	selectedForm = NULL;
	for (int i = 0; i < MAX_FORMS; i++)
	{
		if (formName == availableName[i])
		{
			std::cout << "Intern creates " << formName << "Form" << std::endl;
			selectedForm = availableForm[i];
		}
		else
			delete (availableForm[i]);
	}
	if (selectedForm == NULL)
		throw Intern::InvalidFormNameException();
	return (selectedForm);
}

/* Exception function for when the Form name is invalid */
const char	*Intern::InvalidFormNameException::what() const throw()
{
	return ("(Intern) InvalidFormNameException was called");
}
