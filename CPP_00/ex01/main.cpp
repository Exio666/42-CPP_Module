/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:52:41 by bsavinel          #+#    #+#             */
/*   Updated: 2022/05/24 14:17:54 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>
#include <stdlib.h>

void	reduce_print(std::string str)
{
	const char	*new_str;
	int			i;

	i = 0;
	new_str = str.c_str();
	if (str.length() <= 10)
	{
		i = str.length();
		while(i < 10)
		{
			std::cout << " ";
			i++;
		}
		std::cout << str;
		i = str.length();
	}
	else
	{
		while(i < 9)
		{
			std::cout << new_str[i];
			i++;
		}
		std::cout << ".";
	}
}

int	main()
{
	int			i;
	int			search;
	int 		exit;
	PhoneBook	book;
	std::string	instruction;

	exit = 0;
	i = 0;
	while(exit == 0)
	{
		std::cout << ">>> ";
		if (std::getline(std::cin, instruction) == NULL)
			return (1);
		if (instruction.compare("EXIT") == 0)
			exit = 1;
		else if (instruction.compare("SEARCH") == 0)
		{
			book.print_phonebook();
			std::cout << ">>> Do you want see somebody ?";
			if (std::getline(std::cin, instruction) == NULL)
				return (1);
			if (instruction.length() == 1)
			{
				search = atoi(instruction.c_str()) - 1;
				if (search < book.number_of_contact() && search >= 0)
					book.print_contact(search);
			}
		}
		else if (instruction.compare("ADD") == 0)
		{
			book.add_contact(i);
			i++;
			if (i >= 8)
				i = 0;
		}	
		else
			std::cout << "Bad instruction" << std::endl;
	}
}