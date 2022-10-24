/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 10:52:36 by schuah            #+#    #+#             */
/*   Updated: 2022/09/01 14:54:42 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# include <limits>
# include <cmath>

class ScalarConverter
{
	public:
		/* Orthrodox canonical form */
		ScalarConverter();
		ScalarConverter(const ScalarConverter &src);
		~ScalarConverter();
		ScalarConverter	&operator=(const ScalarConverter &src);

		/* Member functions */
		char	toChar(double src);
		int		toInt(double src);
		float	toFloat(double src);
		double	toDouble(double src);
		double	convertInput(std::string input);

	private:
};

#endif
