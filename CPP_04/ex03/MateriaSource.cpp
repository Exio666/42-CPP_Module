/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 15:50:16 by bsavinel          #+#    #+#             */
/*   Updated: 2022/06/13 11:41:14 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <iostream>

//!------------------------------CONSTRUCTOR----------------------------------

MateriaSource::MateriaSource()
{
	nb_source = 0;
}

MateriaSource::MateriaSource(const MateriaSource& copy)
{
	if (this == &copy)
		return ;
	*this = copy;
}

//!------------------------------DESTRUCTOR-----------------------------------

MateriaSource::~MateriaSource()
{

}

//!------------------------------OPERATOR-------------------------------------

MateriaSource	&	MateriaSource::operator=(const MateriaSource& copy)
{
	if (this == &copy)
		return (*this);
	this->nb_source = copy.nb_source;
	for (int i = 0; i < this->nb_source; i++)
	{
		this->source[i] = copy.source[i];
	}
	return(*this);
}

//!------------------------------FUNCTION-------------------------------------

void	MateriaSource::learnMateria(AMateria * learn)
{
	if (nb_source >= 4)
		std::cout << "The source is full" << std::endl;
	else
	{
		source[nb_source] = learn;
		nb_source++;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{;
	for (int i = 0; i < nb_source; i++)
	{
		if (source[i]->getType().compare(type))
			return (this->source[i]);
	}
	std::cout << "Nothing corespond in this source" <<  std::endl;
	return 0;
}