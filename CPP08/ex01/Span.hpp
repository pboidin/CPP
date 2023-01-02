#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <vector>

class Span
{
    private:
        unsigned int	_N;
		std::vector<int>	_storage;

    public:
        Span();
		Span(unsigned int N);
		Span(const Span &src);
        ~Span();
		Span			&operator=(const Span &src);

		void			addNumber(int toAdd);
		void			addNumber(std::vector<int>::iterator const &begin, std::vector<int>::iterator const &end);
		long			shortestSpan() const;
		long			longestSpan() const;
		void			printSpan() const;

		class SpanLimitReached : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
		class SpanNotEnoughEle : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
};

#endif