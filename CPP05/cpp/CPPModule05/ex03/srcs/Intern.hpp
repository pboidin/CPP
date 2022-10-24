/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 15:29:51 by schuah            #+#    #+#             */
/*   Updated: 2022/08/31 16:17:53 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

# define MAX_FORMS 3

class Intern
{
	public:
		/* Orthrodox canonical form */
		Intern();
		Intern(const Intern &src);
		~Intern();
		Intern	&operator=(const Intern &src);

		/* Member functions */
		Form	*makeForm(const std::string formName, const std::string target);

		/* Exception classes */
		class InvalidFormNameException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
};

#endif
