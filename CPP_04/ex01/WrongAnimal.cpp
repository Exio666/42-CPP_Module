/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 17:11:13 by bsavinel          #+#    #+#             */
/*   Updated: 2022/06/18 10:09:37 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

//!------------------------------CONSTRUCTOR----------------------------------

WrongAnimal::WrongAnimal()
{
	type = "WrongAnimal";
	std::cout << "WrongAnimal constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
	if (this == &copy)
		return ;
	*this = copy;
	std::cout << "WrongAnimal copy constructor" << std::endl;
}

//!------------------------------DESTRUCTOR-----------------------------------

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor" << std::endl;
}

//!------------------------------OPERATOR-------------------------------------

WrongAnimal	&	WrongAnimal::operator=(const WrongAnimal& copy)
{
	this->type = copy.type;
	return(*this);
}

//!------------------------------FUNCTION-------------------------------------

void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal make sound" << std::endl;
}

std::string		WrongAnimal::getType() const
{
	return (type);
}