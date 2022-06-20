/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:04:56 by bsavinel          #+#    #+#             */
/*   Updated: 2022/06/20 13:31:27 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <string>
#include <exception>

class Form;
#include "Bureaucrat.hpp"

class Form
{
	public:
		Form();
		Form(std::string name, int gradeSigne, int gradeExecute);
		Form(const Form & copy);
		virtual ~Form();

		Form & operator=(const Form & copy);
		
		std::string	getName() const;
		bool		getSigne() const;
		int			getGradeSigne() const;
		int			getGradeExecute() const;
		void		beSigned(const Bureaucrat& bureaucrat);
		virtual void		execute(Bureaucrat const & executor) const = 0;
		
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
		const std::string name;
		bool		signe;
		const int			gradeSigne;
		const int			gradeExecute;
};

std::ostream &operator<<(std::ostream &stream, Form const &form);

#endif