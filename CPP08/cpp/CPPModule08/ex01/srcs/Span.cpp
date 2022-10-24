/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 13:09:43 by schuah            #+#    #+#             */
/*   Updated: 2022/09/29 19:03:37 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/* Default constructor function of Span class */
Span::Span()
{
	this->_N = 0;
}

/* Constructor function for unsigned int input of Span class */
Span::Span(unsigned int N)
{
	this->_N = N;
}

/* Copy constructor function for Span class */
Span::Span(const Span &src)
{
	this->_N = src._N;
	this->_storage = src._storage;
	*this = src;
}

/* Destructor function for Span class */
Span::~Span()
{
	
}

/* Copy assignation function for Span class */
Span	&Span::operator=(const Span &src)
{
	this->_N = src._N;
	this->_storage = src._storage;
	return (*this);
}

/* Adds a number to the vector storage */
void	Span::addNumber(int toAdd)
{
	if (this->_storage.size() >= this->_N)
		throw Span::SpanLimitReached();
	this->_storage.push_back(toAdd);
}

/* Adds N numbers to the vector storage */
void	Span::addNumber(std::vector<int>::iterator const &begin, std::vector<int>::iterator const &end)
{
	std::vector<int>	newVector;

	std::copy(begin, end, std::back_inserter(newVector));
	if (newVector.size() + this->_storage.size() > this->_N)
		throw Span::SpanLimitReached();
	this->_storage.insert(this->_storage.end(),
		std::make_move_iterator(newVector.begin()),
		std::make_move_iterator(newVector.end()));
}

/* Returns the differences between first and second as absolute
** First is copy[i], second would be copy[i + 1] */
static long	getDistance(long first, long second)
{
	return (std::abs(first - second));
}

/* Returns the shortest span between all numbers stored
** Using long in case element is of MAX_INT or MIN_INT */
long	Span::shortestSpan() const
{
	std::vector<long>	copy;
	std::vector<long>	result;

	if (this->_storage.size() <= 1)
		throw Span::SpanNotEnoughElements();
	std::copy(this->_storage.begin(), this->_storage.end(), std::back_inserter(copy));
	std::copy(this->_storage.begin(), this->_storage.end() - 1, std::back_inserter(result));
	std::sort(copy.begin(), copy.end());
	std::transform(copy.begin(), copy.end() - 1, copy.begin() + 1, result.begin(), getDistance);
	return (*std::min_element(result.begin(), result.end()));
}

/* Returns the longest span between all numbers stored
** Max_element returns the max element found in the Span
** Min_element returns the min element found in the Span
** LongestSpan = max_element - min_element */
long	Span::longestSpan() const
{
	long	max;
	long	min;

	if (this->_storage.size() <= 1)
		throw Span::SpanNotEnoughElements();
	max = *std::max_element(this->_storage.begin(), this->_storage.end());
	min = *std::min_element(this->_storage.begin(), this->_storage.end());
	return (max - min);
}

/* Used to print a number */
static int	print(int n)
{
	std::cout << n << std::endl;
	return (n);
}

/* Prints everything inside the Span */
void	Span::printSpan() const
{
	std::vector<int>	dummyVector(this->_storage.size(), 0);

	std::transform(this->_storage.begin(), this->_storage.end(), dummyVector.begin(), print);
}

/* Exception function for when a new element is added when Span is full */
const char	*Span::SpanLimitReached::what() const throw()
{
	return ("Span is full, cannot add anymore numbers");
}

/* Exception function for when there are not enough elements for a comparison */
const char	*Span::SpanNotEnoughElements::what() const throw()
{
	return ("There are not enough elements inside the Span for a comparison");
}
