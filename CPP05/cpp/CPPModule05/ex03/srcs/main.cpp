/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 14:43:16 by schuah            #+#    #+#             */
/*   Updated: 2022/08/31 16:34:07 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	try
	{
		Bureaucrat	bureaucrat("Bureaucrat", 1);
		Intern 		intern;
		Form		*form;

		std::cout << "\n---------- EX03 Shrubbery Test ----------\n" << std::endl;
		form = intern.makeForm("ShrubberyCreation", "Home");
		bureaucrat.signForm(*form);
		bureaucrat.executeForm(*form);
		delete form;

		std::cout << "\n---------- EX03 Robotomy Test ----------\n" << std::endl;
		form = intern.makeForm("RobotomyRequest", "Ricky");
		bureaucrat.signForm(*form);
		bureaucrat.executeForm(*form);
		delete form;

		std::cout << "\n---------- EX03 Presidential Test ----------\n" << std::endl;
		form = intern.makeForm("PresidentialPardon", "Ivan");
		bureaucrat.signForm(*form);
		bureaucrat.executeForm(*form);
		delete form;

		std::cout << "\n---------- EX03 Invalid Test ----------\n" << std::endl;
		form = intern.makeForm("Invalid", "Dummy");
		bureaucrat.signForm(*form);
		bureaucrat.executeForm(*form);
		delete form;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
