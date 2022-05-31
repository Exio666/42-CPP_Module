/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:21:20 by bsavinel          #+#    #+#             */
/*   Updated: 2022/05/31 19:15:19 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"
#include <string>

class PresidentialPardonForm: public Form
{
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm & copy);
		PresidentialPardonForm(std::string target);
		~PresidentialPardonForm();

		PresidentialPardonForm & operator=(const PresidentialPardonForm & copy);

		void		execute(Bureaucrat const & executor) const;

	private:
		std::string target;
};

#endif