/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 10:47:17 by schuah            #+#    #+#             */
/*   Updated: 2022/09/02 11:46:51 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template <typename Swap>
void	swap(Swap &a, Swap &b)
{
	Swap	temp;
	
	temp = a;
	a = b;
	b = temp;
}

template <typename Min>
Min	&min(Min &a, Min &b)
{
	return (a < b ? a : b);
}

template <typename Max>
Max	&max(Max &a, Max &b)
{
	return (a > b ? a : b);
}

#endif
