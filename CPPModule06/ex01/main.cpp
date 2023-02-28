/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 19:44:35 by piboidin          #+#    #+#             */
/*   Updated: 2023/01/02 19:44:37 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

uintptr_t	serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*deserialize(uintptr_t p)
{
	return (reinterpret_cast<Data *>(p));
}

int	main(void)
{
	Data		data;
	Data		*dataPtr;
	uintptr_t	unIntPtr;

	data.name = "PL";
	data.age = 28;
	std::cout << "\n------ BEFORE SERIALIZE ------\n" << std::endl;
	std::cout << "Name: " << data.name << std::endl;
	std::cout << "Age : " << data.age << std::endl;
	std::cout << "Ptr: " << &data << std::endl;
	unIntPtr = serialize(&data);
	std::cout << "\n------ AFTER SERIALIZE ------\n" << std::endl;
	std::cout << "Name: " << data.name << std::endl;
	std::cout << "Age : " << data.age << std::endl;
	std::cout << "Ptr: " << &data << std::endl;
	dataPtr = deserialize(unIntPtr);
	std::cout << "\n------ ADTER DESERIALIZE ------\n" << std::endl;
	std::cout << "Name: " << dataPtr->name << std::endl;
	std::cout << "Age : " << dataPtr->age << std::endl;
	std::cout << "Ptr: " << &dataPtr << std::endl;
	return (0);
}
