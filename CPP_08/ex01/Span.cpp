/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 10:53:59 by bsavinel          #+#    #+#             */
/*   Updated: 2022/07/13 10:25:38 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <stdlib.h>

//!------------------------------CONSTRUCTOR----------------------------------

Span::Span()
{
	_sizeMax = 0;
	_actualSize = 0;
}

Span::Span(unsigned int N)
{
	_sizeMax = N;
	_actualSize = 0;
}

Span::Span(const Span& copy)
{
	_sizeMax = 0;
	*this = copy;
}

//!------------------------------DESTRUCTOR-----------------------------------

Span::~Span()
{
	
}

//!------------------------------OPERATOR-------------------------------------

Span	&	Span::operator=(const Span& copy)
{
	this->_sizeMax = copy._sizeMax;
	this->_actualSize = copy._actualSize;
	this->_tab = copy._tab;
	return(*this);
}

//!------------------------------FUNCTION-------------------------------------

const char* Span::TooMuchNumber::what() const throw()
{
	return "Too much number in this span";
}

const char* Span::ImposibleFonction::what() const throw()
{
	return "Imposible fonction because he number of element is insufisant";
}

void	Span::addNumber(int nb)
{
	if (_tab.size() > _sizeMax - 1)
		throw TooMuchNumber();
	else
	{
		_tab.push_back(nb);
		_actualSize++;
	}
}

int	Span::shortestSpan()
{
	std::vector<int>::iterator	iter;
	std::vector<int>::iterator	tmp;
	int							shortest;
	int							test;

	if (_actualSize <= 1)
		throw ImposibleFonction();
	else
	{
		shortest = abs(_tab[0] - _tab[1]);
		for (iter = _tab.begin(); iter != _tab.end(); iter++)
		{
			tmp = iter;
			if (tmp == _tab.end())
				return (shortest);
			tmp++;
			for (; tmp != _tab.end(); tmp++)
			{
				test = abs(*iter - *tmp);
				if (test < shortest)
					shortest = test;
			}
		}
		return (shortest);
	}
	return (-1);
}

int	Span::longestSpan()
{
	std::vector<int>::iterator	iter;
	int 						max;
	int							min;
	
	if (_actualSize <= 1)
		throw ImposibleFonction();
	else
	{
		min = _tab[0];
		max = _tab[0];
		for (iter = _tab.begin(); iter != _tab.end(); iter++)
		{
			if (*iter > max)
				max = *iter;
			if (*iter < min)
				min = *iter;
		}
		return (max - min);
	}
	return (-1);
}

void	Span::fillSpan(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (_tab.size() + std::distance(begin, end) > _sizeMax)
		throw TooMuchNumber();
	_tab.insert(_tab.begin(), begin, end);
	_actualSize = _tab.size();
}

void	Span::printSpan(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	while (begin != end)
	{
		std::cout << *begin << std::endl;
		begin++;
	}
}

std::vector<int>	&Span::getVector()
{
	return (_tab);
}
const unsigned int		&Span::getActualSize()
{
	return _actualSize;
}

const unsigned int		&Span::getSizeMax()
{
	return _sizeMax;
}