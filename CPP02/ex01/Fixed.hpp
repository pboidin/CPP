#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed
{
	public:
		Fixed();
		Fixed(const Fixed &f);
		Fixed(const int raw);
		Fixed(const float raw);
		~Fixed();
		Fixed	&operator=(const Fixed &src);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

	private:
		int					_value;
		static const int	_bits = 8;
};

std::ostream	&operator<<(std::ostream &out, const Fixed &src);

#endif