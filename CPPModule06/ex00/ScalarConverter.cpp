/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 19:43:56 by piboidin          #+#    #+#             */
/*   Updated: 2023/01/02 19:43:59 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter(const ScalarConverter &src)
{
	*this = src;
}

ScalarConverter::~ScalarConverter()
{
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &src)
{
	(void)src;
	return (*this);
}

char	ScalarConverter::toChar(double src)
{
	if (std::isnan(src) || std::isinf(src))
		throw std::string("Impossible");
	if (std::isprint(src) == 0)
		throw std::string("Non displayable");
	return (static_cast<char>(src));
}

int		ScalarConverter::toInt(double src)
{
	long out;

	out = static_cast<long>(src);
	if (std::isnan(src) || std::isinf(src) || out < INT_MIN || out > INT_MAX)
		throw std::string("Impossible");
	return (static_cast<int>(src));
}

float	ScalarConverter::toFloat(double src)
{
	return (static_cast<float>(src));
}

double	ScalarConverter::toDouble(double src)
{
	return (static_cast<double>(src));
}

double	ScalarConverter::convertInput(std::string input)
{
	int	dot_counter;

	dot_counter = 0;
	if (input.length() <= 1 && std::isdigit(input[0]) == 0)
		return (static_cast<int>(input[0]));
	if ((input != "-inff" && input != "+inff" && input != "inff" && input != "-inf" && input != "+inf" && input != "inf" && input != "nanf" && input != "nan"))
	{
		for (size_t i = (input[0] == '-' || input[0] == '+'); i < input.length(); i++)
		{
			if (std::isdigit(input[i]) == 0 && input[i] != '.' && input[input.length() - 1] != 'f')
				throw std::string("Cannot be converted");
			if (input[i] == '.')
				dot_counter++;
		}
	}
	if (dot_counter > 1)
		throw std::string("Cannot be converted");
	return (atof(input.c_str()));
}
