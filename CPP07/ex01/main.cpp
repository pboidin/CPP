/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 20:00:19 by piboidin          #+#    #+#             */
/*   Updated: 2023/01/02 20:00:20 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main(void)
{
	std::string	strArray[3] = {"How", "are", "you"};
	int			intArray[3] = {10, 15, 42};
	float		array[3] = {34.65, 42.42, 77.98};

	std::cout << "------ STR TEST ------\n" << std::endl;
	iter(strArray, 3, print);
	std::cout << "\n------ INT TEST ------\n" << std::endl;
	iter(intArray, 3, print);
	std::cout << "\n------ FLOAT TEST ------\n" << std::endl;
	iter(array, 3, print);
	std::cout << "\n------ THE END ------" << std::endl;
	return (0);
}
