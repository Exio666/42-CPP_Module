/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 13:11:29 by bsavinel          #+#    #+#             */
/*   Updated: 2022/05/30 19:58:38 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include <string>

class Character: public ICharacter
{
	public:
		Character();
		Character(const std::string name);
		Character(const Character & copy);
		~Character();

		Character & operator=(const Character & copy);
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

	private:
		std::string	name;
		AMateria	*inventory[4];
		bool		place_take[4];
		int			nb_materia;
};

#endif