/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:21:29 by bsavinel          #+#    #+#             */
/*   Updated: 2022/06/01 09:58:43 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <string>

class ShrubberyCreationForm: public Form
{
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm & copy);
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm();
		
		ShrubberyCreationForm & operator=(const ShrubberyCreationForm & copy);

		void		execute(Bureaucrat const & executor) const;

	private:
		std::string target;
};

#endif