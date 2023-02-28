/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 15:11:49 by piboidin          #+#    #+#             */
/*   Updated: 2023/01/02 15:11:50 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Form.hpp"

Form::Form() : _name("Null"), _signGrade(150), _executeGrade(150)
{
	this->_signed = false;
}

Form::Form(const Form &src) : _name(src._name), _signGrade(src._signGrade), _executeGrade(src._executeGrade)
{
	this->_signed = src._signed;
	*this = src;
}

Form::Form(const std::string name, int signGrade, int executeGrade) : _name(name), _signGrade(signGrade), _executeGrade(executeGrade)
{
	if (this->_signGrade < 1 || this->_executeGrade < 1)
		throw Form::GradeTooHighException();
	if (this->_signGrade > 150 || this->_executeGrade > 150)
		throw Form::GradeTooLowException();
	this->_signed = false;
}

Form::~Form()
{
	
}

Form	&Form::operator=(const Form &src)
{
	this->_signed = src._signed;
	return (*this);
}

const std::string	Form::getName() const
{
	return (this->_name);
}

bool	Form::getSigned() const
{
	return (this->_signed);
}

int	Form::getSignGrade() const
{
	return (this->_signGrade);
}

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
}

const char	*Form::GradeTooHighException::what() const throw()
{
	return ("Form - GradeTooHighException was called");
}

const char	*Form::GradeTooLowException::what() const throw()
{
	return ("Form - GradeTooLowException was called");
}

const char	*Form::FormNotSigned::what() const throw()
{
	return ("Form - FormNotSigned was called");
}

std::ostream	&operator<<(std::ostream &output, const Form &src)
{
	output << "Form name: " << src.getName() << std::endl;
	output << "Signed: " << src.getSigned() << std::endl;
	output << "Grade to sign: " << src.getSignGrade() << std::endl;
	output << "Grade to execute: " << src.getExecuteGrade() << std::endl;
	return (output);
}
