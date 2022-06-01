/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 19:44:49 by bsavinel          #+#    #+#             */
/*   Updated: 2022/06/01 10:08:35 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

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
	(void) copy;
	return(*this);
}

//!------------------------------FUNCTION-------------------------------------

Form *Intern::makeShrubberyCreationForm(std::string target) const
{
	return (new ShrubberyCreationForm(target));
}

Form *Intern::makeRobotomyRequestForm(std::string target) const
{
	return (new RobotomyRequestForm(target));
}

Form *Intern::makePresidentialPardonForm(std::string target) const
{
	return (new PresidentialPardonForm(target));
}

Form *Intern::makeForm(std::string form, std::string target)
{
	std::string all_demande[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	Form *(Intern::*all_form[3])(std::string target) const = {&Intern::makeShrubberyCreationForm, &Intern::makeRobotomyRequestForm, &Intern::makePresidentialPardonForm};
	for (int i = 0; i < 3; i++)
	{
		if (all_demande[i].compare(form) == 0)
		{
			std::cout << "Intern creates " << all_demande[i] << " form" << std::endl;
			return ((*this).*(all_form[i]))(target);
		}
	}
	std::cout << "The form for " << form << "doesn't exist" << std::endl;
	return NULL;
}