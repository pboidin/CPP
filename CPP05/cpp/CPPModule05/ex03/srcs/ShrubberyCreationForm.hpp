/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 21:32:02 by schuah            #+#    #+#             */
/*   Updated: 2022/08/31 11:24:36 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <fstream>
# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	public:
		/* Orthrodox canonical form */
		ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm &src);
		ShrubberyCreationForm(const std::string target);
		~ShrubberyCreationForm();
		ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &src);

		/* Member functions */
		void					performAction() const;
	private:
		std::string				_target;
};

#endif
