/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 14:01:47 by schuah            #+#    #+#             */
/*   Updated: 2022/09/03 21:39:55 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#define MAX_VAL 750

int main(void)
{
	{
		std::cout << "\n---------- EX02 Main Test ----------\n" << std::endl;
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
		std::cout << "\n---------- EX02 Default Test ----------\n" << std::endl;
		Array<int> intArray(10);
		
		for (unsigned i = 0; i < intArray.size(); i++)
			intArray[i] = 0;
		std::cout << "Initialized intArray:" << std::endl;
		for (unsigned i = 0; i < intArray.size(); i++)
			std::cout << intArray[i] << " ";
		std::cout << std::endl;

		for (unsigned i = 0; i < intArray.size(); i++)
			intArray[i] = i;

		std::cout << "\nFilled intArray:" << std::endl;
		for (unsigned i = 0; i < intArray.size(); i++)
			std::cout << intArray[i] << " ";
	}
	{
		std::cout << "\n--------------- EX02 Copy Constructor Test ---------------" << std::endl;
		Array<std::string> stringArray(5);

		stringArray[0] = "Sean";
		stringArray[1] = "Chuah";

		std::cout << "Filled stringArray:" << std::endl;
		for (unsigned int i = 0; i < stringArray.size(); i++)
			std::cout << "stringArray[" << i << "] = " << stringArray[i] << std::endl;

		Array<std::string> dupStringArray(stringArray);
		std::cout << "\nDuplicated stringArray:" << std::endl;
		for (unsigned int i = 0; i < dupStringArray.size(); i++)
			std::cout << "dupStringArray[" << i << "] = " << dupStringArray[i] << std::endl;

		dupStringArray[3] = "schuah";

		std::cout << "\nModified dupStringArray:" << std::endl;
		for (unsigned int i = 0; i < dupStringArray.size(); i++)
			std::cout << "dupStringArray[" << i << "] = " << dupStringArray[i] << std::endl;

		std::cout << "\n--------------- EX02 Copy Assignation Operator Test ---------------" << std::endl;
		Array<std::string> smallArray = dupStringArray;
		Array<std::string> bigArray = dupStringArray;

		std::cout << "SmallArray size: " << smallArray.size() << std::endl;
		std::cout << "BigArray size: " << bigArray.size() << std::endl;
		std::cout << "dupStringArray size: " << dupStringArray.size() << std::endl;

		std::cout << "\nCopied smallArray:" << std::endl;
		for (unsigned int i = 0; i < smallArray.size(); i++)
			std::cout << "smallArray[" << i << "] = " << smallArray[i] << std::endl;

		std::cout << "\nCopied bigArray:" << std::endl;
		for (unsigned int i = 0; i < bigArray.size(); i++)
			std::cout << "bigArray[" << i << "] = " << bigArray[i] << std::endl;

		std::cout << "\n--------------- EX02 Exception Test ---------------" << std::endl;
		try
		{
			std::cout << bigArray[6] << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		try
		{
			std::cout << smallArray[-1] << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		try
		{
			Array<int> zeroLengthArray(0);
			std::cout << zeroLengthArray[0] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	return (0);
}
