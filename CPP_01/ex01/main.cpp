/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 18:03:44 by bsavinel          #+#    #+#             */
/*   Updated: 2022/05/24 13:22:20 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int	main()
{
	Zombie	*zombie;
	int		nb_zombie = 3;
	int		i = 0;

	std::cout << "Debut programe" << std::endl;
	zombie = zombieHorde(nb_zombie, "Einstein");
	while (i < nb_zombie)
	{
		std::cout << "Numero " << i << " -> ";
		zombie[i].announce();
		i++;
	}
	delete [] zombie;
}