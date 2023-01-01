#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

# define MAX_FORM 3

class Intern
{
	public:
		Intern();
		Intern(const Intern &src);
		~Intern();
		Intern	&operator=(const Intern &src);

		Form	*makeForm(const std::string name, const std::string target);

		class InvalidFormNameException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
};

#endif