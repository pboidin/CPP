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
		bureaucrat.execute(*form);
		delete form;

		std::cout << "\n----- ROBOTOMY TEST -----\n" << std::endl;
		form = intern.makeForm("RobotomyRequest", "Lucy");
		bureaucrat.signForm(*form);
		bureaucrat.execute(*form);
		delete form;

		std::cout << "\n----- PRESIDENTIAL TEST -----\n" << std::endl;
		form = intern.makeForm("PresidentialGrace", "Manu");
		bureaucrat.signForm(*form);
		bureaucrat.execute(*form);
		delete form;

		std::cout << "\n----- INVALID TEST -----\n" << std::endl;
		form = intern.makeForm("Invalid", "Idiot");
		bureaucrat.signForm(*form);
		bureaucrat.execute(*form);
		delete form;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}