/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 20:01:58 by piboidin          #+#    #+#             */
/*   Updated: 2023/01/02 20:01:59 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <iostream>
# include <vector>

template<typename T>
typename T::iterator	easyfind(T &container, const int toFind)
{
	return (std::find(container.begin(), container.end(), toFind));
}

template<typename T>
typename T::const_iterator	easyfind(const T &container, const int toFind)
{
	return (std::find(container.begin(), container.end(), toFind));
}

#endif
