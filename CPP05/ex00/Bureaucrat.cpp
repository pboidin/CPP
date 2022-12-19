
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Null")
{
    this->_grade = 150;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) : _name(src._name)
{
    this->_grade = src._grade;
    *this = src;
}

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &src)
{
	this->_grade = src._grade;
	return (*this);
}

const std::string	Bureaucrat::getName()
{
	return (this->_name);
}

int Bureaucrat::getGrade()
{
	return (this->_grade);
}

void	Bureaucrat::doIncrement()
{
	try
	{
		if (this->_grade <= 1)
			throw Bureaucrat::GradeTooHighException();
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	this->_grade--;
}

void Bureaucrat::doDecrement()
{
	try
	{
		if (this->_grade >= 150)
			throw Bureaucrat::GradeTooLowException();
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	this->_grade++;
}

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Bureaucrat - Grade Too High Exception Called");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Bureaucrat - Grade Too Low Exception Called");
}