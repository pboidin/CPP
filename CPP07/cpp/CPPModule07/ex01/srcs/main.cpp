/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 11:50:04 by schuah            #+#    #+#             */
/*   Updated: 2022/09/02 13:16:49 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	std::string	stringArray[3] = {"Hi", "Hello", "World"};
	int			intArray[3] = {42, 24, 69};
	float 		array[3] = {42.69, 2.43, 69.123};

	std::cout << "\n---------- EX01 String Test ----------\n" << std::endl;
	iter(stringArray, 3, print);
	std::cout << "\n---------- EX01 Int Test ----------\n" << std::endl;
	iter(intArray, 3, print);
	std::cout << "\n---------- EX01 Float Test ----------\n" << std::endl;
	iter(array, 3, print);
	return (0);
}
