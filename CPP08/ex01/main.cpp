#include "Span.hpp"

int	main(void)
{
	{
		std::cout << "\n---------- MAIN ----------\n" << std::endl;
		Span	span = Span(5);

		span.addNumber(6);
		span.addNumber(3);
		span.addNumber(17);
		span.addNumber(9);
		span.addNumber(11);
		std::cout << span.shortestSpan() << std::endl;
		std::cout << span.longestSpan() << std::endl;
	}
	{
		std::cout << "\n---------- FIRST SHORTLONG ----------\n" << std::endl;
		Span	span = Span(4);

		span.addNumber(-2);
		span.addNumber(-1);
		span.addNumber(2147483647);
		span.addNumber(-2147483648);
		std::cout << span.shortestSpan() << std::endl;
		std::cout << span.longestSpan() << std::endl;
	}
	{
		std::cout << "\n---------- SECOND SHORLONG----------\n" << std::endl;
		Span	span = Span(2);

		span.addNumber(0);
		span.addNumber(0);
		std::cout << span.shortestSpan() << std::endl;
		std::cout << span.longestSpan() << std::endl;
	}
    {
		std::cout << "\n---------- ERROR ----------\n" << std::endl;
        Span span = Span(1);
        try
        {
			span.addNumber(1);
            span.addNumber(1);
			std::cout << "No Error" << std::endl;
        }
        catch(const std::exception &e)
        {
			std::cerr << e.what() << std::endl;
        }
		try
        {
			span.shortestSpan();
			std::cout << "No Error" << std::endl;
        }
        catch(const std::exception &e)
        {
			std::cerr << e.what() << std::endl;
        }
		try
        {
			span.longestSpan();
			std::cout << "No Error" << std::endl;
        }
        catch(const std::exception &e)
        {
			std::cerr << e.what() << std::endl;
        }
    }
	{
		std::cout << "\n---------- RANGEFILL1 ----------\n" << std::endl;
		Span	span = Span(5);

		try
		{
			span.addNumber(69);
			span.addNumber(10);
			std::vector<int> vec(3, 3);
			span.addNumber(vec.begin(), vec.end());
			std::cout << "No Error" << std::endl;
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		std::cout << "\n---------- RANGEFILL2 ----------\n" << std::endl;
		Span	span = Span(10000);
		std::vector<int> vec(9999, 0);

		try
		{
			span.addNumber(10);
			span.addNumber(vec.begin(), vec.end());
			std::cout << "No Error" << std::endl;
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	return (0);
}
