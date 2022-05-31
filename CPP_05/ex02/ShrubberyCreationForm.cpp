/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:21:27 by bsavinel          #+#    #+#             */
/*   Updated: 2022/05/31 19:21:14 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>
#include <sstream>
#include <iostream>

//!------------------------------CONSTRUCTOR----------------------------------

ShrubberyCreationForm::ShrubberyCreationForm(): Form("ShrubberyCreationForm", 145, 137)
{
	target = "file";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy): Form(copy)
{
	*this = copy;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("ShrubberyCreationForm", 145, 137)
{
	this->target = target;
}

//!------------------------------DESTRUCTOR-----------------------------------

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

//!------------------------------OPERATOR-------------------------------------

ShrubberyCreationForm	&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& copy)
{
	this->target = copy.target;
	Form::operator=(copy);
	return(*this);
}

//!------------------------------FUNCTION-------------------------------------

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (!(executor.getGrade() <= this->getGradeExecute()))
		throw GradeTooLowException();
	else if (this->getSigne() == true)
	{
		std::string		file;
		file = target + "_shrubbery";
		std::ofstream	ofs(file.c_str());
		ofs << " | | | " << std::endl
			<< " \\ | /" << std::endl
			<< "   |   " << std::endl;
	}
}
