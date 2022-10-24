/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 15:17:18 by schuah            #+#    #+#             */
/*   Updated: 2022/08/31 12:38:51 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/* Default constructor function of Bureaucrat class */
Bureaucrat::Bureaucrat() : _name("Null")
{
	this->_grade = 150;
}

/* Constructor function for string and int input 0f Bureaucrat class */
Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = grade;
}

/* Copy constructor function of Bureaucrat class */
Bureaucrat::Bureaucrat(const Bureaucrat &src) : _name(src._name)
{
	this->_grade = src._grade;
	*this = src;
}

/* Destructor function of Bureaucrat class */
Bureaucrat::~Bureaucrat()
{
	
}

/* Copy assignation operator of Bureaucrat class */
Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &src)
{
	this->_grade = src._grade;
	return (*this);
}

/* Getter function for name of Bureaucrat class */
const std::string	Bureaucrat::getName() const
{
	return (this->_name);
}

/* Getter function for grade of Bureaucrat class */
int	Bureaucrat::getGrade() const
{
	return (this->_grade);
}

/* Increments the grade of the Bureaucrat (grade--) */
void	Bureaucrat::becomeSmarter()
{
	try
	{
		if (this->_grade <= 1)
			throw Bureaucrat::GradeTooHighException();
	}
	catch(const std::exception& error)
	{
		std::cerr << error.what() << std::endl;
	}
	this->_grade--;
}

/* Decrements the grade of the Bureaucrat (grade++) */
void	Bureaucrat::becomeDumber()
{
	try
	{
		if (this->_grade >= 150)
			throw Bureaucrat::GradeTooLowException();
	}
	catch(const std::exception& error)
	{
		std::cerr << error.what() << std::endl;
	}
	this->_grade++;
}

/* SignForm function, sets signed bool variable to true */
void	Bureaucrat::signForm(Form &form)
{
	try
	{
		std::cout << this->_name << " signs " << form.getName() << std::endl;
		form.beSigned(*this);
	}
	catch(const std::exception& e)
	{
		std::cout << this->_name << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
	}
}

/* ExecuteForm function that executes the form */
void	Bureaucrat::executeForm(const Form &form) const
{
	try
	{
		std::cout << this->_name << " executed " << form.getName() << std::endl;
		form.execute(*this);
	}
	catch(const std::exception& e)
	{
		std::cout << this->_name << " couldn't execute " << form.getName() << " because " << e.what() << std::endl;
	}
}

/* Exception function for when Grade is too high */
const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("(Bureaucrat) GradeTooHighException was called");
}

/* Exception function for when Grade is too low */
const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("(Bureaucrat) GradeTooLowException was called");
}
