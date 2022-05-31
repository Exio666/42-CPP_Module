/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 19:44:49 by bsavinel          #+#    #+#             */
/*   Updated: 2022/05/31 20:03:20 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"

//!------------------------------CONSTRUCTOR----------------------------------

Intern::Intern()
{

}

Intern::Intern(const Intern& copy)
{
	*this = copy;
}

//!------------------------------DESTRUCTOR-----------------------------------

Intern::~Intern()
{

}

//!------------------------------OPERATOR-------------------------------------

Intern	&	Intern::operator=(const Intern& copy)
{
	return(*this);
}

//!------------------------------FUNCTION-------------------------------------

Form *Intern::makeForm(std::string form, std::string target)
{
	std::string all_demande[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	Form (Form::*all_form[3])(std::string target) = {&(ShrubberyCreationForm::ShrubberyCreationForm(std::string target)), "robotomy request", "presidential pardon"};
	for (int i = 0; i < 3; i++)
	{
		if (all_demande[i].compare(form))
		{
			return new 
		}
	}
}