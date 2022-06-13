/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 16:46:48 by bsavinel          #+#    #+#             */
/*   Updated: 2022/06/13 11:36:06 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

//!------------------------------CONSTRUCTOR----------------------------------

Cat::Cat(): Animal()
{
	type = "Cat";
	brain = new Brain;
	std::cout << "Cat constructor" << std::endl;
}

Cat::Cat(const Cat& copy): Animal(copy)
{
	if (this == &copy)
		return ;
	this->brain = new Brain;
	*this = copy;
	std::cout << "Cat copy constructor" << std::endl;
}

//!------------------------------DESTRUCTOR-----------------------------------

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat destructor" << std::endl;
}

//!------------------------------OPERATOR-------------------------------------

Cat	&	Cat::operator=(const Cat& copy)
{
	if (this == &copy)
		return (*this);
	this->type = copy.type;
	*this->brain = *copy.brain;
	return(*this);
}

//!------------------------------FUNCTION-------------------------------------

void	Cat::makeSound() const
{
	std::cout << "Miaou Miaou" << std::endl;
}

void	Cat::set_ideas(int i, std::string think)
{
	brain->set_ideas(i, think);
}

std::string Cat::get_ideas(int i)
{
	return(brain->get_ideas(i));
}