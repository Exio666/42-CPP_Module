/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 19:44:35 by bsavinel          #+#    #+#             */
/*   Updated: 2022/06/01 09:59:13 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <string>
#include "Form.hpp"

class Intern
{
	public:
		Intern();
		Intern(const Intern & copy);
		~Intern();

		Intern & operator=(const Intern & copy);
		Form *makeForm(std::string form, std::string target);
		Form		*makeShrubberyCreationForm(std::string target) const;
		Form		*makeRobotomyRequestForm(std::string target) const;
		Form		*makePresidentialPardonForm(std::string target) const;
	private:
};

#endif