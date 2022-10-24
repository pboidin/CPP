/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 13:07:49 by schuah            #+#    #+#             */
/*   Updated: 2022/08/30 19:07:38 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
	public:
		/* Constructor and destructor functions */
		Fixed();
		Fixed(const Fixed &src);
		Fixed(const int input);
		Fixed(const float input);
		~Fixed();

		/* Copy assignation operator function */
		Fixed				&operator=(const Fixed &src);

		/* Comparison operator functions */
		bool				operator>(Fixed src) const;
		bool				operator<(Fixed src) const;
		bool				operator>=(Fixed src) const;
		bool				operator<=(Fixed src) const;
		bool				operator==(Fixed src) const;
		bool				operator!=(Fixed src) const;

		/* Arithmetic operator functions */
		float				operator+(Fixed src) const;
		float				operator-(Fixed src) const;
		float				operator*(Fixed src) const;
		float				operator/(Fixed src) const;

		/* Post-increment/reduction and Pre-increment/reduction functions */
		Fixed				operator++();
		Fixed				operator--();
		Fixed				operator++(int);
		Fixed				operator--(int);

		/* Public member functions */
		int					getRawBits(void) const;
		void				setRawBits(const int input);
		float				toFloat(void) const;
		int					toInt(void) const;
		static Fixed		&min(Fixed &n1, Fixed &n2);
		static const Fixed	&min(Fixed const &n1, Fixed const &n2);
		static Fixed		&max(Fixed &n1, Fixed &n2);
		static const Fixed	&max(Fixed const &n1, Fixed const &n2);
	private:
		int					_number;
		static const int	_bits = 8;
};

std::ostream	&operator<<(std::ostream &output, const Fixed &src);

#endif
