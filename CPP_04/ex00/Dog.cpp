/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 16:28:24 by bsavinel          #+#    #+#             */
/*   Updated: 2022/06/13 11:31:05 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

//!------------------------------CONSTRUCTOR----------------------------------

Dog::Dog()
{
	type = "Dog";
	std::cout << "Dog constructor" << std::endl;
}

Dog::Dog(const Dog& copy)
{
	if (this == &copy)
		return ;
	*this = copy;
	std::cout << "Dog copy constructor" << std::endl;
}

//!------------------------------DESTRUCTOR-----------------------------------

Dog::~Dog()
{
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