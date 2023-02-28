/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 15:10:14 by piboidin          #+#    #+#             */
/*   Updated: 2023/01/02 15:10:15 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	Bureaucrat				idiotBur("Idiot", 150);
	Bureaucrat				classicBur("Classic", 70);
	Bureaucrat				smartBur("Smart", 30);
	Bureaucrat				geniusBur("Genius", 1);
	ShrubberyCreationForm	shrubbery("House");
	RobotomyRequestForm		robotomy("Lucy");
	PresidentialPardonForm	president("Manu");
	

    std::cout << "\n---------- SHRUBBERY TEST ----------\n" << std::endl;
	idiotBur.signForm(shrubbery);
	idiotBur.executeForm(shrubbery);
	classicBur.signForm(shrubbery);
	classicBur.executeForm(shrubbery);
	smartBur.signForm(shrubbery);
	smartBur.executeForm(shrubbery);
	geniusBur.signForm(shrubbery);
	geniusBur.executeForm(shrubbery);

	std::cout << "\n---------- ROBOTOMY TEST ----------\n" << std::endl;
	idiotBur.signForm(robotomy);
	idiotBur.executeForm(robotomy);
	classicBur.signForm(robotomy);
	classicBur.executeForm(robotomy);
	smartBur.signForm(robotomy);
	smartBur.executeForm(robotomy);
	geniusBur.signForm(robotomy);
	geniusBur.executeForm(robotomy);

	std::cout << "\n---------- PRESIDENTIAL TEST ----------\n" << std::endl;
	idiotBur.signForm(president);
	idiotBur.executeForm(president);
	classicBur.signForm(president);
	classicBur.executeForm(president);
	smartBur.signForm(president);
	smartBur.executeForm(president);
	geniusBur.signForm(president);
	geniusBur.executeForm(president);

	return (0);
}
