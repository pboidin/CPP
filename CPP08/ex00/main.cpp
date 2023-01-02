#include "easyfind.hpp"

int main(int argc, char **argv)
{
	int						arr1[7] = {5, 10, 25, 42, 84};
	const int				arr2[5] = {-7, -43, -266, 26, 89};
	std::vector<int>		vec1(arr1, arr1 + 5);
	const std::vector<int>	vec2(arr2, arr2 + 5);
	int 					toFind; 

	if (argc != 2)
	{
		std::cout << "./easyfind [ToFind]" << std::endl;
		return (0);
	}
	toFind = std::atoi(argv[1]);
	std::vector<int>::iterator nb1 = easyfind(vec1, toFind);
	if (nb1 != vec1.end())
		std::cout << "Found " << *nb1 << " in Vector1"<< std::endl;
	else
		std::cout << "Not found in Vector1" << std::endl;
	std::vector<int>::const_iterator nb2 = easyfind(vec2, toFind);
	if (nb2 != vec2.end())
		std::cout << "Found " << *nb2 << " in Vector2"<< std::endl;
	else
		std::cout << "Not found in Vector2" << std::endl;
}
