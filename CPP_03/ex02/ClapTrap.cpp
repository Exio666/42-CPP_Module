/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 17:22:44 by bsavinel          #+#    #+#             */
/*   Updated: 2022/05/25 17:54:41 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	*this = copy;
	std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	HitPoints = 10;
	EnergyPoints = 10;
	Attack_damage = 0;
	std::cout << "ClapTrap constructor with name called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

void ClapTrap::operator=(const ClapTrap &copy)
{
	name = copy.name;
	HitPoints = copy.HitPoints;
	EnergyPoints = copy.EnergyPoints;
	Attack_damage = copy.Attack_damage;
}

void ClapTrap::attack(const std::string& target)
{
	if (EnergyPoints > 0 && HitPoints > 0)
	{
		std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << Attack_damage << " points of damage!" << std::endl;
		EnergyPoints--;
	}
	else if (HitPoints <= 0)
	{
		std::cout << "ClapTrap " << name << " is dead" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << name << " don't have energy" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << name << " take " << amount << " points of damage!" << std::endl;
	HitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (EnergyPoints > 0 && HitPoints > 0)
	{
		std::cout << "ClapTrap " << name << " recover " << amount << " healh" << std::endl;
		EnergyPoints--;
		HitPoints += amount;
	}
	else if (HitPoints <= 0)
	{
		std::cout << "ClapTrap " << name << " is dead" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << name << " don't have energy" << std::endl;
	}
}