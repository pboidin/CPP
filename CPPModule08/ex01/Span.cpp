/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 20:02:18 by piboidin          #+#    #+#             */
/*   Updated: 2023/01/02 20:02:19 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(): _N(0)
{
}

Span::Span(unsigned int N): _N(N)
{
}

Span::Span(const Span &src): _N(src._N), _storage(src._storage)
{
}

Span::~Span()
{

}

Span    &Span::operator=(const Span &src)
{
    static_cast<void>(src);
    return (*this);
}

std::ostream	&operator<<(std::ostream &o, Span const &i)
{
	std::vector<int>	list = i.getList();

	for (std::vector<int>::iterator it = list.begin(); it != list.end(); it++)
	{
		std::cout << *it;
		if (it + 1 != list.end())
			std::cout << ";";
	}
	return o;
}

std::vector<int>	Span::getList(void) const
{
	return (_storage);
}

void	Span::addNumber(int const toAdd)
{
	if (_storage.size() >= _N)
		throw Span::SpanMaxSizeException();
	_storage.push_back(toAdd);
}

unsigned int	Span::shortestSpan(void) const
{
	if (!_storage.size())
		throw EmptyArrayException();
	else if (_storage.size() == 1)
		throw LonelyNumException();
	
	std::vector<int>	list(_storage);
	unsigned int		span = longestSpan();

	std::sort(list.begin(), list.end());
	for (std::vector<int>::iterator i = list.begin(); i < list.end() - 1; i++)
	{
		if (static_cast<unsigned int>(*(i + 1) - *i) < span)
			span = *(i + 1) - *i;
	}
	return (span);
}

unsigned int	Span::longestSpan(void) const
{
	if (!_storage.size())
		throw EmptyArrayException();
	else if (_storage.size() == 1)
		throw LonelyNumException();
	std::vector<int>	list(_storage);

	std::sort(list.begin(), list.end());
	return (*(list.end() - 1) - *list.begin());
}
