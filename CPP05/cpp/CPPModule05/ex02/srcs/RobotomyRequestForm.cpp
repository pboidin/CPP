/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 12:02:11 by schuah            #+#    #+#             */
/*   Updated: 2022/08/31 12:41:40 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/* Default constructor function of RobotomyRequestForm class */
RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45)
{
	this->_target = "Null";
}

/* Copy constructor function of RobotomyRequestForm class */
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : Form(src)
{
	*this = src;
}

/* Constructor function for string input of RobotomyRequestForm class */
RobotomyRequestForm::RobotomyRequestForm(const std::string target) : Form("RobotomyRequestForm", 72, 45)
{
	this->_target = target;
}

/* Destructor function of RobotomyRequestForm class */
RobotomyRequestForm::~RobotomyRequestForm()
{
	
}

/* Copy assignation operator function of RobotomyRequestForm class */
RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &src)
{
	Form::operator=(src);
	this->_target = src._target;
	return (*this);
}

/* PerformAction function to have a 50% chance of robotomize the target */
void	RobotomyRequestForm::performAction() const
{
	std::cout << "* Drilling noises... *" << std::endl;
	srand(time(NULL));
	if (rand() % 2 == 0)
		std::cout << this->_target << "'s robotomy was successful!" << std::endl;
	else
		std::cout << this->_target << "'s robotomy has failed..." << std::endl;
}
