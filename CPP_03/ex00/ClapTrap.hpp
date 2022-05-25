/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 17:22:09 by bsavinel          #+#    #+#             */
/*   Updated: 2022/05/25 17:33:20 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>

class ClapTrap
{
	public:
		ClapTrap();
		ClapTrap(const ClapTrap &copy);
		ClapTrap(std::string name);
		~ClapTrap();
		
		void operator=(const ClapTrap &copy);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
	private:
		
		int			HitPoints;
		int			EnergyPoints;
		int			Attack_damage;
		std::string	name;
};

#endif