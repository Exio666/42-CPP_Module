/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 15:23:12 by bsavinel          #+#    #+#             */
/*   Updated: 2022/07/09 17:40:54 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
#include <string>

int main()
{
	{
		Array<int> tab_int(20);

		for (int i = 0; i < 15; i++)
			tab_int[i] = i;
		for (int i = 0; i < 20; i++)
			std::cout << "Index [" << i << "] : " << tab_int[i] << std::endl;
	}
 	{
		Array<std::string> tab_string(18);
	
		for (int i = 0; i < 15; i++)
			tab_string[i] = "bonjour";
		
		Array<std::string> copy_tab(tab_string);
		for (int i = 0; i < 15; i++)
			tab_string[i] = "coucou";
		for (int i = 0; i < 18; i++)
			std::cout << "Index [" << i << "] : " << copy_tab[i] << std::endl;	
	}
	{
		try
		{
			Array<int> tab_int(15);
			tab_int[236];
		}
		catch (const std::exception& e)
		{
			std::cerr << "Exception: out of range" << std::endl;
		}
	}
}