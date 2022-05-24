/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 19:23:35 by bsavinel          #+#    #+#             */
/*   Updated: 2022/05/24 14:55:06 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl alert;
	std::string	level_str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"}; 
	int i;

	i = 0;
	if (ac != 2)
	{
		std::cout << "Please I need 1 argument !!!" << std::endl;
		return (1);
	}
	while (i < 4)
	{
		if (av[1] == level_str[i])
			break ;
		i++;
	}
	switch (i)
	{
		case 0:
			std::cout << "[ "<< level_str[0] << " ]" << std::endl;
			alert.complain(level_str[0]);
			std::cout << std::endl;
		case 1:
			std::cout << "[ "<< level_str[1] << " ]" << std::endl;
			alert.complain(level_str[1]);
			std::cout << std::endl;
		case 2:
			std::cout << "[ "<< level_str[2] << " ]" << std::endl;
			alert.complain(level_str[2]);
			std::cout << std::endl;
		case 3:
			std::cout << "[ "<< level_str[3] << " ]" << std::endl;
			alert.complain(level_str[3]);
			std::cout << std::endl;
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}