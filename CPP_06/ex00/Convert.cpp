/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 13:48:32 by bsavinel          #+#    #+#             */
/*   Updated: 2022/07/08 22:25:48 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"
#include <iostream>
#include <math.h>
#include <limits.h>

//!------------------------------CONSTRUCTOR----------------------------------

Convert::Convert()
{
	
}

Convert::Convert(std::string name)
{
	_value = name;
	if (isGoodValue())
		feedClass();
}

Convert::Convert(const Convert& copy)
{
	*this = copy;
}

//!------------------------------DESTRUCTOR-----------------------------------

Convert::~Convert()
{

}

//!------------------------------OPERATOR-------------------------------------

Convert	&Convert::operator=(const Convert& copy)
{
	this->_value = copy._value;
	if (this->isGoodValue())
		this->feedClass();
	return(*this);
}

//!------------------------------FUNCTION-------------------------------------

bool	Convert::isGoodValue()
{
	unsigned long	i;
	std::string		tmp(_value);

	if (tmp.compare("inf") == 0 || tmp.compare("inff") == 0 
		|| tmp.compare("-inf") == 0 || tmp.compare("-inff") == 0
		|| tmp.compare("+inf") == 0 || tmp.compare("+inff") == 0
		|| tmp.compare("nan") == 0 || tmp.compare("nanf") == 0)
	{
		_isSpecial = true;
		_goodValue = true;
		return true;
	}
	if (tmp[tmp.size() - 1] == 'f')
		tmp.resize(tmp.size() - 1);
	if (tmp.size() == 3 && tmp[0] == '\'' && tmp[2] == '\'')
	{
		_isChar = true;
		_goodValue = true;
		return true;
	}
	i = 0;
	if (tmp[i] == '-')
		i++;
	while (i < tmp.size())
	{
		if (!isdigit(tmp[i]))
			break;
		i++;
	}
	if (i != tmp.size() && tmp[i] != '.')
	{
		_goodValue = false;
		return false;
	}
	if (tmp[i] == '.' && i + 1 != tmp.size())
		i++;
	while (i < tmp.size())
	{
		if (!isdigit(tmp[i]))
			break;
		i++;
	}
	if (i != tmp.size())
	{
		_goodValue = false;
		return false;
	}
	_goodValue = true;
	return true;
}

void	Convert::feedClass()
{
	if (_isSpecial)
		return ;
	if (_isChar)
	{
		_char = _value[1];
		_int = static_cast<int>(_char);
		_float = static_cast<float>(_char);
		_double = static_cast<double>(_char);
		return ;
	}
	if (_goodValue)
	{
		_double = atof(_value.c_str());
		_char = static_cast<char>(_double);
		_int = static_cast<int>(_double);
		_float = static_cast<float>(_double);
	}
}

void	Convert::print(std::ostream &stream) const
{
	if (_isSpecial)
	{
		if (_value.compare("inff") == 0 || _value.compare("inf") == 0)
			stream	<< "char: impossible" << std::endl
					<< "int: impossible" << std::endl
					<< "float: +inff" << std::endl
					<< "double: +inf" << std::endl;
		if (_value.compare("-inff") == 0 || _value.compare("-inf") == 0)
			stream	<< "char: impossible" << std::endl
					<< "int: impossible" << std::endl
					<< "float: -inff" << std::endl
					<< "double: -inf" << std::endl;
		if (_value.compare("+inff") == 0 || _value.compare("+inf") == 0)
			stream	<< "char: impossible" << std::endl
					<< "int: impossible" << std::endl
					<< "float: +inff" << std::endl
					<< "double: +inf" << std::endl;
		if (_value.compare("nanf") == 0 || _value.compare("nan") == 0)
			stream	<< "char: impossible" << std::endl
					<< "int: impossible" << std::endl
					<< "float: nanf" << std::endl
					<< "double: nan" << std::endl;
	}
	else if (_goodValue)
	{
		if (_double >= ' ' && _double <= '~')
			stream << "char: " << "\'" << _char << "\'" << std::endl;
		else if (_double >= 0 && _double <= 127)
			stream << "char: Non displayable" << std::endl;
		else
			stream << "char: impossible" << std::endl;
		if (_double >= INT_MIN && _double <= INT_MAX)
			stream << "int: " << _int << std::endl;
		else
			stream << "int: impossible" << std::endl;
		if (!isinf(_float) && _float - roundf(_float) == 0 && _float < 1000000 && _float > -1000000)
			stream << "float: " << _float << ".0f" << std::endl;
		else
			stream << "float: " << _float << "f" << std::endl;
		if (!isinf(_double) && _double - roundf(_double) == 0 && _double < 1000000 && _double > -1000000)
			stream << "double: " << _double << ".0" << std::endl;
		else
			stream << "double: " << _double << std::endl;
	}
	else
		stream << "\"" <<  _value << "\" doesn't exist in the type char, int, float, double" << std::endl;
}

std::ostream &operator<<(std::ostream &stream, Convert const &convert)
{
	convert.print(stream);
	return stream;
}