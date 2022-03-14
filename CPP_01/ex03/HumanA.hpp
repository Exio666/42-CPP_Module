/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 19:19:20 by bsavinel          #+#    #+#             */
/*   Updated: 2022/03/14 15:58:29 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <string>

class HumanA
{
	public:
		HumanA(std::string name, Weapon &Weapon);
		~HumanA();
		void	attack();
	
	private:
		Weapon		&weapon;
		std::string	name;
};

#endif