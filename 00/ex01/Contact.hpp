#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class Contact
{
    public:
    	Contact(void);
    	~Contact();

		void		askFirstName(void);
		void		askLastName(void);
		void		askNickName(void);
		void		askPhoneNumber(void);
		void		askDarkestSecret(void);
		std::string	getFirstName(void) const;
		std::string	getLastName(void) const;
		std::string getNickName(void) const;
		std::string	getPhoneNumber(void) const;
		std::string	getDarkestSecret(void) const;

	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickName;
		std::string	_phoneNumber;
		std::string	_darkestSecret;
};

#endif