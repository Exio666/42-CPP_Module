/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 17:09:48 by bsavinel          #+#    #+#             */
/*   Updated: 2022/05/24 19:32:30 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <math.h>
#include <cmath>

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	raw = 0;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	raw = copy.getRawBits();
}

Fixed::Fixed(const int nbr)
{
	std::cout << "Int constructor called" << std::endl;
	raw = nbr * (1 << bits_fracional_part);
}

int take_entier_part(float nbr)
{
	int retour;

	retour = roundf(nbr);
	if (nbr > 0 && nbr < retour)
		retour--;
	else if (nbr < 0 && nbr > retour)
		retour++;
	return (retour);
}

Fixed::Fixed(const float nbr)
{
	std::cout << "Float constructor called" << std::endl;
	raw = roundf(nbr * (1 << bits_fracional_part));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return raw;
}

void Fixed::setRawBits(int const nbr)
{
	std::cout << "setRawBits member function called" << std::endl;
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

std::ostream &operator<<(std::ostream &os, Fixed const &copy)
{
	os << copy.toFloat();
	return (os);
}

void Fixed::operator=(const Fixed &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	raw = copy.getRawBits();
}
