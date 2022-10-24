/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 14:43:16 by schuah            #+#    #+#             */
/*   Updated: 2022/08/30 10:05:57 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    std::cout << "\n---------- EX00 First Test ----------\n" << std::endl;
	try
    {
        Bureaucrat bur_ex("Bureaucrat1", 1);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        Bureaucrat bur_ex("Bureaucrat2", 150);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
	std::cout << "\n---------- EX00 Second Test ----------\n" << std::endl;
	try
    {
        Bureaucrat bur_ex("Bureaucrat3", 0);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        Bureaucrat bur_ex("Bureaucrat4", 151);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        Bureaucrat bur_ex("Bureaucrat5", 1);
        bur_ex.becomeSmarter();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        Bureaucrat bur_ex("Bureaucrat6", 150);
        bur_ex.becomeDumber();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}
