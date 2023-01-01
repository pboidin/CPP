#include "main.hpp"

Base	*generate(void)
{
	int	n;

	srand(time(NULL));
	n = rand() % 3;
	if (n == 0)
		return (dynamic_cast<Base *>(new A));
	if (n == 1)
		return (dynamic_cast<Base *>(new B));
	return (dynamic_cast<Base *>(new C));
}

void	identify(Base *p)
{
	if (dynamic_cast<A *>(p) != NULL)
		std::cout << "A" << std::endl;
	if (dynamic_cast<B *>(p) != NULL)
		std::cout << "B" << std::endl;
	if (dynamic_cast<C *>(p) != NULL)
		std::cout << "C" << std::endl;
}

void	identify(Base &p)
{
	if (dynamic_cast<A *>(&p) != NULL)
		std::cout << "A" << std::endl;
	if (dynamic_cast<B *>(&p) != NULL)
		std::cout << "B" << std::endl;
	if (dynamic_cast<C *>(&p) != NULL)
		std::cout << "C" << std::endl;
}

int	main(void)
{
	std::cout << "\n------ RANDOM TEST ------\n" << std::endl;
	Base	*random = generate();

	identify(random);
	identify(*random);

	delete random;
	return (0);
}
