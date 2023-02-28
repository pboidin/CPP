/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 20:02:22 by piboidin          #+#    #+#             */
/*   Updated: 2023/01/02 20:02:23 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <iterator>

class Span
{
    private:
        const unsigned int	_N;
		std::vector<int>	_storage;

    public:
        Span();
		Span(unsigned int N);
		Span(const Span &src);
        ~Span();
		Span			&operator=(const Span &src);

		std::vector<int>	getList(void) const;
		void				addNumber(int const toAdd);
		unsigned int		shortestSpan(void) const;
		unsigned int		longestSpan(void) const;

		template<typename InputIterator>
		void				addRange(InputIterator begin, InputIterator end);

		class SpanMaxSizeException : public std::exception
		{
			const char *what() const throw()
			{
				return ("Error: Max size has been reached!");
			}
		};

		class EmptyArrayException : public std::exception
		{
			const char *what() const throw()
			{
				return ("Error: Empty Array!");
			}
		};

		class LonelyNumException : public std::exception
		{
			const char * what() const throw()
			{
				return ("Error: Only one number!");
			}
		};
};

template<typename InputIterator>
void	Span::addRange(InputIterator begin, InputIterator end)
{
	while (begin != end)
	{
		if (_storage.size() >= _N)
			throw SpanMaxSizeException();
		_storage.push_back(*begin);
		begin++;
	}
}

std::ostream	&operator<<(std::ostream &o, Span const &i);

#endif
