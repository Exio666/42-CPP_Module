/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 17:34:43 by bsavinel          #+#    #+#             */
/*   Updated: 2022/07/09 17:40:44 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <list>
#include <vector>
#include <stack>
#include <set>
#include <deque>
#include <queue>
#include <cstddef>
#include <iterator>
#include <algorithm>

template <class T>
class MutantStack: public std::stack<T>
{
	public:

		typedef typename std::stack<T>::container_type::iterator iterator;
		MutantStack()
		{}
		MutantStack(const MutantStack & copy)
		{
			this = copy;
		}
		~MutantStack()
		{}

		MutantStack & operator=(const MutantStack & copy)
		{
			this->c = copy->c();
			return (*this);
		}

		iterator begin()
		{
			return this->c.begin();
		}
		iterator end()
		{
			return this->c.end();
		}

};

#endif