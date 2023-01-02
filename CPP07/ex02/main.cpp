/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 20:00:32 by piboidin          #+#    #+#             */
/*   Updated: 2023/01/02 20:00:35 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#define VAL_MAX 750

int	main(void)
{
	{
		std::cout << "\n------ MAIN TEST ------\n" << std::endl;
		Array<int> numbers(VAL_MAX);
		int* mirror = new int[VAL_MAX];
		srand(time(NULL));
		for (int i = 0; i < VAL_MAX; i++)
		{
			const int	val = rand();
			numbers[i] = val;
			mirror[i] = val;
		}
		{
			Array<int> tmp = numbers;
			Array<int> test(tmp);
		}
		for (int i = 0; i < VAL_MAX; i++)
		{
			if (mirror[i] != numbers[i])
			{
				std::cerr << "not the same value!" << std::endl;
				return 1;
			}
		}
		try
		{
			numbers[-2] = 0;
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			numbers[VAL_MAX] = 0;
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
		for (int i = 0; i < VAL_MAX; i++)
		{
			numbers[i] = rand();
		}
		delete [] mirror;
	}
	{
		std::cout << "\n------ DEFAULT TEST ------\n" << std::endl;
		Array<int> intArray(10);

		for (unsigned i = 0; i < intArray.size(); i++)
			intArray[i] = 0;
		std::cout << "Initialized intArray: " << std::endl;
		for (unsigned i = 0; i < intArray.size(); i++)
			std::cout << intArray[i] << " ";
		std::cout << std::endl;
		
		for (unsigned i = 0; i < intArray.size(); i++)
			intArray[i] = i;
		
		std::cout << "\nFilled intArray: " << std::endl;
		for (unsigned i = 0; i < intArray.size(); i++)
			std::cout << intArray[i] << " ";
	}
	{
		std::cout << "\n------ COPY CONSTRUCTOR TEST ------\n" << std::endl;
		Array<std::string> strArray(5);

		strArray[0] = "FRANCE";
		strArray[1] = "ARGENTINE";

		std::cout << "Fill stringArray: " << std::endl;
		for (unsigned int i = 0; i < strArray.size(); i++)
			std::cout << "strArray[" << i << "] = " << strArray[i] << std::endl;
		
		Array<std::string> dupStrArray(strArray);
		std::cout << "\nDuplicate strArray: " << std::endl;
		for (unsigned int i = 0; i < dupStrArray.size(); i++)
			std::cout << "dupStrArray[" << i << "] = " << dupStrArray[i] << std::endl;

		dupStrArray[3] = "BELGIQUE";
		std::cout << "\nModified dupStrArray: " << std::endl;
		for (unsigned int i = 0; i < dupStrArray.size(); i++)
			std::cout << "dupStrArray[" << i << "] = " << dupStrArray[i] << std::endl;

		std::cout << "\n------ COPY ASSIGNATION OPER TEST ------\n" << std::endl;
		Array<std::string>	smallArray = dupStrArray;
		Array<std::string>	bigArray = dupStrArray;

		std::cout << "SmallArray Size: " << smallArray.size() << std::endl;
		std::cout << "BiglArray Size: " << bigArray.size() << std::endl;
		std::cout << "dupStrArray Size: " << dupStrArray.size() << std::endl;

		std::cout << "\nCopied SmallArray: " << std::endl;
		for (unsigned int i = 0; i < smallArray.size(); i++)
			std::cout << "smallArray[" << i << "] = " << smallArray[i] << std::endl;
		
		std::cout << "\nCopied BigArray: " << std::endl;
		for (unsigned int i = 0; i < bigArray.size(); i++)
			std::cout << "smallArray[" << i << "] = " << bigArray[i] << std::endl;

		std::cout << "\n------ EXCEPTION TEST ------\n" << std::endl;
		try
		{
			std::cout << bigArray[6] << std::endl;
		}
		catch(const std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		try
		{
			std::cout << smallArray[-1] << std::endl;
		}
		catch(const std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		try
		{
			Array<int> zeroLenArray(0);
			std::cout << zeroLenArray[0] << std::endl;
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	return (0);
}
