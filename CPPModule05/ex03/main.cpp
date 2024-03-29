/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 15:12:13 by piboidin          #+#    #+#             */
/*   Updated: 2023/01/02 15:12:14 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try
	{
		Bureaucrat	bureaucrat("Bureaucrat", 1);
		Intern		intern;
		Form		*form;

		std::cout << "\n----- SHRUBBERY TEST -----\n" << std::endl;
		form = intern.makeForm("ShrubberyCreation", "Home");
		bureaucrat.signForm(*form);
		bureaucrat.executeForm(*form);
		delete form;

		std::cout << "\n----- ROBOTOMY TEST -----\n" << std::endl;
		form = intern.makeForm("RobotomyRequest", "Lucy");
		bureaucrat.signForm(*form);
		bureaucrat.executeForm(*form);
		delete form;

		std::cout << "\n----- PRESIDENTIAL TEST -----\n" << std::endl;
		form = intern.makeForm("PresidentialGrace", "Manu");
		bureaucrat.signForm(*form);
		bureaucrat.executeForm(*form);
		delete form;

		std::cout << "\n----- INVALID TEST -----\n" << std::endl;
		form = intern.makeForm("Invalid", "Idiot");
		bureaucrat.signForm(*form);
		bureaucrat.executeForm(*form);
		delete form;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
