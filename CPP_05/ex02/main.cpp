/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 20:15:51 by bsavinel          #+#    #+#             */
/*   Updated: 2022/05/31 16:20:36 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int main()
{
	Bureaucrat Bob = Bureaucrat("Bob", 75);
	Bureaucrat Gerald = Bureaucrat("Gerald", 150);
	{
		try
		{
			Form B32 = Form("B32", 0, 150);
		}
		catch (const Form::GradeTooLowException& e)
		{
			std::cerr << e.what() << std::endl;
		}
		catch (const Form::GradeTooHighException& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		try
		{
			Form B32 = Form("B32", 75, 160);
		}
		catch (const Form::GradeTooLowException& e)
		{
			std::cerr << e.what() << std::endl;
		}
		catch (const Form::GradeTooHighException& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	Form B32 = Form("B32", 75, 80);
	Gerald.signForm(B32);
	std::cout << B32 << std::endl;
	Bob.signForm(B32);
	std::cout << B32 << std::endl;
}
