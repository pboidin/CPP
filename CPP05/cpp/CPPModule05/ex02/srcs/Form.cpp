/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 10:32:59 by schuah            #+#    #+#             */
/*   Updated: 2022/09/01 12:32:13 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/* Default constructor function of Form class */
Form::Form() : _name("Null"), _signGrade(150), _executeGrade(150)
{
	this->_signed = false;
}

/* Copy constructor function of Form class */
Form::Form(const Form &src) :
	_name(src._name), _signGrade(src._signGrade), _executeGrade(src._executeGrade)
{
	this->_signed = src._signed;
	*this = src;
}

/* Constructor function for (string, int, int) input of Form class */
Form::Form(const std::string name, int signGrade, int executeGrade) :
	_name(name), _signGrade(signGrade), _executeGrade(executeGrade)
{
	if (this->_signGrade < 1 || this->_executeGrade < 1)
		throw Form::GradeTooHighException();
	if (this->_signGrade > 150 || this->_executeGrade > 150)
		throw Form::GradeTooLowException();
	this->_signed = false;
}

/* Destructor function of Form class */
Form::~Form()
{
	
}

/* Copy assignation operator of Form class */
Form	&Form::operator=(const Form &src)
{
	this->_signed = src._signed;
	return (*this);
}

/* Getter function for name of Form class */
const std::string	Form::getName() const
{
	return (this->_name);
}

/* Getter function for signed of Form class */
bool	Form::getSigned() const
{
	return (this->_signed);
}

/* Getter function for signGrade of Form class */
int	Form::getSignGrade() const
{
	return (this->_signGrade);
}

/* Getter function for executeGrade of Form class */
int	Form::getExecuteGrade() const
{
	return (this->_executeGrade);
}

void	Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->_signGrade)
		throw Form::GradeTooLowException();
	this->_signed = true;
}

void	Form::execute(const Bureaucrat &executor) const
{
	if (executor.getGrade() > this->_executeGrade)
		throw Form::GradeTooLowException();
	if (this->_signed == false)
		throw Form::FormNotSigned();
	performAction();
}

/* Exception function for when Grade is too high */
const char	*Form::GradeTooHighException::what() const throw()
{
	return ("(Form) GradeTooHighException was called");
}

/* Exception function for when Grade is too low */
const char	*Form::GradeTooLowException::what() const throw()
{
	return ("(Form) GradeTooLowException was called");
}

/* Exception function for when the form is not signed */
const char	*Form::FormNotSigned::what() const throw()
{
	return ("(Form) FormNotSigned was called");
}

/* Function when << operator is called */
std::ostream	&operator<<(std::ostream &output, const Form &src)
{
	output << "Form name: " << src.getName() << std::endl;
	output << "Signed: " << src.getSigned() << std::endl;
	output << "Grade to sign: " << src.getSignGrade() << std::endl;
	output << "Grade to execute: " << src.getExecuteGrade() << std::endl;
	return (output);
}
