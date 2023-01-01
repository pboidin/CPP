#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45)
{
	this->_target = "Null";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : Form(src)
{
	*this = src;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : Form("RobotomyRequestForm", 72, 45)
{
	this->_target = target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &src)
{
	Form::operator=(src);
	this->_target = src._target;
	return (*this);
}

void	RobotomyRequestForm::perform() const
{
	std::cout << "Drilling noises... " << std::endl;
	srand(time(NULL));
	if (rand() % 2 == 0)
		std::cout << this->_target << "'s robotomy was a sucess!" << std::endl;
	else
		std::cout << this->_target << "'s robotomy was a fail!" << std::endl;
}