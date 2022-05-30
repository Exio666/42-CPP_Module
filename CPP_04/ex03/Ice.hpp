/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 13:10:24 by bsavinel          #+#    #+#             */
/*   Updated: 2022/05/30 14:17:51 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice: public AMateria
{
	public:
		Ice();
		Ice(std::string type);
		Ice(const Ice & copy);
		~Ice();

		Ice & operator=(const Ice & copy);
		AMateria* clone() const;
		void use(ICharacter& target);
	private:
		
};

#endif