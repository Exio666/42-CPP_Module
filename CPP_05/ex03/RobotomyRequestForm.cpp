/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:21:23 by bsavinel          #+#    #+#             */
/*   Updated: 2022/05/31 19:21:21 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <stdlib.h>
#include <time.h> 

//!------------------------------CONSTRUCTOR----------------------------------

RobotomyRequestForm::RobotomyRequestForm(): Form("RobotomyRequestForm", 72, 45)
{
	target = "file";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy): Form(copy)
{
	*this = copy;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("RobotomyRequestForm", 72, 45)
{
	this->target = target;
}

//!------------------------------DESTRUCTOR-----------------------------------

RobotomyRequestForm::~RobotomyRequestForm()
{

}

//!------------------------------OPERATOR-------------------------------------

RobotomyRequestForm	&	RobotomyRequestForm::operator=(const RobotomyRequestForm& copy)
{
	this->target = copy.target;
	Form::operator=(copy);
	return(*this);
}

//!------------------------------FUNCTION-------------------------------------

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	int success;
	
	if (!(executor.getGrade() <= this->getGradeExecute()))
		throw GradeTooLowException();
	else if (this->getSigne() == true)
	{
		srand (time(NULL));
		success = rand() % 2;
		std::cout << "BZZZZZZZZZZZ" << std::endl;
		if (success)
		{
			std::cout << target << " was robotomized" << std::endl;
		}
		else 
			std::cout << target << " was not robotomized" << std::endl;
	}
}
