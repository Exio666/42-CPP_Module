/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 15:38:00 by bsavinel          #+#    #+#             */
/*   Updated: 2022/05/31 11:30:46 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>

//!------------------------------CONSTRUCTOR----------------------------------

Character::Character()
{
	for (int i = 0; i < 4; i++)
		place_take[i] = false;
	nb_materia = 0;
	name = "Somebody";
}

Character::Character(const std::string name)
{
	for (int i = 0; i < 4; i++)
		place_take[i] = false;
	nb_materia = 0;
	this->name = name;
}

Character::Character(const Character& copy)
{
	*this = copy;
}

//!------------------------------DESTRUCTOR-----------------------------------

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (place_take[i] == true)
		{
			delete inventory[i];
		}
	}
}

//!------------------------------OPERATOR-------------------------------------

Character	&Character::operator=(const Character& copy)
{
	int i;
	
	this->name = copy.name;
	this->nb_materia = copy.nb_materia;
	i = 0;
	while (i < nb_materia)
	{
		this->inventory[i] = copy.inventory[i];
		i++;
	}
	for (int i = 0; i < 4; i++)
		this->place_take[i] = copy.place_take[i];
	return(*this);
}

//!------------------------------FUNCTION-------------------------------------

std::string const & Character::getName() const
{
	return (name);
}

void	Character::equip(AMateria* m)
{
	if (nb_materia >= 4)
	{
		std::cout << "Inventory is full" << std::endl;
		return ;
	}
	else
	{
		for (int i = 0; i < 4; i++)
		{
			if (place_take[i] == false)
			{
				nb_materia++;
				inventory[i] = m;
				place_take[i] = true;
				return ;
			}
		}
	}
}

void Character::unequip(int idx)
{
	if (idx > nb_materia || idx <= 0)
	{
		std::cout << "The materia doesn't exist" <<  std::endl;
	}
	else
	{
		nb_materia--;
		place_take[idx] = false;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx > nb_materia || idx < 0 || place_take[idx] == false)
	{
		std::cout << "The materia doesn't exist" <<  std::endl;
	}
	else
		inventory[idx]->use(target);
}
