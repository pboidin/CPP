/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 10:19:38 by schuah            #+#    #+#             */
/*   Updated: 2022/09/06 18:28:12 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <algorithm>
# include <iostream>
# include <vector>

class Span
{
	public:
		/* Orthrodox canonical form */
		Span();
		Span(unsigned int N);
		Span(const Span &src);
		~Span();
		Span			&operator=(const Span &src);

		/* Member functions */
		void			addNumber(int toAdd);
		void			addNumber(std::vector<int>::iterator const &begin, std::vector<int>::iterator const &end);
		long			shortestSpan() const;
		long			longestSpan() const;
		void			printSpan() const;

		/* Exception classes */
		class SpanLimitReached : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
		class SpanNotEnoughElements : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
	private:
		unsigned int		_N;
		std::vector<int>	_storage;
};

#endif
