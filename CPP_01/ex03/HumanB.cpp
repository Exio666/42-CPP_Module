/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 19:19:45 by bsavinel          #+#    #+#             */
/*   Updated: 2022/03/14 16:24:08 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"
#include <iostream>

HumanB::~HumanB()
{
	return ;
}

HumanB::HumanB(std::string str): weapon(NULL), name(str) 
{
	return ;
}

void HumanB::setWeapon(Weapon &arm)
{
	weapon = &arm;
}


void HumanB::attack()
{
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}