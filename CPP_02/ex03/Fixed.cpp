/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 17:09:48 by bsavinel          #+#    #+#             */
/*   Updated: 2022/05/25 11:49:42 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <math.h>
#include <cmath>

Fixed::Fixed()
{
	//std::cout << "Default constructor called" << std::endl;
	raw = 0;
}

Fixed::Fixed(const Fixed &copy)
{
	//std::cout << "Copy constructor called" << std::endl;
	raw = copy.getRawBits();
}

Fixed::Fixed(const int nbr)
{
	//std::cout << "Int constructor called" << std::endl;
	raw = nbr * (1 << bits_fracional_part);
}

Fixed::Fixed(const float nbr)
{
	//std::cout << "Float constructor called" << std::endl;
	raw = roundf(nbr * (1 << bits_fracional_part));
}

Fixed::~Fixed()
{
	//std::cout << "Destructor called" << std::endl;
}

/*
 *	Overload operator
 */

std::ostream &operator<<(std::ostream &os, Fixed const &copy)
{
	os << copy.toFloat();
	return (os);
}

void Fixed::operator=(const Fixed &copy)
{
	//std::cout << "Copy assignment operator called" << std::endl;
	raw = copy.getRawBits();
}

bool Fixed::operator<(const Fixed& rhs)
{
	return this->toFloat() < rhs.toFloat();
}

bool Fixed::operator>(const Fixed& rhs)
{
	return this->toFloat() > rhs.toFloat();
}

bool Fixed::operator<=(const Fixed& rhs)
{
	return this->toFloat() <= rhs.toFloat();
}

bool Fixed::operator>=(const Fixed& rhs)
{
	return this->toFloat() >= rhs.toFloat();
}

bool Fixed::operator==(const Fixed& rhs)
{
	return this->toFloat() == rhs.toFloat();
}

bool Fixed::operator!=(const Fixed& rhs)
{
	return this->toFloat() != rhs.toFloat();
}

Fixed Fixed::operator+(const Fixed &rhs)
{
	Fixed retour(this->toFloat() + rhs.toFloat());
	
	return retour;
}

Fixed Fixed::operator-(const Fixed &rhs)
{
	Fixed retour(this->toFloat() - rhs.toFloat());
	
	return retour;
}

Fixed Fixed::operator*(const Fixed &rhs)
{
	Fixed retour(this->toFloat() * rhs.toFloat());
	
	return retour;
}

Fixed Fixed::operator/(const Fixed &rhs)
{
	Fixed retour(this->toFloat() / rhs.toFloat());
	
	return retour;
}

Fixed& Fixed::operator++()
{
	Fixed tmp;

	tmp.setRawBits(1);
	*this = *this + tmp;
	return *this;
}

Fixed& Fixed::operator--()
{
	Fixed tmp;

	tmp.setRawBits(1);
	*this = *this - tmp;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp;
	Fixed retour(*this);

	tmp.setRawBits(1);
	*this = *this + tmp;
	return retour;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp;
	Fixed retour(*this);

	tmp.setRawBits(1);
	*this = *this - tmp;
	return retour;
}

/*
 *	Member fonction
 */

int Fixed::getRawBits() const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return raw;
}

void Fixed::setRawBits(int const nbr)
{
	//std::cout << "setRawBits member function called" << std::endl;
	raw = nbr;
}

int Fixed::toInt() const
{
	return raw / (1 << bits_fracional_part);
}

float Fixed::toFloat() const
{
	return  (float)raw / (float)(1 << bits_fracional_part);
}

Fixed Fixed::max(const Fixed &obj1, const Fixed &obj2)
{
	
	if ((Fixed)obj1 > (Fixed)obj2)
		return (obj1);
	return (obj2);
}

Fixed Fixed::max(Fixed &obj1, Fixed &obj2)
{
	if (obj1 > obj2)
		return (obj1);
	return (obj2);
}

Fixed Fixed::min(const Fixed &obj1, const Fixed &obj2)
{
	if ((Fixed)obj1 < (Fixed)obj2)
		return (obj1);
	return (obj2);
}

Fixed Fixed::min(Fixed &obj1, Fixed &obj2)
{
	if (obj1 < obj2)
		return (obj1);
	return (obj2);
}