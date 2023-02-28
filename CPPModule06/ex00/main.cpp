/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 19:43:51 by piboidin          #+#    #+#             */
/*   Updated: 2023/01/02 19:43:53 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	ft_check_max_double(std::string input)
{
	int	dot_counter;
	int	len;
	int	found;

	dot_counter = 0;
	len = 0;
	found = 0;
	if ((input.length() <= 1 && std::isdigit(input[0]) == 0) || (input == "-inff" || input == "+inff" || input == "inff" || input == "-inf" || input == "+inf" || input == "inf" || input == "nanf" || input == "nan"))
		return (0);
	for (size_t i = (input[0] == '-' || input[0] == '+'); i < input.length(); i++)
	{
		if (std::isdigit(input[i]) == 0 && input[i] != '.' && (i != input.length() - 1 && input[i] == 'f'))
			throw std::string("Cannot be converted");
		if (input[i] == '.')
		{
			dot_counter++;
			found = 1;
		}
		if (std::isdigit(input[i]) && found == 0)
			len++;
	}
	if (len < 310)
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

static void	ft_print_char_int(ScalarConverter scalarConverter, double input)
{
	char	c;

	try
	{
		c = scalarConverter.toChar(input);
		std::cout << "char : '" << c << "'" << std::endl;
	}
	catch(std::string &e)
	{
		std::cout << "char : " << e << std::endl;
	}
	try
	{
		std::cout << "int : " << scalarConverter.toInt(input) << std::endl;
	}
	catch(std::string &e)
	{
		std::cout << e << std::endl;
	}
}

int	main(int argc, char **argv)
{
	ScalarConverter	scalarConverter;
	double			input;
	double			d;
	float			f;

	if (argc != 2)
	{
		std::cout << "./convert INPUT" << std::endl;
		return (1);
	}
	try
	{
		if (ft_check_max_double(argv[1]))
			return (0);
		input = scalarConverter.convertInput(argv[1]);
	}
	catch(std::string &e)
	{
		std::cout << e << std::endl;
		return (0);
	}
	try
	{
		ft_print_char_int(scalarConverter, input);
		f = scalarConverter.toFloat(input);
		if (f - static_cast<int>(f) != 0)
			std::cout << "float: " << f << "f" << std::endl;
		else
			std::cout << "float: " << f << ".0f" << std::endl;
		d = scalarConverter.toDouble(input);
		if (d - static_cast<int>(d) != 0)
			std::cout << "double: " << d << std::endl;
		else
			std::cout << "double: " << d << ".0" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return (1);
	}
	return (0);
}
