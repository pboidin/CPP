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
	idiotBur.execute(shrubbery);
	classicBur.signForm(shrubbery);
	classicBur.execute(shrubbery);
	smartBur.signForm(shrubbery);
	smartBur.execute(shrubbery);
	geniusBur.signForm(shrubbery);
	geniusBur.execute(shrubbery);

	std::cout << "\n---------- ROBOTOMY TEST ----------\n" << std::endl;
	idiotBur.signForm(robotomy);
	idiotBur.execute(robotomy);
	classicBur.signForm(robotomy);
	classicBur.execute(robotomy);
	smartBur.signForm(robotomy);
	smartBur.execute(robotomy);
	geniusBur.signForm(robotomy);
	geniusBur.execute(robotomy);

	std::cout << "\n---------- PRESIDENTIAL TEST ----------\n" << std::endl;
	idiotBur.signForm(president);
	idiotBur.execute(president);
	classicBur.signForm(president);
	classicBur.execute(president);
	smartBur.signForm(president);
	smartBur.execute(president);
	geniusBur.signForm(president);
	geniusBur.execute(president);

	return (0);
}