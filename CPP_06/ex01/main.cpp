/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 15:51:30 by bsavinel          #+#    #+#             */
/*   Updated: 2022/06/09 13:19:36 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include <iostream>

struct Data
{
	int a;
	double b;
};

uintptr_t serialize(Data* ptr)
{
	uintptr_t retour;
	
	retour = reinterpret_cast<uintptr_t>(ptr);
	return (retour);
}

Data* deserialize(uintptr_t raw)
{
	Data* retour;
	
	retour = reinterpret_cast<Data*>(raw);
	return (retour);
}

int main()
{
	Data *test = new Data();
	uintptr_t steri;
	Data *desteri;
	
	test->a = 3;
	test->b = 22.5;
	steri = serialize(test);
	desteri = deserialize(steri);
	std::cout << "a initial : " << test->a << " | a desterilizer :" << desteri->a << std::endl;
	std::cout << "b initial : " << test->b << " | b desterilizer :" << desteri->b << std::endl;
	delete test;
}