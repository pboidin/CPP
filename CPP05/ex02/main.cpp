#include "Bureaucrat.hpp"

int main()
{
    std::cout << "\n---------- First Test ----------\n" << std::endl;
	Bureaucrat bureaucrat("bureaucrat", 69);
	Form lowForm("lowForm", 100, 100);
	Form highForm("highForm", 30, 30);

	std::cout << lowForm << std::endl;
	std::cout << highForm << std::endl;
	bureaucrat.signForm(lowForm);
	bureaucrat.signForm(highForm);
	return (0);
}