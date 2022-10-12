#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <iostream>
# include <iomanip>
# include <string>
# include <cstdlib>

class PhoneBook
{
	public:
		PhoneBook(void);
		~PhoneBook();
	
		void	addContact(void);
		void	searchContact(void) const;

	private:
		Contact	_contacts[8];
		int		_currentIndex;
		int		_nbContacts;
		void	_printContact(int num) const;
};

#endif