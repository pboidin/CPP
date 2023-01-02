#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreation", 145, 137)
{
	this->_target = "Null";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : Form(src)
{
	*this = src;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : Form("ShrubberyCreation", 145, 137)
{
	this->_target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src)
{
	Form::operator=(src);
	this->_target = src._target;
	return (*this);
}

void		ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	Form::execute(executor);
	std::string	fileName(this->_target);
	fileName += "_shrubbery";
	std::ofstream out_file(fileName.c_str(), std::ofstream::out);	
	out_file << "Trees ASCII: " << std::endl;
	out_file << "	     &&& &&  & &&" << std::endl;
	out_file << "      && &\\/&\\|& ()|/ @, &&" << std::endl;
	out_file << "      &\\/(/&/&||/& /_/)_&/_&" << std::endl;
	out_file << "   &() &\\/&|()|/&\\/ '%\" & ()" << std::endl;
	out_file << "  &_\\_&&_\\ |& |&&/&__%_/_& &&" << std::endl;
	out_file << "&&   && & &| &| /& & % ()& /&&" << std::endl;
	out_file << " ()&_---()&\\&\\|&&-&&--%---()~" << std::endl;
	out_file << "     &&     \\|||" << std::endl;
	out_file << "             |||" << std::endl;
	out_file << "             |||" << std::endl;
	out_file << "             |||" << std::endl;
	out_file << "       , -=-~  .-^- _" << std::endl;
	out_file << std::endl;
	out_file << "	  ccee88oo" << std::endl;
	out_file << "  C8O8O8Q8PoOb o8oo" << std::endl;
	out_file << " dOB69QO8PdUOpugoO9bD" << std::endl;
	out_file << "CgggbU8OU qOp qOdoUOdcb" << std::endl;
	out_file << "    6OuU  /p u gcoUodpP" << std::endl;
	out_file << "      \\\\/   /douUP" << std::endl;
	out_file << "        \\\\/ \\/" << std::endl;
	out_file << "         |||/|" << std::endl;
	out_file << "         |||\\/" << std::endl;
	out_file << "         |||||" << std::endl;
	out_file << "   ...../\\||||\\...." << std::endl;
	out_file << std::endl;
	out_file << "	               ,@@@@@@@," << std::endl;
	out_file << "       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
	out_file << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl;
	out_file << "   ,%\\%&&%&&%,@@\\@@@/@@@88\\88888/88'" << std::endl;
	out_file << "   %&&%&%&/%&&%@\\@@/ /@@@88888\\88888'" << std::endl;
	out_file << "   %&&%/ %&%%&&@\\ V /@@' `88\\8 `/88'" << std::endl;
	out_file << "   `&\\ ` /%&'    |.|       \\ '|8'" << std::endl;
	out_file << "       |o|        | |         | |" << std::endl;
	out_file << "       |.|        | |         | |" << std::endl;
	out_file << "    \\/ .\\/|_/__/  \\_/__|\\/. \\_/__/_" << std::endl;
	out_file << std::endl;
	out_file.close();
}