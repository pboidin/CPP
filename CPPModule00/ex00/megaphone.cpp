#include <iostream>
#include <string>
#include <locale>

int	main(int argc, char **argv)
{
	std::string	str;
	std::locale loc;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < argc; i++)
		{
			str = argv[i];
			for (std::string::size_type j = 0; j < str.length(); j++)
				std::cout << std::toupper(str[j], loc);
		}
		std::cout << std::endl;
	}
	return (0);
}