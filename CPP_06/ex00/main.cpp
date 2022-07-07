/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 09:44:42 by bsavinel          #+#    #+#             */
/*   Updated: 2022/07/05 10:15:43 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"
#include <string>
#include <iostream>

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Bad number of argument" << std::endl;
		return 1;
	}
	std::string value(av[1]);
	Convert launch(value);
	return 0;
}