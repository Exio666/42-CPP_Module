/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 19:48:09 by bsavinel          #+#    #+#             */
/*   Updated: 2022/07/13 16:52:22 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <set>

int main()
{
	{
		try
		{
			std::vector<int> vect;
			vect.push_back(3);
			vect.push_back(2);
			vect.push_back(1);
			vect.push_back(0);
			vect.push_back(2);
			std::cout << *easyfind(vect, 2) << std::endl;
			std::cout << *easyfind(vect, 22) << std::endl;
		}
		catch (const std::exception& e)
		{
			std::cout << "Not found" << std::endl;
		}
	}
	{
		try
		{
			std::set<int> cont;
			cont.insert(3);
			cont.insert(4);
			cont.insert(5);
			cont.insert(0);
			cont.insert(2);
			std::cout << *easyfind(cont, 5) << std::endl;
			std::cout << *easyfind(cont, 22) << std::endl;
		}
		catch (const std::exception& e)
		{
			std::cout << "Not found" << std::endl;
		}
	}
}
