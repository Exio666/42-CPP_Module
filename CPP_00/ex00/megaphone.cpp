/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 14:22:57 by bsavinel          #+#    #+#             */
/*   Updated: 2022/03/08 15:10:49 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	up_str(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		str[i] = toupper(str[i]);
		i++;
	}	
}

int main(int ac, char **av)
{
	int i;

	i = 1;
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}
	while (i < ac)
	{
		up_str(av[i]);
		std::cout << av[i];
		i++;
	}
	std::cout << std::endl;
	return 0;
}