/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 16:16:03 by bsavinel          #+#    #+#             */
/*   Updated: 2022/05/27 15:05:17 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap()
{
	name = "X";
	ClapTrap::name = "X_clap_name";
	HitPoints = 100;
	EnergyPoints = 50;
	Attack_damage = 30;
	Guarding = false;
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
	*this = copy;
	std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
{
	this->name = name;
	ClapTrap::name = name + "_clap_name";
	HitPoints = 100;
	EnergyPoints = 50;
	Attack_damage = 30;
	Guarding = false;
	std::cout << "DiamondTrap constructor with name called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

void DiamondTrap::operator=(const DiamondTrap &copy)
{
	name = copy.name;
	HitPoints = copy.HitPoints;
	EnergyPoints = copy.EnergyPoints;
	Attack_damage = copy.Attack_damage;
	Guarding = copy.Guarding;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "My name is " << name << " or is " << ClapTrap::name << " ?" << std::endl;
}