/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 20:16:10 by bsavinel          #+#    #+#             */
/*   Updated: 2022/05/31 19:11:39 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <exception>

class Bureaucrat;
#include "Form.hpp"

class Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int echelon);
		Bureaucrat(const Bureaucrat & copy);
		~Bureaucrat();

		Bureaucrat & operator=(const Bureaucrat & copy);
		
		void				up_grade(int nb);
		void				down_grade(int nb);
		const std::string	&getName() const;
		const int			&getGrade() const;
		void				signForm(Form& form);
		void				executeForm(Form const &form);
			
		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException: public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

	private:
		std::string	name;
		int			echelon;
};

std::ostream &operator<<(std::ostream &stream, Bureaucrat const &bureaucrat);

#endif