/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 20:16:10 by bsavinel          #+#    #+#             */
/*   Updated: 2022/05/30 20:27:50 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>

class Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int echelon);
		Bureaucrat(const Bureaucrat & copy);
		~Bureaucrat();

		Bureaucrat & operator=(const Bureaucrat & copy);
		void				up_echelon();
		void				down_echelon();
		const std::string	&get_name() const;
		const int			&get_echelon() const;
		
	private:
		std::string	name;
		int			echelon;
};

std::ostream &operator<<(std::ostream &stream, Bureaucrat const &bureaucrat);

#endif