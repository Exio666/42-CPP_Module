/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 14:22:37 by bsavinel          #+#    #+#             */
/*   Updated: 2022/05/30 14:25:40 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <iostream>

//!------------------------------CONSTRUCTOR----------------------------------

Cure::Cure()
{

}

Cure::Cure(std::string type)
{
	this->type = type;
}

Cure::Cure(const Cure& copy)
{
	*this = copy;
}

//!------------------------------DESTRUCTOR-----------------------------------

Cure::~Cure()
{

}

//!------------------------------OPERATOR-------------------------------------

Cure	&	Cure::operator=(const Cure& copy)
{
	this->type = copy.type;
	return(*this);
}

//!------------------------------FUNCTION-------------------------------------

AMateria* Cure::clone() const
{
	AMateria *cure = new Cure(this->type);
	return cure;
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" <<  std::endl;
}