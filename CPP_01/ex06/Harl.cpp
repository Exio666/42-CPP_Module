/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 19:24:03 by bsavinel          #+#    #+#             */
/*   Updated: 2022/05/24 14:41:37 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

Harl::Harl()
{

}

Harl::~Harl()
{
	
}

void Harl::debug() const
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
}

void Harl::info()const
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void Harl::warning()const
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error()const
{
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	int i;
	
	i = 0;
	void (Harl::*functptr[4])() const = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	level_str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"}; 
	while (i < 4)
	{
		if (level == level_str[i])
			((*this).*(functptr[i]))();
		i++;
	}
}