/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 18:02:04 by bsavinel          #+#    #+#             */
/*   Updated: 2022/03/11 18:45:38 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	name_zombie = name;
}

Zombie::~Zombie()
{
	std::cout << name_zombie << ": die" << std::endl;
}

void Zombie::announce()
{
	std::cout << name_zombie << ": BraiiiiiiinnnzzzZ..." << std::endl;
}