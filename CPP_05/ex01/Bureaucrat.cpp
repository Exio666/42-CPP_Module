/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 20:16:30 by bsavinel          #+#    #+#             */
/*   Updated: 2022/05/30 20:28:15 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

//!------------------------------CONSTRUCTOR----------------------------------

Bureaucrat::Bureaucrat()
{
	name = "somebody";
	echelon = 75;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy)
{
	*this = copy;
}

//!------------------------------DESTRUCTOR-----------------------------------

Bureaucrat::~Bureaucrat()
{

}

//!------------------------------OPERATOR-------------------------------------

Bureaucrat	&	Bureaucrat::operator=(const Bureaucrat& copy)
{
	this->name = copy.name;
	this->echelon = copy.echelon;
	return(*this);
}

//!------------------------------FUNCTION-------------------------------------

const std::string	&Bureaucrat::get_name() const
{
	return (name);
}

const int	&Bureaucrat::get_echelon() const
{
	return (echelon);
}

std::ostream &operator<<(std::ostream &stream, Bureaucrat const &bureaucrat)
{
	stream << bureaucrat.get_name() << ", bureaucrat grade " << bureaucrat.get_echelon() << "." << std::endl;
	return (stream);
}
