/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 17:09:48 by bsavinel          #+#    #+#             */
/*   Updated: 2022/03/15 19:59:13 by bsavinel         ###   ########.fr       */
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

Fixed::Fixed(const float nbr)
{
	std::cout << "Float constructor called" << std::endl;
	int i;
	float round;

	round = roundf(nbr);
	if (nbr > 0 && nbr < round)
		round--;
	else if (nbr < 0 && nbr > round)
		round++;
	raw = round;
	i = 0;
	while (i < bits_fracional_part)
	{
		raw = raw * 2;
		i++;
	}
	round = fabs(nbr - round);
	while (round != 0)
	{
		round = round * 10;
		if ()
	}
	if (nbr < 0 && raw > 0)
		raw = raw * - 1;
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



void Fixed::operator=(const Fixed &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	raw = copy.getRawBits();
}