/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:21:25 by bsavinel          #+#    #+#             */
/*   Updated: 2022/05/31 19:13:32 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <string>

class RobotomyRequestForm: public Form
{
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm & copy);
		RobotomyRequestForm(std::string target);
		~RobotomyRequestForm();

		RobotomyRequestForm & operator=(const RobotomyRequestForm & copy);

		void		execute(Bureaucrat const & executor) const;
	private:
		std::string target;
};

#endif