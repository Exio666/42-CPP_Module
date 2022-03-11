/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 18:02:12 by bsavinel          #+#    #+#             */
/*   Updated: 2022/03/11 18:43:43 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int	main()
{
	Zombie *zombie;
	std::cout << "Debut programe" << std::endl;
	zombie = newZombie("Albert");
	std::cout << "Creation d'Albert" << std::endl;
	zombie->announce();
	std::cout << "Deletation d'Albert" << std::endl;
	delete zombie;
	std::cout << "Creation de Charle" << std::endl;
	randomChump("Charle");
	std::cout << "Fin programe" << std::endl;
}