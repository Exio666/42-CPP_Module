/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 16:29:34 by bsavinel          #+#    #+#             */
/*   Updated: 2022/06/10 15:25:42 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
	//Animal test;
	Animal* tab[10];
	int i;
	i = 0;
	while (i < 5)
	{
		tab[i] = new Dog();
		i++;
	}
	while (i < 10)
	{
		tab[i] = new Cat();
		i++;
	}
	Dog	*dogo = new Dog();
	Cat	*caty = new Cat();
	dogo->set_ideas(1, "eat");
	caty->set_ideas(1, "Dominate world");
	Cat	*cat2 = new Cat(*caty);
	Dog	*dog2 = new Dog(*dogo);
	i = 0;
	while (i < 10)
	{
		std::cout << "Type of animal number " << i << " : " << tab[i]->get_type() << std::endl;
		i++;
	}
	std::cout << std::endl;
	std::cout << "ideas dogo : " << dogo->get_ideas(1) << std::endl;
	std::cout << "ideas dog2 : " << dog2->get_ideas(1) << std::endl;
	std::cout << "ideas caty : " << caty->get_ideas(1) << std::endl;
	std::cout << "ideas cat2 : " << cat2->get_ideas(1) << std::endl;
	dog2->set_ideas(1, "sleep");
	cat2->set_ideas(1, "sleep");
	std::cout << "ideas dogo : " << dogo->get_ideas(1) << std::endl;
	std::cout << "ideas dog2 : " << dog2->get_ideas(1) << std::endl;
	std::cout << "ideas caty : " << caty->get_ideas(1) << std::endl;
	std::cout << "ideas cat2 : " << cat2->get_ideas(1) << std::endl;
	i = 0;	
	while (i < 10)
	{
		delete tab[i];
		i++;
	}
	delete dog2;
	delete cat2;
	delete dogo;
	delete caty;
}
