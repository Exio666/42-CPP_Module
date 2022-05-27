/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 17:27:49 by bsavinel          #+#    #+#             */
/*   Updated: 2022/05/27 15:01:42 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap energy("Diamonder");
	DiamondTrap dead("Diamondo");

	energy.attack("zombie");
	energy.takeDamage(9);
	energy.beRepaired(1);
	energy.attack("zombie");
	energy.takeDamage(1);
	energy.attack("zombie");
	energy.highFivesGuys();
	energy.guardGate();
	energy.whoAmI();
	dead.takeDamage(999);
	dead.beRepaired(1);
	dead.attack("zombie");
	dead.whoAmI();
}