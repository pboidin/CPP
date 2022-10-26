#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
	public:
		/* Constructor and destructor functions */
		Point();
		Point(const float x, const float y);
		Point(const Point &src);
		~Point();

		/* Copy assignation operator function */
		Point		&operator=(const Point &src);

		/* Getter functions */
		const Fixed &getX(void) const;
		const Fixed &getY(void) const;
	private:
		const Fixed	_x;
		const Fixed	_y;
};

#endif
