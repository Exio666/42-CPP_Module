/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:05:21 by bsavinel          #+#    #+#             */
/*   Updated: 2022/05/31 16:20:59 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include <iostream>

//!------------------------------CONSTRUCTOR----------------------------------

Form::Form()
{
	name = "XXX";
	gradeExecute = 150;
	gradeSigne = 150;
	signe = false;
}

Form::Form(std::string name, int gradeSigne, int gradeExecute)
{	
	if (gradeSigne > 150 || gradeExecute > 150)
		throw GradeTooLowException();
	else if (gradeSigne < 1 || gradeExecute < 1)
		throw GradeTooHighException();
	this->name = name;
	this->gradeExecute = gradeExecute;
	this->gradeSigne = gradeSigne;
	signe = false;
}

Form::Form(const Form& copy)
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
	this->name = copy.name;
	this->signe = copy.signe;
	this->gradeExecute = copy.gradeExecute;
	this->gradeSigne = copy.gradeSigne;
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