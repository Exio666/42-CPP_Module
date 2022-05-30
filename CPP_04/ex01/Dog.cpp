/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 16:28:24 by bsavinel          #+#    #+#             */
/*   Updated: 2022/05/30 10:50:02 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

//!------------------------------CONSTRUCTOR----------------------------------

Dog::Dog(): Animal()
{
	type = "Dog";
	brain = new Brain;
	std::cout << "Dog constructor" << std::endl;
}

Dog::Dog(const Dog& copy): Animal(copy)
{
	this->brain = new Brain;
	*this = copy;
	std::cout << "Dog copy constructor" << std::endl;
}

//!------------------------------DESTRUCTOR-----------------------------------

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog destructor" << std::endl;
}

//!------------------------------OPERATOR-------------------------------------

Dog	&	Dog::operator=(const Dog& copy)
{
	this->type = copy.type;
	return(*this);
}

//!------------------------------FUNCTION-------------------------------------

void	Dog::makeSound() const
{
	std::cout << "Ouf ouf" << std::endl;
}

void	Dog::set_ideas(int i, std::string think)
{
	brain->set_ideas(i, think);
}

std::string	Dog::get_ideas(int i)
{
	return(brain->get_ideas(i));
}