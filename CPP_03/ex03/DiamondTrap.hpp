/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 16:16:21 by bsavinel          #+#    #+#             */
/*   Updated: 2022/05/26 16:19:12 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDRAP_HPP
# define DIAMONDRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: virtual ScavTrap, virtual FragTrap
{
	public:
		DiamondTrap();
		DiamondTrap(const DiamondTrap &copy);
		DiamondTrap(std::string name);
		~DiamondTrap();

		void	operator=(const DiamondTrap &copy);		
		void 	guardGate();
		void	attack(const std::string& target);

	protected:
		bool	Guarding;	
};

#endif