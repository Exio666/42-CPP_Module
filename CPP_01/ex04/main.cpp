/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 19:22:22 by bsavinel          #+#    #+#             */
/*   Updated: 2022/06/06 15:02:46 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <stdlib.h>

std::string	extract_file(char *file)
{
	std::string			extract;
	std::stringstream	buffer;
	std::ifstream		ifs(file);
	
	if (!ifs.is_open() || ifs.bad() || ifs.peek() == std::ifstream::traits_type::eof())
	{
		if (ifs.is_open())
			ifs.close();
		std::cout << "Bad open file ." << std::endl;
		exit(1);
	}
	while (buffer << ifs.rdbuf())
		;
	extract = buffer.str();
	ifs.close();
	return (extract.c_str());
}

std::string	replace(std::string extract, char *av2, char *av3)
{
	int			i;
	int			j;
	int			tmp;
	int			find;
	std::string	new_str;
	std::string	tmp_str;

	std::string to_change(av2);
	std::string replace(av3);
	i = 0;
	while (extract[i])
	{
		tmp = i;
		j = 0;
		find = 0;
		while (extract[tmp] && extract[tmp] == to_change[j])
		{
			tmp++;
			j++;
			if (!to_change[j])
			{
				find = 1;
				j = 0;
				i = tmp;
				while (replace[j])
				{
					new_str += replace[j];
					j++;
				}
			}
		}
		if (!find)
		{
			new_str += extract[i];
			i++;
		}
	}
	new_str += "\0";
	return (new_str);
}

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Bad number of argument" << std::endl;
		return (1);
	}
	
	std::string		extract;
	std::string		file(av[1]);
	std::string		new_file;
	extract = extract_file(av[1]);
	
	file += ".replace";
	std::ofstream	ofs(file.c_str());
	if (!ofs.is_open())
	{
		std::cout << "Bad open file" << std::endl;
		exit(1);
	}
	new_file = replace(extract, av[2], av[3]);
	ofs << new_file;
	return (0);
}