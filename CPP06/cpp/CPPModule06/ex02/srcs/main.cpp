/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 18:16:15 by schuah            #+#    #+#             */
/*   Updated: 2022/09/01 18:41:37 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Base
{
	public:
		virtual	~Base() {};
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

/* Randomly instanciates A, B or C and returns the instance as a Base pointer */
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

/* Prints the actual type of the object pointed */
void	identify(Base *p)
{
	if (dynamic_cast<A *>(p) != NULL)
		std::cout << "A" << std::endl;
	if (dynamic_cast<B *>(p) != NULL)
		std::cout << "B" << std::endl;
	if (dynamic_cast<C *>(p) != NULL)
		std::cout << "C" << std::endl;
}

/* Prints the actual type of the object pointed without using a pointer inside this function */
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
	std::cout << "\n---------- EX02 Random Test ----------\n" << std::endl;
    Base *random = generate();
    
    identify(random);
    identify(*random);

    delete random;
    return (0);
}
