/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 15:50:16 by bsavinel          #+#    #+#             */
/*   Updated: 2022/05/30 18:47:56 by bsavinel         ###   ########.fr       */
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
	*this = copy;
}

//!------------------------------DESTRUCTOR-----------------------------------

MateriaSource::~MateriaSource()
{

}

//!------------------------------OPERATOR-------------------------------------

MateriaSource	&	MateriaSource::operator=(const MateriaSource& copy)
{
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
		*source[nb_source] = *learn;
		nb_source++;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{;
	for (int i = 0; i < nb_source; i++)
	{
		if (source[i]->getType().compare(type))
			return (new source[i]);
	}
	std::cout << "Nothing corespond in this source" <<  std::endl;
	return 0;
}