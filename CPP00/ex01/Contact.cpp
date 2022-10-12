#include "Contact.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::~Contact()
{
	return ;
}

void		Contact::askFirstName(void)
{
	char		code;
	std::string	firstn;

	code = 0;
	do
	{
		std::cout << "Enter First Name: ";
		std::getline(std::cin, firstn);
		if (std::cin.eof())
			return ;
		if (firstn.empty())
			std::cerr << "Can't be empty" << std::endl;
		else
			code = 1;
	} while (!code);
	this->_firstName = firstn;
	return ;
}
void		Contact::askLastName(void)
{
	char		code;
	std::string	lastn;

	code = 0;
	do
	{
		std::cout << "Enter Last Name: ";
		std::getline(std::cin, lastn);
		if (std::cin.eof())
			return ;
		if (lastn.empty())
			std::cerr << "Can't be empty" << std::endl;
		else
			code = 1;
	} while (!code);
	this->_lastName = lastn;
	return ;
}

void		Contact::askNickName(void)
{
	char		code;
	std::string	nickn;

	code = 0;
	do
	{
		std::cout << "Enter Nick Name: ";
		std::getline(std::cin, nickn);
		if (std::cin.eof())
			return ;
		if (nickn.empty())
			std::cerr << "Can't be empty" << std::endl;
		else
			code = 1;
	} while (!code);
	this->_nickName = nickn;
	return ;
}

void		Contact::askPhoneNumber(void)
{
	char		code;
	std::string	phoneN;

	code = 0;
	do
	{
		std::cout << "Enter Phone Number: ";
		std::getline(std::cin, phoneN);
		if (std::cin.eof())
			return ;
		if (phoneN.empty())
			std::cerr << "Can't be empty" << std::endl;
		else
			code = 1;
	} while (!code);
	this->_phoneNumber = phoneN;
	return ;
}

void		Contact::askDarkestSecret(void)
{
	char		code;
	std::string	darkS;

	code = 0;
	do
	{
		std::cout << "Enter Darkest Secret: ";
		std::getline(std::cin, darkS);
		if (std::cin.eof())
			return ;
		if (darkS.empty())
			std::cerr << "Can't be empty" << std::endl;
		else
			code = 1;
	} while (!code);
	this->_darkestSecret = darkS;
	return ;
}

std::string	Contact::getFirstName(void) const
{
	return (this->_firstName);
}

std::string	Contact::getLastName(void) const
{
	return (this->_lastName);
}

std::string	Contact::getNickName(void) const
{
	return (this->_nickName);
}

std::string	Contact::getPhoneNumber(void) const
{
	return (this->_phoneNumber);
}

std::string	Contact::getDarkestSecret(void) const
{
	return (this->_darkestSecret);
}