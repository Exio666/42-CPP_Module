/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 19:48:09 by bsavinel          #+#    #+#             */
/*   Updated: 2022/06/07 10:52:32 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.tpp"
#include <iostream>
#include <vector>
#include <set>

int main()
{
	{
		std::vector<int> vect;
		vect.push_back(3);
		vect.push_back(2);
		vect.push_back(1);
		vect.push_back(0);
		vect.push_back(2);
		std::cout << easyfind(vect, 2) << std::endl;
		std::cout << easyfind(vect, 22) << std::endl;
	}
	{
		std::set<int> cont;
		cont.insert(3);
		cont.insert(4);
		cont.insert(5);
		cont.insert(0);
		cont.insert(2);
		std::cout << easyfind(cont, 5) << std::endl;
		std::cout << easyfind(cont, 22) << std::endl;
	}
}