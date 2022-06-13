/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 16:28:24 by bsavinel          #+#    #+#             */
/*   Updated: 2022/06/13 11:36:02 by bsavinel         ###   ########.fr       */
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
	if (this == &copy)
		return ;
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
	if (this == &copy)
		return (*this);
	this->type = copy.type;
	*this->brain = *copy.brain;
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