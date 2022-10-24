/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 11:50:17 by schuah            #+#    #+#             */
/*   Updated: 2022/09/02 13:07:32 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename Iter>
void	iter(Iter *address, int length, void(*func)(Iter &ref))
{
	if (address == NULL || length == 0 || func == NULL)
		return ;
	for (int i = 0; i < length; i++)
		func(address[i]);
}

template <typename Print>
void	print(Print data)
{
	std::cout << data << std::endl;
}

#endif
