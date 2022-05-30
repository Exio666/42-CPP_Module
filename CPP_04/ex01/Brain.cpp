/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 09:40:04 by bsavinel          #+#    #+#             */
/*   Updated: 2022/05/30 10:13:34 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

//!------------------------------CONSTRUCTOR----------------------------------

Brain::Brain()
{

}

Brain::Brain(const Brain& copy)
{
	*this = copy;
}

//!------------------------------DESTRUCTOR-----------------------------------

Brain::~Brain()
{

}

//!------------------------------OPERATOR-------------------------------------

Brain	&	Brain::operator=(const Brain& copy)
{
	int i;

	i = 0;
	while (i < 100)
	{
		this->ideas[i] = copy.ideas[i];
		i++;
	}
	return(*this);
}

//!------------------------------FUNCTION-------------------------------------

void	Brain::set_ideas(int i, std::string think)
{
	if (i <= 0 || i > 100)
	{
		std::cout << "Bad ideas" << std::endl;
		return ;
	}
	ideas[i + 1] = think;
}

std::string	Brain::get_ideas(int i)
{
	if (i <= 0 || i > 100)
	{
		return "Nothing";
	}
	return (ideas[i + 1]);
}