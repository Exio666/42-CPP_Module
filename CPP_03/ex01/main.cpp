/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 17:27:49 by bsavinel          #+#    #+#             */
/*   Updated: 2022/05/26 14:27:06 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap energy("Scavy");
	ScavTrap dead("Scavo");

	energy.attack("zombie");
	energy.takeDamage(9);
	energy.beRepaired(1);
	energy.attack("zombie");
	energy.takeDamage(1);
	energy.attack("zombie");

	dead.takeDamage(999);
	dead.beRepaired(1);
	dead.attack("zombie");
}