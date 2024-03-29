/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 20:03:54 by piboidin          #+#    #+#             */
/*   Updated: 2023/01/02 20:03:56 by piboidin         ###   ########.fr       */
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
		MutantStack() : std::stack<T>() {};
		MutantStack(const MutantStack<T> &src) : std::stack<T>(src) {};
		~MutantStack() {};
		MutantStack<T>			&operator=(const MutantStack<T> &src)
		{
			this->c = src.c;
			return (*this);
		};
		typedef typename std::stack<T>::container_type::iterator				iterator;
		typedef typename std::stack<T>::container_type::const_iterator			const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator		reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator	const_reverse_iterator;

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
