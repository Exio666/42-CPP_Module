/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 20:15:51 by bsavinel          #+#    #+#             */
/*   Updated: 2022/05/31 13:55:18 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int main()
{
	{
		try
		{
			Bureaucrat Bob = Bureaucrat("Bob", 160);
		}
		catch (const Bureaucrat::GradeTooLowException& e)
		{
			std::cerr << e.what() << std::endl;
		}
		catch (const Bureaucrat::GradeTooHighException& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		try
		{
			Bureaucrat Albert = Bureaucrat("Albert", 0);
		}
		catch (const Bureaucrat::GradeTooLowException& e)
		{
			std::cerr << e.what() << std::endl;
		}
		catch (const Bureaucrat::GradeTooHighException& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		try
		{
			Bureaucrat Laurent = Bureaucrat("Laurent", 75);
			std::cout << Laurent << std::endl;
		}
		catch (const Bureaucrat::GradeTooLowException& e)
		{
			std::cerr << e.what() << std::endl;
		}
		catch (const Bureaucrat::GradeTooHighException& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		try
		{
			Bureaucrat Boby = Bureaucrat("Boby", 150);
			Boby.down_grade(42);
		}
		catch (const Bureaucrat::GradeTooLowException& e)
		{
			std::cerr << e.what() << std::endl;
		}
		catch (const Bureaucrat::GradeTooHighException& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		try
		{
			Bureaucrat Bert = Bureaucrat("Bert", 1);
			Bert.up_grade(42);
		}
		catch (const Bureaucrat::GradeTooLowException& e)
		{
			std::cerr << e.what() << std::endl;
		}
		catch (const Bureaucrat::GradeTooHighException& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		try
		{
			Bureaucrat Gerald = Bureaucrat("Gerald", 75);
			std::cout << Gerald << std::endl;
			Gerald.up_grade(42);
			std::cout << Gerald << std::endl;
			Gerald.down_grade(42);
			std::cout << Gerald << std::endl;
		}
		catch (const Bureaucrat::GradeTooLowException& e)
		{
			std::cerr << e.what() << std::endl;
		}
		catch (const Bureaucrat::GradeTooHighException& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
}
