/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 17:10:57 by bsavinel          #+#    #+#             */
/*   Updated: 2022/06/13 11:31:13 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

//!------------------------------CONSTRUCTOR----------------------------------

WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout << "WrongCat constructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy)
{
	if (this == &copy)
		return ;
	*this = copy;
	std::cout << "WrongCat copy constructor" << std::endl;
}

//!------------------------------DESTRUCTOR-----------------------------------

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor" << std::endl;
}

//!------------------------------OPERATOR-------------------------------------

WrongCat	&	WrongCat::operator=(const WrongCat& copy)
{
	this->type = copy.type;
	return(*this);
}

//!------------------------------FUNCTION-------------------------------------

void	WrongCat::makeSound() const
{
	std::cout << "Miaou Miaou" << std::endl;
}