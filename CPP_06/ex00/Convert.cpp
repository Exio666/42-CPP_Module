/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 13:48:32 by bsavinel          #+#    #+#             */
/*   Updated: 2022/07/07 13:46:46 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"
#include <iostream>
#include <stdlib.h> 
#include <math.h>
#include <errno.h>  
#include <limits.h>

//!------------------------------CONSTRUCTOR----------------------------------

Convert::Convert()
{
	
}

Convert::Convert(std::string name)
{
	_value = name;
	if (isSpecial())
		printSpecial();
	else if (isChar())
		printChar();
	else if (isInt())
		printInt();
	else if (isFloat())
		printFloat();
	else if (isDouble())
		printDouble();
	else
		printNothing();
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
	return(*this);
}

//!------------------------------FUNCTION-------------------------------------

void	Convert::printNothing()
{
	std::cout << "\"" <<  _value << "\" doesn't exist in the type char, int, float, double" << std::endl;
}

bool	Convert::isSpecial()
{
	if (_value.compare("-inff") == 0 || _value.compare("-inf") == 0)
		return (true);
	if (_value.compare("+inff") == 0 || _value.compare("+inf") == 0)
		return (true);
	if (_value.compare("nanf") == 0 || _value.compare("nan") == 0)
		return (true);
	return (false);
}

void	Convert::printSpecial()
{
	if (_value.compare("-inff") == 0 || _value.compare("-inf") == 0)
		std::cout	<< "char: impossible" << std::endl
					<< "int: impossible" << std::endl
					<< "float: -inff" << std::endl
					<< "double: -inf" << std::endl;
	if (_value.compare("+inff") == 0 || _value.compare("+inf") == 0)
		std::cout	<< "char: impossible" << std::endl
					<< "int: impossible" << std::endl
					<< "float: +inff" << std::endl
					<< "double: +inf" << std::endl;
	if (_value.compare("nanf") == 0 || _value.compare("nan") == 0)
		std::cout	<< "char: impossible" << std::endl
					<< "int: impossible" << std::endl
					<< "float: nanf" << std::endl
					<< "double: nan" << std::endl;
}

bool	Convert::isChar()
{
	if (_value.size() == 3 && _value[0] == '\'' && _value[2] == '\'')
		return (true);
	return (false);
}

void	Convert::printChar()
{
	std::cout	<< "char: " << _value << std::endl
				<< "int: " << static_cast<int>(_value[1]) << std::endl
				<< "float: " << static_cast<float>(_value[1]) << ".0f" << std::endl
				<< "double: " << static_cast<double>(_value[1]) << ".0" << std::endl;
}

bool	Convert::isInt()
{
	unsigned long	i;
	long int		nb;

	i = 0;
	if (_value[0] == '-')
		i++;
	if (_value.size() - i > 10 || _value.size() - i <= 0)
		return false;
	while (i < _value.size())
	{
		if (!isdigit(_value[i]))
			return false;
		i++;
	}
	nb = atol(_value.c_str());
	if (nb < -2147483648 || nb > 2147483647)
		return false;
	return true;
}

void	Convert::printInt()
{
	int nb;
	
	nb = atoi(_value.c_str());
	if (nb >= ' ' && nb <= '~')
		std::cout	<< "char: " << "\'" << static_cast<char>(nb) << "\'" << std::endl;
	else
		std::cout	<< "char: impossible" << std::endl;
	std::cout	<< "int: " << nb << std::endl
				<< "float: " << static_cast<float>(nb) << ".0f" << std::endl
				<< "double: " << static_cast<double>(nb) << ".0" << std::endl;
}

bool	Convert::isFloat()
{
	unsigned long	i;
	
	i = 0;
	if (_value[i] == '-')
		i++;
	if (_value.size() - i < 4 || _value[_value.size() - 1] != 'f')
		return false;
	while (i < _value.size() - 1)
	{
		if (!isdigit(_value[i]))
			break;
		i++;
	}
	if (i >= _value.size() - 2 || _value[i] != '.')
		return false;
	i++;
	while (i < _value.size())
	{
		if (!isdigit(_value[i]))
			break;
		i++;
	}
	if (i >= _value.size() || _value[i] != 'f')
		return false;

	double nb;
	char *pEnd;
	nb = strtod(_value.c_str(), &pEnd);
	if (errno == ERANGE || (nb > 0 && (nb > __FLT_MAX__ || nb < __FLT_MIN__)) ||  (nb < 0 && (nb < -__FLT_MAX__ || nb > -__FLT_MIN__)))
		return false;
	_value.resize(_value.size() - 1);
	return true;
}

void	Convert::printFloat()
{
	float nb;
	
	nb = atof(_value.c_str());
	if (nb >= ' ' && nb <= '~')
		std::cout	<< "char: " << "\'" << static_cast<char>(nb) << "\'" << std::endl;
	else
		std::cout	<< "char: impossible" << std::endl;
	std::cout	<< "int: " << static_cast<int>(nb) << std::endl;
	if (nb - roundf(nb) == 0 && nb < 1000000 && nb > -1000000)
		std::cout	<< "float: " << nb << ".0f" << std::endl
					<< "double: " << static_cast<double>(nb) << ".0" << std::endl;
	else
		std::cout	<< "float: " << nb << "f" << std::endl
					<< "double: " << static_cast<double>(nb) << std::endl;
}

bool	Convert::isDouble()
{
	unsigned long	i;
	
	if (_value.size() < 3)
		return false;
	i = 0;
	if (_value[i] == '-')
		i++;
	while (i < _value.size())
	{
		if (!isdigit(_value[i]))
			break;
		i++;
	}
	if (i >= _value.size() - 1 || _value[i] != '.')
		return false;
	i++;
	while (i < _value.size())
	{
		if (!isdigit(_value[i]))
			return false;
		i++;
	}
	
	double nb;
	char *pEnd;
	nb = strtod(_value.c_str(), &pEnd);
	if (errno == ERANGE || (nb > 0 && (nb > __DBL_MAX__ || nb < __DBL_MIN__)) ||  (nb < 0 && (nb < -__DBL_MAX__ || nb > -__DBL_MIN__)))
		return false;
	return true;
}

void	Convert::printDouble()
{
	double	nb;
	char	*pEnd;
	
	nb = strtod(_value.c_str(), &pEnd);
	if (nb >= ' ' && nb <= '~')
		std::cout	<< "char: " << "\'" << static_cast<char>(nb) << "\'" << std::endl;
	else
		std::cout	<< "char: impossible" << std::endl;
	if (nb >= INT_MIN && nb <= INT_MAX)
		std::cout	<< "int: " << static_cast<int>(nb) << std::endl;
	else
		std::cout	<< "int: not in range of int" << std::endl;
	if (nb == 0 || (nb > 0 && (nb <= __FLT_MAX__ && nb >= __FLT_MIN__)) ||  (nb < 0 && (nb >= -__FLT_MAX__ && nb <= -__FLT_MIN__)))
	{
		if (nb - roundf(nb) == 0 && nb < 1000000 && nb > -1000000)
			std::cout	<< "float: " << static_cast<float>(nb) << ".0f" << std::endl;
		else
			std::cout	<< "float: " << static_cast<float>(nb) << "f" << std::endl;
	}
	else
		std::cout	<< "float: not in range of float" << std::endl;
	if (nb - roundf(nb) == 0 && nb < 1000000 && nb > -1000000)
		std::cout	<< "double: " << nb << ".0" << std::endl;
	else
		std::cout	<< "double: " << nb << std::endl;
}
