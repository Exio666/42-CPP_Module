/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 13:52:03 by bsavinel          #+#    #+#             */
/*   Updated: 2022/05/30 14:22:08 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include <iostream>

//!------------------------------CONSTRUCTOR----------------------------------

Ice::Ice()
{

}

Ice::Ice(std::string type)
{
	this->type = type;
}

Ice::Ice(const Ice& copy)
{
	*this = copy;
}

//!------------------------------DESTRUCTOR-----------------------------------

Ice::~Ice()
{

}

//!------------------------------OPERATOR-------------------------------------

Ice	&	Ice::operator=(const Ice& copy)
{
	this->type = copy.type;
	return(*this);
}

//!------------------------------FUNCTION-------------------------------------

AMateria* Ice::clone() const
{
	AMateria *ice = new Ice(this->type);
	return ice;
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" <<  std::endl;
}