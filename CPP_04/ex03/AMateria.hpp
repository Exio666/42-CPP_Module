/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 13:03:25 by bsavinel          #+#    #+#             */
/*   Updated: 2022/05/31 11:08:57 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <string>
class AMateria;
#include "ICharacter.hpp"

class AMateria
{
	public:
		AMateria();
		AMateria(const AMateria& copy);
		AMateria(std::string const & type);
		virtual ~AMateria() {};
		
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
		AMateria	&operator=(const AMateria& copy);
	protected:
		std::string	type;
};


#endif