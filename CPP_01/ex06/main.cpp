/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 19:23:35 by bsavinel          #+#    #+#             */
/*   Updated: 2022/03/15 16:27:44 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Karen.hpp"

int main(int ac, char **av)
{
	Karen alert;
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
	if (i == 4)
	{
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return (1);
	}
	while (i < 4)
	{
		std::cout << "[ "<< level_str[i] << " ]" << std::endl;
		alert.complain(level_str[i]);
		i++;
	}
}