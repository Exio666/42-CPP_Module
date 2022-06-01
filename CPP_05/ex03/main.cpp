/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 20:15:51 by bsavinel          #+#    #+#             */
/*   Updated: 2022/06/01 10:07:37 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"
#include "Intern.hpp"
#include <iostream>

int main()
{
	Bureaucrat bob = Bureaucrat("Bob", 150);
	Bureaucrat Gerald = Bureaucrat("Gerald", 1);
	Intern *truc = new Intern();
	Form * tree = truc->makeForm("shrubbery creation", "forest");
	Form * robot = truc->makeForm("robotomy request", "Boby");
	Form * pres = truc->makeForm("presidential pardon", "Albert");
	std::cout << " Sign of form " << std::endl << std::endl;
	bob.signForm(*tree);
	bob.signForm(*robot);
	bob.signForm(*pres);
	Gerald.signForm(*tree);
	Gerald.signForm(*robot);
	Gerald.signForm(*pres);
	std::cout << std::endl << " Execution of form " << std::endl << std::endl;
	std::cout << "Bob can't execute form" << std::endl << std::endl;
	bob.executeForm(*tree);
	bob.executeForm(*robot);
	bob.executeForm(*pres);
	std::cout << std::endl << "Gerald can execute form" << std::endl << std::endl;
	Gerald.executeForm(*tree);
	Gerald.executeForm(*robot);
	Gerald.executeForm(*pres);
	delete tree;
	delete robot;
	delete pres;
	delete truc;
}
