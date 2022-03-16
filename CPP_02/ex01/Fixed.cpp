/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 17:09:48 by bsavinel          #+#    #+#             */
/*   Updated: 2022/03/16 15:19:29 by bsavinel         ###   ########.fr       */
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
	int i;

	i = 0;
	raw = nbr;
	while (i < bits_fracional_part)
	{
		raw = raw * 2;
		i++;
	}
	if (nbr < 0 && raw > 0)
		raw = raw * - 1;
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
	int 	i;
	/*int 	entier_part;
	int		float_part;
	float	pass_virgule;
	*/float	copy;

	//entier_part = take_entier_part(nbr);
	i = 0;
	copy = nbr;
	while (i < bits_fracional_part + 1)
	{
		copy = copy * 2;
		i++;
	}
	raw = take_entier_part(copy);
	/*while (i < bits_fracional_part)
	{
		entier_part = entier_part * 2;
		i++;
	}
	pass_virgule = fabs(nbr - take_entier_part(nbr));
	i = 0;
	while(i < bits_fracional_part)
	{
		pass_virgule = pass_virgule * 2;
		i++;
	}
	float_part = take_entier_part(pass_virgule);
	raw = entier_part + float_part;
	if (nbr < 0 && raw > 0)
		raw = raw * - 1;*/
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
	int i;
	int retour;

	i = 0;
	retour = raw;
	while (i < bits_fracional_part + 1)
	{
		retour = retour / 2;
		i++;
	}
	return (retour);
}

float Fixed::toFloat() const
{
	int i;
	float retour;

	i = 0;
	retour = raw;
	while (i < bits_fracional_part + 1)
	{
		retour = retour / 2;
		i++;
	}
	return (retour);
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
