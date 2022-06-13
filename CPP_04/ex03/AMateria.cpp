/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 13:55:53 by bsavinel          #+#    #+#             */
/*   Updated: 2022/06/13 11:41:39 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>

//!------------------------------CONSTRUCTOR----------------------------------

AMateria::AMateria()
{

}

AMateria::AMateria(std::string const & type)
{
	this->type = type;
}

AMateria::AMateria(const AMateria& copy)
{
	if (this == &copy)
		return ;
	*this = copy;
}

//!------------------------------OPERATOR-------------------------------------

AMateria	&	AMateria::operator=(const AMateria& copy)
{
	if (this == &copy)
		return (*this);
	this->type = copy.type;
	return(*this);
}

//!------------------------------FUNCTION-------------------------------------

std::string const & AMateria::getType() const
{
	return (type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "* Materia " << type << " was use on " << target.getName() << " *" << std::endl;
}