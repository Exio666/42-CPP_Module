/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 11:09:17 by bsavinel          #+#    #+#             */
/*   Updated: 2022/05/26 11:45:03 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(): ClapTrap()
{
	name = " X ";
	HitPoints = 100;
	EnergyPoints = 50;
	Attack_damage = 20;
	Guarding = false;
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy): ClapTrap(copy)
{
	*this = copy;
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	this->name = name;
	HitPoints = 100;
	EnergyPoints = 50;
	Attack_damage = 20;
	Guarding = false;
	std::cout << "ScavTrap constructor with name called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::operator=(const ScavTrap &copy)
{
	name = copy.name;
	HitPoints = copy.HitPoints;
	EnergyPoints = copy.EnergyPoints;
	Attack_damage = copy.Attack_damage;
	Guarding = copy.Guarding;
}

void ScavTrap::attack(const std::string& target)
{
	if (EnergyPoints > 0 && HitPoints > 0)
	{
		std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << Attack_damage << " points of damage!" << std::endl;
		EnergyPoints--;
	}
	else if (HitPoints <= 0)
	{
		std::cout << "ScavTrap " << name << " is dead" << std::endl;
	}
	else
	{
		std::cout << "ScavTrap " << name << " don't have energy" << std::endl;
	}
}

void 	ScavTrap::guardGate()
{
	if (EnergyPoints > 0 && HitPoints > 0 && Guarding == false)
	{
		std::cout << "ScavTrap " << name << " is pass in mode gate keeper" << std::endl;
		Guarding = true;
		EnergyPoints--;
	}
	else if (EnergyPoints > 0 && HitPoints > 0 && Guarding == true)
	{
		std::cout << "ScavTrap " << name << " is already mode gate keeper" << std::endl;
		EnergyPoints--;
	}
	else if (HitPoints <= 0)
	{
		std::cout << "ScavTrap " << name << " is dead" << std::endl;
	}
	else
	{
		std::cout << "ScavTrap " << name << " don't have energy" << std::endl;
	}
}