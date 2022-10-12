#include "PhoneBook.hpp"


PhoneBook::PhoneBook(void): _currentIndex(0), _nbContacts(0)
{
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

void	PhoneBook::addContact(void)
{
	std::cout << std::endl;
	if (this->_currentIndex >= 8)
		this->_currentIndex = 0;
	this->_contacts[this->_currentIndex].askFirstName();
	if (std::cin.eof())
		return ;
	this->_contacts[this->_currentIndex].askLastName();
	if (std::cin.eof())
		return ;
	this->_contacts[this->_currentIndex].askNickName();
	if (std::cin.eof())
		return ;
	this->_contacts[this->_currentIndex].askPhoneNumber();
	if (std::cin.eof())
		return ;
	this->_contacts[this->_currentIndex].askDarkestSecret();
	if (this->_nbContacts < 8)
		this->_nbContacts++;
	this->_currentIndex++;
	return ;
}

void	PhoneBook::_printContact(int num) const
{
	std::cout << std::endl;
	std::cout << "First name: " << this->_contacts[num].getFirstName() << std::endl;
	std::cout << "Last name: " << this->_contacts[num].getLastName() << std::endl;
	std::cout << "Nickname: " << this->_contacts[num].getNickName() << std::endl;
	std::cout << "Phone number: " << this->_contacts[num].getFirstName() << std::endl;
	std::cout << "Darkest secret: " << this->_contacts[num].getDarkestSecret() << std::endl;
}

void	PhoneBook::searchContact(void) const
{
	int 		code;
	std::string	num;

	if (this->_nbContacts == 0)
	{
		std::cout << "There is no contact" << std::endl;
		return ;
	}
	std::cout << std::endl;
	std::cout << "|" << std::setw(10) << "INDEX" << "|" << std::setw(10) << "FIRSTNAME" << "|" << std::setw(10) << "LASTNAME" << "|" << std::setw(10) << "NICKNAME" << "|" << std::endl;
	for (int i = 0; i < this->_nbContacts; i++)
	{
		std::cout << "|" << std::setw(10) << i << "|";
		std::cout << std::setw(10) << (this->_contacts[i].getFirstName().length() > 10 ? this->_contacts[i].getFirstName().substr(0, 9) + "." : this->_contacts[i].getFirstName()) << "|";
		std::cout << std::setw(10) << (this->_contacts[i].getLastName().length() > 10 ? this->_contacts[i].getLastName().substr(0, 9) + "." : this->_contacts[i].getLastName()) << "|";
		std::cout << std::setw(10) << (this->_contacts[i].getNickName().length() > 10 ? this->_contacts[i].getNickName().substr(0, 9) + "." : this->_contacts[i].getNickName()) << "|";
		std::cout << std::endl;
	}
	code = 0;
	do
	{
		std::cout << std::endl;
		std::cout << "Enter number of the contact: ";
		std::getline(std::cin, num);
		if (!std::cin.eof())
		{
			if (num.length() != 1 || !std::isdigit(num[0]) || (num[0] - '0') < 0 || (num[0] - '0') >= this->_nbContacts)
				std::cerr << "Not valid Number for a contact" << std::endl;
			else
			{
				code = 1;
				this->_printContact((num[0]  - '0'));
			}
		}
	} while (!code && !std::cin.eof());
}