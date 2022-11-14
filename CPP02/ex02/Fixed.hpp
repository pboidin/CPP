/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:52:28 by piboidin          #+#    #+#             */
/*   Updated: 2022/11/14 16:52:29 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed
{
	public:
		/* Constructor & Destructor Functions */
		Fixed();
		Fixed(const Fixed &f);
		Fixed(const int raw);
		Fixed(const float raw);
		~Fixed();

		/* Copy assignation operator function */
		Fixed				&operator=(const Fixed &src);

		/* Comparaison operator functions */
		bool				operator>(Fixed f) const;
		bool				operator<(Fixed f) const;
		bool				operator>=(Fixed f) const;
		bool				operator<=(Fixed f) const;
		bool				operator==(Fixed f) const;
		bool				operator!=(Fixed f) const;

		/* Aithmetics operator functions */
		float				operator+(Fixed f) const;
		float				operator-(Fixed f) const;
		float				operator*(Fixed f) const;
		float				operator/(Fixed f) const;

		/* Incrementation operator functions */
		Fixed				operator++();
		Fixed				operator--();
		Fixed				operator++(int);
		Fixed				operator--(int);

		/* Public member functions */
		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		float				toFloat(void) const;
		int					toInt(void) const;
		static Fixed		&min(Fixed &v1, Fixed &v2);
		static const Fixed	&min(Fixed const &v1, Fixed const &v2);
		static Fixed		&max(Fixed &v1, Fixed &v2);
		static const Fixed	&max(Fixed const &v1, Fixed const &v2);

	private:
		int					_value;
		static const int	_bits = 8;
};

std::ostream	&operator<<(std::ostream &out, const Fixed &src);

#endif
