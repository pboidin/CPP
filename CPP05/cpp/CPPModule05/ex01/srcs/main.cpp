/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 14:43:16 by schuah            #+#    #+#             */
/*   Updated: 2022/08/30 19:31:36 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    std::cout << "\n---------- EX01 First Test ----------\n" << std::endl;
	Bureaucrat bureaucrat("bureaucrat", 69);
	Form lowForm("lowForm", 100, 100);
	Form highForm("highForm", 30, 30);

	std::cout << lowForm << std::endl;
	std::cout << highForm << std::endl;
	bureaucrat.signForm(lowForm);
	bureaucrat.signForm(highForm);
	return (0);
}
