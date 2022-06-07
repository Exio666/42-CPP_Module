/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 10:53:59 by bsavinel          #+#    #+#             */
/*   Updated: 2022/06/07 16:46:17 by bsavinel         ###   ########.fr       */
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
	for (unsigned int i = 0; i < copy._actualSize; i++)
	{
		this->_tab.push_back(copy._tab[i]);
	}
	return(*this);
}

//!------------------------------FUNCTION-------------------------------------

const char* Span::TooMuchNumber::what() const throw()
{
	return "Too much number in this span";
}

const char* Span::ImposibleFonction::what() const throw()
{
	return "Imposible fonction because he number is not sufisant";
}

void	Span::addNumber(int nb)
{
	if (_tab.size() >= _sizeMax - 1)
		throw TooMuchNumber();
	else
	{
		_tab.push_back(nb);
		_actualSize++;
	}
}

int Span::shortestSpan()
{
	if (_actualSize <= 1)
		throw ImposibleFonction();
	else
	{
		unsigned int	shortestSpan = abs(_tab[0] - _tab[1]);
		for (unsigned int i = 1; i < _actualSize; i++)
		{
			if ((unsigned int)abs(_tab[i - 1] - _tab[i]) < shortestSpan)
				shortestSpan = abs(_tab[i - 1] - _tab[i]);
		}
		return (shortestSpan);
	}
	return (-1);
}

int Span::longestSpan()
{
	if (_actualSize <= 1)
		throw ImposibleFonction();
	else
	{
		unsigned int	longestSpan = abs(_tab[0] - _tab[1]);
		for (unsigned int i = 1; i < _actualSize; i++)
		{
			if ((unsigned int)abs(_tab[i - 1] - _tab[i]) > longestSpan)
				longestSpan = abs(_tab[i - 1] - _tab[i]);
		}
		return (longestSpan);
	}
	return (-1);
}

void Span::fillSpan(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (_tab.size() + std::distance(begin, end) > _sizeMax)
		throw TooMuchNumber();
	_tab.insert(_tab.begin(), begin, end);
}

void	Span::printSpan(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	while (begin != end)
	{
		std::cout << *begin << std::endl;
		begin++;
	}
}

std::vector<int> &Span::getVector()
{
	return (_tab);
}