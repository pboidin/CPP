/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 10:51:52 by schuah            #+#    #+#             */
/*   Updated: 2022/09/01 17:12:59 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

/* Checks whether input is more than MAX_DOUBLE */
int	check_max_double(std::string input)
{
	int	dot_counter;
	int	truelen;
	int	founddot;

	dot_counter = 0;
	truelen = 0;
	founddot = 0;
	if ((input.length() <= 1 && std::isdigit(input[0]) == 0) ||
		(input == "-inff" || input == "+inff" || input == "inff"
		|| input == "-inf" || input == "+inf" || input == "inf"
		|| input == "nanf" || input == "nan"))
		return (0);
	for (size_t i = (input[0] == '-' || input[0] == '+'); i < input.length(); i++)
	{
		if (std::isdigit(input[i]) == 0 && input[i] != '.' && (i != input.length() - 1 && input[i] == 'f'))
			throw std::string("Cannot be converted");
		if (input[i] == '.')
		{
			dot_counter++;
			founddot = 1;
		}
		if (std::isdigit(input[i]) && founddot == 0)
			truelen++;
	}
	if (truelen < 310)
		return (0);
	if (dot_counter > 1)
	{
		std::cout << "Cannot be converted" << std::endl;
		return (1);
	}
	std::cout << "char : Non displayable" << std::endl;
	std::cout << "int : impossible" << std::endl;
	if (input[0] == '-')
	{
		std::cout << "float : -inff" << std::endl;
		std::cout << "double : -inf" << std::endl;
	}
	else
	{
		std::cout << "float : inff" << std::endl;
		std::cout << "double : inf" << std::endl;
	}
	return (1);
}

/* Print char and int */
static void	print_charint(ScalarConverter scalarConverter, double input)
{
	char	c;

	try
	{
		c = scalarConverter.toChar(input);
		std::cout << "char : '" << c << "'" << std::endl;
	}
	catch (std::string &e)
	{
		std::cout << "char : " << e << std::endl;
	}
	try
	{
		std::cout << "int : " << scalarConverter.toInt(input) << std::endl;
	}
	catch (std::string &e)
	{
		std::cout << e << std::endl;
	}
}

/* std::stod converts string to double */
int main(int ac, char **av)
{
	ScalarConverter scalarConverter;
	double 			input;
	double			d;
	float			f;
	
	if (ac != 2)
	{
		std::cout << "./convert [input]" << std::endl;
		return (1);
	}
	try
	{
		if (check_max_double(av[1]))
			return (0);
		input = scalarConverter.convertInput(av[1]);
	}
	catch(std::string &e)
	{
		std::cout << e << std::endl;
		return (0);
	}
	try
	{
		print_charint(scalarConverter, input);
		f = scalarConverter.toFloat(input);
		if (f - static_cast<int>(f) != 0)
			std::cout << "float : " << f << "f" << std::endl;
		else
			std::cout << "float : " << f << ".0f" << std::endl;
		d = scalarConverter.toDouble(input);
		if (d - static_cast<int>(d) != 0)
			std::cout << "double : " << d << std::endl;
		else
			std::cout << "double : " << d << ".0" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
		return (1);
	}
	return (0);
}
