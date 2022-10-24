/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 22:14:36 by schuah            #+#    #+#             */
/*   Updated: 2022/08/31 12:04:02 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/* Default constructor function of ShrubberyCreationForm class */
ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreation", 145, 137)
{
	this->_target = "Null";
}

/* Copy constructor function of ShrubberyCreationForm class */
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : Form(src)
{
	*this = src;
}

/* Constructor function for string input of ShrubberyCreationForm class */
ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : Form("ShrubberyCreation", 145, 137)
{
	this->_target = target;
}

/* Destructor function of ShrubberyCreationForm class */
ShrubberyCreationForm::~ShrubberyCreationForm()
{
	
}

/* Copy assignation operator function of ShrubberyCreationForm class */
ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src)
{
	Form::operator=(src);
	this->_target = src._target;
	return (*this);
}

/* PerformAction function to draw a Shrubbery tree to a file in the directory*/
void	ShrubberyCreationForm::performAction() const
{
	std::ofstream	out_file(this->_target + "_shrubbery");

	out_file << "Three trees: " << std::endl;
	out_file << " _" << std::endl;
	out_file << "| |" << std::endl;                
	out_file << "| |_ _ __ ___  ___" << std::endl; 
	out_file << "| __| '__/ _ \\/ _ \\" << std::endl;
	out_file << "| |_| | |  __/  __/" << std::endl;
	out_file << " \\__|_|  \\___|\\___|" << std::endl;
	out_file << std::endl;
	out_file << " _" << std::endl;
	out_file << "| |" << std::endl;                
	out_file << "| |_ _ __ ___  ___" << std::endl; 
	out_file << "| __| '__/ _ \\/ _ \\" << std::endl;
	out_file << "| |_| | |  __/  __/" << std::endl;
	out_file << " \\__|_|  \\___|\\___|" << std::endl;
	out_file << std::endl;
	out_file << " _" << std::endl;
	out_file << "| |" << std::endl;                
	out_file << "| |_ _ __ ___  ___" << std::endl; 
	out_file << "| __| '__/ _ \\/ _ \\" << std::endl;
	out_file << "| |_| | |  __/  __/" << std::endl;
	out_file << " \\__|_|  \\___|\\___|" << std::endl;
}
