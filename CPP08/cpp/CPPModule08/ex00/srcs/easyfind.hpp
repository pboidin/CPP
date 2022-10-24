/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 18:40:49 by schuah            #+#    #+#             */
/*   Updated: 2022/09/06 14:16:10 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <iostream>
# include <vector>

/* Container.begin() points to the first element of the vector
** Container.end() points to the last element of the vector
** Std::find returns the element if it is found inside the vector,
** else returns the end instead */
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
