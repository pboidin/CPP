#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_signGrade;
		const int			_executeGrade;	
	public:
		Form();
		Form(const Form &src);
		Form(const std::string name, int signGrade, int executeGrade);
		virtual				~Form();
		Form				&operator=(const Form &src);

		const std::string	getName() const;
		bool				getSigned() const;
		int					getSignGrade() const;
		int					getExecuteGrade() const;
		void				beSigned(const Bureaucrat &bureaucrat);
		void				execute(const Bureaucrat &executor) const;
		virtual void		perform() const = 0;

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class FormNotSigned : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
};

std::ostream				&operator<<(std::ostream &output, const Form &src);

#endif