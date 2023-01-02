#include "Bureaucrat.hpp"

int main()
{
    std::cout << "\n---------- First Test ----------\n" << std::endl;
	try
    {
        Bureaucrat bur_ex("Bureaucrat1", 1);
        bur_ex.doDecrement();
        std::cout << bur_ex << std::endl;
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        Bureaucrat bur_ex("Bureaucrat2", 150);
        bur_ex.doIncrement();
        std::cout << bur_ex << std::endl;
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
	std::cout << "\n---------- Second Test ----------\n" << std::endl;
	try
    {
        Bureaucrat bur_ex("Bureaucrat3", 0);
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        Bureaucrat bur_ex("Bureaucrat4", 151);
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        Bureaucrat bur_ex("Bureaucrat5", 1);
        bur_ex.doIncrement();
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        Bureaucrat bur_ex("Bureaucrat6", 150);
        bur_ex.doDecrement();
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}