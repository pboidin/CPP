/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 17:37:45 by schuah            #+#    #+#             */
/*   Updated: 2022/09/01 18:18:59 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

uintptr_t	serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

/* Reinterpret_cast typecasts any pointer to any other pointer */
int	main(void)
{
	Data		data;
	Data		*dataPointer;
	uintptr_t	unsignedIntPointer;

	data.name = "Sean";
	data.age = 20;
	std::cout << "\n---------- EX01 Before Serialize ----------\n" << std::endl;
	std::cout << "Name: " << data.name << std::endl;
	std::cout << "Age: " << data.age << std::endl;
	std::cout << "Pointer: " << &data << std::endl;
	unsignedIntPointer = serialize(&data);
	std::cout << "\n---------- EX01 Serialized ----------\n" << std::endl;
	std::cout << "Name: " << data.name << std::endl;
	std::cout << "Age: " << data.age << std::endl;
	std::cout << "Pointer: " << &data << std::endl;
	dataPointer = deserialize(unsignedIntPointer);
	std::cout << "\n---------- EX01 Deserialized ----------\n" << std::endl;
	std::cout << "Name: " << dataPointer->name << std::endl;
	std::cout << "Age: " << dataPointer->age << std::endl;
	std::cout << "Pointer: " << &dataPointer << std::endl;
	return (0);
}
