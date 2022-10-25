
#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
	public:
		Fixed();
		Fixed(const Fixed &a);
		Fixed(const int input);
		Fixed(const float input);
		~Fixed();
		Fixed	&operator=(const Fixed &src);
		int		getRawBits(void) const;
		void	setRawBits(const int input);
		float	toFloat(void) const;
		int		toInt(void) const;
	private:
		int					_number;
		static const int	_bits = 8;
};

std::ostream	&operator<<(std::ostream &output, const Fixed &src);

#endif
