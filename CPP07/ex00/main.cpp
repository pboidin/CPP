#include "whatever.hpp"

int	main(void)
{
	{
		int	a = 6;
		int	b = 9;

		::swap(a, b);
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		std::string c = "string1";
		std::string d = "string2";
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}
	{
		int		a = 21;
		int		b = 42;
		float	c = 18;
		float	d = 3;

		std::cout << "\n------ SWAP TEST ------\n" << std::endl;
		std::cout << "a: " << a << "\tb: " << b << std::endl;
		swap(a, b);
		std::cout << "a: " << a << "\tb: " << b << std::endl;
		swap(a, b);
		std::cout << "a: " << a << "\tb: " << b << std::endl;
		std::cout << "c: " << c << "\td: " << d << std::endl;
		swap(c, d);
		std::cout << "c: " << c << "\td: " << d << std::endl;
		swap(c, d);
		std::cout << "c: " << c << "\td: " << d << std::endl;
		std::cout << "\n------ MIN TEST ------\n" << std::endl;
		std::cout << "MIN between a & b: " << min(a, b) << std::endl;
		std::cout << "MIN between c & d: " << min(c, d) << std::endl;
		std::cout << "MIN between a & a: " << min(a, a) << std::endl;
		std::cout << "\n------ MAX TEST ------\n" << std::endl;
		std::cout << "MAX between a & b: " << max(a, b) << std::endl;
		std::cout << "MAX between c & d: " << max(c, d) << std::endl;
		std::cout << "MAX between a & a: " << max(a, a) << std::endl;
	}
	return (0);
}