/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 10:15:10 by schuah            #+#    #+#             */
/*   Updated: 2022/08/30 19:24:56 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		/* Orthrodox canonical form */
		Form();
		Form(const Form &src);
		Form(const std::string name, int signGrade, int executeGrade);
		~Form();
		Form				&operator=(const Form &src);

		/* Member functions */
		const std::string	getName() const;
		bool				getSigned() const;
		int					getSignGrade() const;
		int					getExecuteGrade() const;
		void				beSigned(const Bureaucrat &bureaucrat);

		/* Exception classes */
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
	private:
		const std::string	_name;
		bool				_signed;
		const int			_signGrade;
		const int			_executeGrade;
};

std::ostream				&operator<<(std::ostream &output , const Form &src);

#endif
