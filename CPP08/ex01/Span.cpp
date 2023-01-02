#include "Span.hpp"

Span::Span()
{
    this->_N = 0;
}

Span::Span(unsigned int N)
{
    this->_N = N;
}

Span::Span(const Span &src)
{
    this->_N = src._N;
    this->_storage = src._storage;
    *this = src;
}

Span::~Span()
{

}

Span    &Span::operator=(const Span &src)
{
    this->_N = src._N;
    this->_storage = src._storage;
    return (*this);
}

void	Span::addNumber(int toAdd)
{
	if (this->_storage.size() >= this->_N)
		throw Span::SpanLimitReached();
	this->_storage.push_back(toAdd);
}

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

static long	getDistance(long first, long second)
{
	return (std::abs(first - second));
}

long	Span::shortestSpan() const
{
	std::vector<long>	copy;
	std::vector<long>	result;

	if (this->_storage.size() <= 1)
		throw Span::SpanNotEnoughEle();
	std::copy(this->_storage.begin(), this->_storage.end(), std::back_inserter(copy));
	std::copy(this->_storage.begin(), this->_storage.end() - 1, std::back_inserter(result));
	std::sort(copy.begin(), copy.end());
	std::transform(copy.begin(), copy.end() - 1, copy.begin() + 1, result.begin(), getDistance);
	return (*std::min_element(result.begin(), result.end()));
}

long	Span::longestSpan() const
{
	long	max;
	long	min;

	if (this->_storage.size() <= 1)
		throw Span::SpanNotEnoughEle();
	max = *std::max_element(this->_storage.begin(), this->_storage.end());
	min = *std::min_element(this->_storage.begin(), this->_storage.end());
	return (max - min);
}

static int	print(int n)
{
	std::cout << n << std::endl;
	return (n);
}

void	Span::printSpan() const
{
	std::vector<int>	dummyVector(this->_storage.size(), 0);

	std::transform(this->_storage.begin(), this->_storage.end(), dummyVector.begin(), print);
}

const char	*Span::SpanLimitReached::what() const throw()
{
	return ("Span is full,we can't add numbers");
}

const char	*Span::SpanNotEnoughEle::what() const throw()
{
	return ("Not enough elements in the Span.");
}