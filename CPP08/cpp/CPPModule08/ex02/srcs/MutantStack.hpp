/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 18:56:08 by schuah            #+#    #+#             */
/*   Updated: 2022/09/07 14:09:36 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iterator>
# include <iostream>
# include <vector>
# include <stack>
# include <list>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		/* Orthrodox canonical form */
		MutantStack() : std::stack<T>() {};
		MutantStack(const MutantStack<T> &src) : std::stack<T>(src) {};
		~MutantStack() {};
		MutantStack<T>			&operator=(const MutantStack<T> &src)
		{
			this->c = src.c;
			return (*this);
		};

		/* Typedef */
		typedef typename std::stack<T>::container_type::iterator				iterator;
		typedef typename std::stack<T>::container_type::const_iterator			const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator		reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator	const_reverse_iterator;

		/* Member functions */
		iterator				begin() {return (this->c.begin());};
		const_iterator			begin() const {return (this->c.begin());};
		iterator				end() {return (this->c.end());};
		const_iterator			end() const {return (this->c.end());};
		reverse_iterator 		rbegin() {return (this->c.rbegin());};
		const_reverse_iterator	rbegin() const {return (this->c.rbegin());};
		reverse_iterator		rend() {return (this->c.rend());};
		const_reverse_iterator	rend() const {return (this->c.rend());};
};

#endif
