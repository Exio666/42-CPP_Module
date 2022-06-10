/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 16:29:34 by bsavinel          #+#    #+#             */
/*   Updated: 2022/06/10 15:20:19 by bsavinel         ###   ########.fr       */
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
	std::cout << "Good Animal" << std::endl << std::endl;
	const Animal* animal 	= new Animal();
	const Animal* dog		= new Dog();
	const Animal* cat		= new Cat();

	std::cout << "The type of animal is : " << animal->get_type() << std::endl;
	std::cout << "The type of dog is : " << dog->get_type() << std::endl;
	std::cout << "The type of cat is : " << cat->get_type() << std::endl;
	animal->makeSound();
	cat->makeSound();
	dog->makeSound();

	delete animal;
	delete dog;
	delete cat;

	std::cout << std::endl << "Wrong Animal" << std::endl << std::endl;
	const WrongAnimal* wrong_animal 	= new WrongAnimal();
	const WrongAnimal* wrong_cat		= new WrongCat();

	std::cout << "The type of wrong_animal is : " << wrong_animal->get_type() << std::endl;
	std::cout << "The type of wrong_cat is : " << wrong_cat->get_type() << std::endl;
	wrong_animal->makeSound();
	wrong_cat->makeSound();

	delete wrong_animal;
	delete wrong_cat;
}
