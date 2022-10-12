#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main(void)
{
	std::string	read;
	PhoneBook	manager;

	std::cout << "\nWelcome to Ail' Phone" << std::endl << "Commands are ADD, SEARCH, EXIT" << std::endl;
	do
	{
		std::cout << std::endl;
		std::cout << "Enter a command: ";
		std::getline(std::cin, read);
		if (read == "ADD")
			manager.addContact();
		else if (read == "SEARCH")
			manager.searchContact();
	} while (read != "EXIT" && !std::cin.eof());
	return (0);
}
