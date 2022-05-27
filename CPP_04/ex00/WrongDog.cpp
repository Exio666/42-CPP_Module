/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 17:10:45 by bsavinel          #+#    #+#             */
/*   Updated: 2022/05/27 17:16:17 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"
#include <iostream>

//!------------------------------CONSTRUCTOR----------------------------------

WrongDog::WrongDog()
{
	type = "WrongDog";
	std::cout << "WrongDog constructor" << std::endl;
}

WrongDog::WrongDog(const WrongDog& copy)
{
	*this = copy;
	std::cout << "WrongDog copy constructor" << std::endl;
}

//!------------------------------DESTRUCTOR-----------------------------------

WrongDog::~WrongDog()
{
	std::cout << "WrongDog destructor" << std::endl;
}

//!------------------------------OPERATOR-------------------------------------

WrongDog	&	WrongDog::operator=(const WrongDog& copy)
{
	this->type = copy.type;
	return(*this);
}

//!------------------------------FUNCTION-------------------------------------

void	WrongDog::makeSound() const
{
	std::cout << "Ouf ouf" << std::endl;
}