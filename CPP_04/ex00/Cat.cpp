/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 16:46:48 by bsavinel          #+#    #+#             */
/*   Updated: 2022/05/27 17:16:22 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

//!------------------------------CONSTRUCTOR----------------------------------

Cat::Cat()
{
	type = "Cat";
	std::cout << "Cat constructor" << std::endl;
}

Cat::Cat(const Cat& copy)
{
	*this = copy;
	std::cout << "Cat copy constructor" << std::endl;
}

//!------------------------------DESTRUCTOR-----------------------------------

Cat::~Cat()
{
	std::cout << "Cat destructor" << std::endl;
}

//!------------------------------OPERATOR-------------------------------------

Cat	&	Cat::operator=(const Cat& copy)
{
	this->type = copy.type;
	return(*this);
}

//!------------------------------FUNCTION-------------------------------------

void	Cat::makeSound() const
{
	std::cout << "Miaou Miaou" << std::endl;
}