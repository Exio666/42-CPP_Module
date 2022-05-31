/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:21:16 by bsavinel          #+#    #+#             */
/*   Updated: 2022/05/31 19:21:35 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <iostream>

//!------------------------------CONSTRUCTOR----------------------------------

PresidentialPardonForm::PresidentialPardonForm(): Form("PresidentialPardonForm", 25, 5)
{
	target = "file";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy): Form(copy)
{
	*this = copy;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("PresidentialPardonForm", 25, 5)
{
	this->target = target;
}

//!------------------------------DESTRUCTOR-----------------------------------

PresidentialPardonForm::~PresidentialPardonForm()
{

}

//!------------------------------OPERATOR-------------------------------------

PresidentialPardonForm	&	PresidentialPardonForm::operator=(const PresidentialPardonForm& copy)
{
	this->target = copy.target;
	Form::operator=(copy);
	return(*this);
}

//!------------------------------FUNCTION-------------------------------------

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (!(executor.getGrade() <= this->getGradeExecute()))
		throw GradeTooLowException();
	else if (this->getSigne() == true)
	{
		std::cout << target << " has been pardonned by the president Zaphod Beeblebrox" << std::endl;
	}
}
