/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 20:03:47 by piboidin          #+#    #+#             */
/*   Updated: 2023/01/02 20:03:49 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	{
		std::cout << "\n---------- MAIN ----------\n" << std::endl;
		MutantStack<int> mutStack;
		mutStack.push(6);
		mutStack.push(17);
		std::cout << mutStack.top() << std::endl;
		mutStack.pop();
		std::cout << mutStack.size() << std::endl;
		mutStack.push(3);
		mutStack.push(5);
		mutStack.push(737);
		mutStack.push(0);
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
		mutStack.push_back(6);
		mutStack.push_back(17);
		std::cout << mutStack.back() << std::endl;
		mutStack.pop_back();
		std::cout << mutStack.size() << std::endl;
		mutStack.push_back(3);
		mutStack.push_back(5);
		mutStack.push_back(737);
		mutStack.push_back(0);
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

		mutStack.push_back(6);
		mutStack.push_back(17);
		std::cout << mutStack.back() << std::endl;
		mutStack.pop_back();
		std::cout << mutStack.size() << std::endl;
		mutStack.push_back(3);
		mutStack.push_back(5);
		mutStack.push_back(737);
		mutStack.push_back(0);
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