/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 17:27:49 by bsavinel          #+#    #+#             */
/*   Updated: 2022/05/26 15:37:19 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap energy("Fragy");
	FragTrap dead("Frago");

	energy.attack("zombie");
	energy.takeDamage(9);
	energy.beRepaired(1);
	energy.attack("zombie");
	energy.takeDamage(1);
	energy.attack("zombie");
	energy.highFivesGuys();

	dead.takeDamage(999);
	dead.beRepaired(1);
	dead.attack("zombie");
}