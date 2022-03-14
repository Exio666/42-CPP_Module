/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 19:18:41 by bsavinel          #+#    #+#             */
/*   Updated: 2022/03/14 15:34:04 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	
}

Weapon::Weapon(std::string name)
{
	type = name;
}

Weapon::~Weapon()
{
	
}

const std::string	Weapon::getType()
{
	return (type);
}

void	Weapon::setType(std::string name)
{
	type = name;
}