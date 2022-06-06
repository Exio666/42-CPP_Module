/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 18:03:44 by bsavinel          #+#    #+#             */
/*   Updated: 2022/06/06 13:21:50 by bsavinel         ###   ########.fr       */
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
	if (nb_zombie > 0)
		delete [] zombie;
}