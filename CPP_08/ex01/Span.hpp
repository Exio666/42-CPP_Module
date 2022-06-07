/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 10:53:56 by bsavinel          #+#    #+#             */
/*   Updated: 2022/06/07 16:15:31 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <exception>
#include <iterator>
#include <vector>

class Span
{
	public:
		Span();
		Span(unsigned int N);
		Span(const Span & copy);
		~Span();

		void	addNumber(int nb);
		int shortestSpan();
		int longestSpan();
		void	fillSpan(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		std::vector<int> &getVector();
		void	printSpan(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		Span & operator=(const Span & copy);

		class TooMuchNumber: public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class ImposibleFonction: public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

	private:
		unsigned int		_sizeMax;
		unsigned int		_actualSize;
		std::vector<int>	_tab;
};

#endif