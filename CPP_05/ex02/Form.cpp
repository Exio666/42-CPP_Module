/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:05:21 by bsavinel          #+#    #+#             */
/*   Updated: 2022/06/20 13:49:02 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include <iostream>

//!------------------------------CONSTRUCTOR----------------------------------

Form::Form(): name("XXX"), gradeSigne(150), gradeExecute(150)
{
	signe = false;
}

Form::Form(std::string name, int gradeSigne, int gradeExecute): name(name), gradeSigne(gradeSigne), gradeExecute(gradeExecute)
{	
	if (gradeSigne > 150 || gradeExecute > 150)
		throw GradeTooLowException();
	else if (gradeSigne < 1 || gradeExecute < 1)
		throw GradeTooHighException();
	signe = false;
}

Form::Form(const Form& copy): gradeSigne(20), gradeExecute(20)
{
	*this = copy;
}

//!------------------------------DESTRUCTOR-----------------------------------

Form::~Form()
{

}

//!------------------------------OPERATOR-------------------------------------

Form	&	Form::operator=(const Form& copy)
{
	std::string	*tmp;
	int			*tmp_int;
	
	tmp = const_cast <std::string *>(&this->name);
	*tmp = copy.name;
	this->signe = copy.signe;
	tmp_int = const_cast <int *>(&this->gradeExecute);
	*tmp_int = copy.gradeExecute;
	tmp_int = const_cast <int *>(&this->gradeSigne);
	*tmp_int = copy.gradeSigne;
	return(*this);
}

//!------------------------------FUNCTION-------------------------------------

std::ostream &operator<<(std::ostream &stream, Form const &form)
{
	stream		<< "The form " << form.getName() 
				<< " have a grade to signe of " << form.getGradeSigne() 
				<< " have a grade to execute of " << form.getGradeExecute();
	if (form.getSigne() == true)
		stream << " is signed";
	else
		stream << " is not signed";
	return (stream);
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "Grade to hight";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "Grade to low";
}

std::string Form::getName() const
{
	return name;
}

bool Form::getSigne() const
{
	return signe;
}

int	Form::getGradeSigne() const
{
	return gradeSigne;
}

int Form::getGradeExecute() const
{
	return gradeExecute;
}

void	Form::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() <= this->gradeSigne)
		signe = true;
	else
		throw GradeTooLowException();
}