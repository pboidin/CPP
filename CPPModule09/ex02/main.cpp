#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
    PmergeMe Pmerge;
    try
    {
        (void)argc;
        Pmerge.Sorter(argv);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}