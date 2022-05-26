/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 15:27:16 by bsavinel          #+#    #+#             */
/*   Updated: 2022/05/26 15:39:24 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(): ClapTrap()
{
	name = " X ";
	HitPoints = 100;
	EnergyPoints = 100;
	Attack_damage = 30;
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy): ClapTrap(copy)
{
	*this = copy;
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	this->name = name;
	HitPoints = 100;
	EnergyPoints = 100;
	Attack_damage = 30;
	std::cout << "FragTrap constructor with name called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::operator=(const FragTrap &copy)
{
	name = copy.name;
	HitPoints = copy.HitPoints;
	EnergyPoints = copy.EnergyPoints;
	Attack_damage = copy.Attack_damage;
}

void 	FragTrap::highFivesGuys()
{
	std::string five;
	
	if (EnergyPoints > 0 && HitPoints > 0)
	{
		std::cout << "FragTrap " << name << " tell you to have a hight five" << std::endl;
		std::cin >> five;
		if (five.compare("5") || five.compare("five"))
		{
			std::cout << "FragTrap " << name << " give you hight five" << std::endl;
		}
		else
		{
			std::cout << "FragTrap " << name << " don't give you hight five" << std::endl;
		}
		EnergyPoints--;
	}
	else if (HitPoints <= 0)
	{
		std::cout << "FragTrap " << name << " is dead" << std::endl;
	}
	else
	{
		std::cout << "FragTrap " << name << " don't have energy" << std::endl;
	}
}