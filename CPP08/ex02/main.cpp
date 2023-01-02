#include "MutantStack.hpp"

int main()
{
	{
		std::cout << "\n---------- MAIN ----------\n" << std::endl;
		MutantStack<int> mutStack;
		mutStack.push(8);
		mutStack.push(42);
		std::cout << mutStack.top() << std::endl;
		mutStack.pop();
		std::cout << mutStack.size() << std::endl;
		mutStack.push(54);
		mutStack.push(23);
		mutStack.push(951);
		mutStack.push(10);
		MutantStack<int>::iterator it = mutStack.begin();
		MutantStack<int>::iterator ite = mutStack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mutStack);
	}
	{
		std::cout << "\n---------- LIST ----------\n" << std::endl;
		std::list<int> mutStack;
		mutStack.push_back(8);
		mutStack.push_back(42);
		std::cout << mutStack.back() << std::endl;
		mutStack.pop_back();
		std::cout << mutStack.size() << std::endl;
		mutStack.push_back(54);
		mutStack.push_back(23);
		mutStack.push_back(951);
		mutStack.push_back(10);
		std::list<int>::iterator it = mutStack.begin();
		std::list<int>::iterator ite = mutStack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int, std::list<int> > s(mutStack);
	}
	{
		std::cout << "\n---------- VECTOR ----------\n" << std::endl;
		std::vector<int> mutStack;

		mutStack.push_back(8);
		mutStack.push_back(42);
		std::cout << mutStack.back() << std::endl;
		mutStack.pop_back();
		std::cout << mutStack.size() << std::endl;
		mutStack.push_back(54);
		mutStack.push_back(23);
		mutStack.push_back(951);
		mutStack.push_back(10);
		std::vector<int>::iterator it = mutStack.begin();
		std::vector<int>::iterator ite = mutStack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int, std::vector<int> > s(mutStack);
	}
	return 0;
}