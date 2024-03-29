/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 20:00:01 by piboidin          #+#    #+#             */
/*   Updated: 2023/01/02 20:00:02 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template <typename Swap>
void	swap(Swap &a, Swap &b)
{
	Swap	tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template <typename Min>
Min		&min(Min &a, Min &b)
{
	return (a < b ? a : b);
}

template <typename Max>
Max		&max(Max &a, Max &b)
{
	return (a > b ? a : b);
}

#endif
