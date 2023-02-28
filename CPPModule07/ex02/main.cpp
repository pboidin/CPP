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
#define MAX_VAL 750

int	main(void)
{
	{
		std::cout << "------ MAIN TEST ------\n" << std::endl;
		Array<int> numbers(MAX_VAL);
		int* mirror = new int[MAX_VAL];
		srand(time(NULL));
		for (int i = 0; i < MAX_VAL; i++)
		{
			const int value = rand();
			numbers[i] = value;
			mirror[i] = value;
		}
		//SCOPE
		{
			Array<int> tmp = numbers;
			Array<int> test(tmp);
		}

		for (int i = 0; i < MAX_VAL; i++)
		{
			if (mirror[i] != numbers[i])
			{
				std::cerr << "didn't save the same value!!" << std::endl;
				return 1;
			}
		}
		try
		{
			numbers[-2] = 0;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			numbers[MAX_VAL] = 0;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		for (int i = 0; i < MAX_VAL; i++)
		{
			numbers[i] = rand();
		}
		delete [] mirror;//
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
		std::cout << "\n" << std::endl;
	}
	{
		std::cout << "------ COPY CONSTRUCTOR TEST ------\n" << std::endl;
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
		std::cout << "\n------ THE END ------" << std::endl;
	}
	return (0);
}
