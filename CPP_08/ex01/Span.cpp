/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 10:53:59 by bsavinel          #+#    #+#             */
/*   Updated: 2022/07/13 16:57:18 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <stdlib.h>
#include <algorithm>

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
	std::vector<int> copy(_tab);
	int shortest;
	
	if (_actualSize <= 1)
		throw ImposibleFonction();
	std::sort(copy.begin(), copy.end());
	shortest = this->longestSpan();
	for (unsigned long int i = 0; i < _tab.size() - 1; i++)
		shortest = std::min(shortest, abs(copy[i] - copy[i + 1]));
	return (shortest);
}

int	Span::longestSpan()
{
	std::vector<int>::iterator	iter;
	std::vector<int>::iterator	max;
	std::vector<int>::iterator	min;
	
	if (_actualSize <= 1)
		throw ImposibleFonction();
	else
	{
		max = std::max_element(_tab.begin(), _tab.end());
		min = std::min_element(_tab.begin(), _tab.end());
		return (*max - *min);
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