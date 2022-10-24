#include <iostream>
#include <string>

int	main(void)
{
	std::string	string;
	std::string	*stringPTR;
	std::string	&stringREF = string;

	string = "HI THIS IS BRAIN";
	stringPTR = &string;

	std::cout << "Memory Address of the string: " << &string << std::endl;
	std::cout << "Memory Address held in stringPTR: " << stringPTR << std::endl;
	std::cout << "Mempry Address held in stringREF: " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "The value of the string: " << string << std::endl;
	std::cout << "The value pointed by stringPTR: " << *stringPTR << std::endl;
	std::cout << "The value pointed by stringREF: " << stringREF << std::endl;
	return (0);
}