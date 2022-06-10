/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 13:37:17 by bsavinel          #+#    #+#             */
/*   Updated: 2022/06/10 10:38:03 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <stdlib.h>
#include <time.h> 
#include <iostream>
#include <exception>
#include <typeinfo>

Base * generate(void)
{
	int success;
	Base *retour;
	
	srand (time(NULL));
	success = rand() % 3;
	if (success == 0)
		retour =  new A();
	else if (success == 1)
		retour =  new B();
	else
		retour =  new C();
	return retour;
}

void identify(Base* p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "It's base A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "It's base B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "It's base C" << std::endl;
	else
		std::cout << "It's not base A B or C" << std::endl;
}

void identify(Base& p)
{
	int ok = 0;
	try
	{
		A tmp = dynamic_cast<A&>(p);
		std::cout << "It's base A" << std::endl;
		ok = 1;
	}
	catch (const std::bad_cast& e)
	{}
	try
	{
		B tmp1 = dynamic_cast<B&>(p);
		std::cout << "It's base B" << std::endl;
		ok = 1;
	}
	catch (const std::bad_cast& e)
	{}
	try
	{
		C tmp2 = dynamic_cast<C&>(p);
		std::cout << "It's base C" << std::endl;
		ok = 1;
	}
	catch (const std::bad_cast& e)
	{}
	if (!ok)
		std::cout << "It's not base A B or C" << std::endl;
}

int main()
{
	Base *No_Base	= new Base;
	Base *Base_A	= new A();
	Base *Base_B	= new B();
	Base *Base_C	= new C();
	Base *alea		= generate();

	std::cout << "Pointeur" << std::endl;
	identify(Base_A);
	identify(Base_B);
	identify(Base_C);
	identify(alea);
	identify(No_Base);
	std::cout << "Reference" << std::endl;
	identify(*Base_A);
	identify(*Base_B);
	identify(*Base_C);
	identify(*alea);
	identify(*No_Base);

	delete No_Base;
	delete Base_A;
	delete Base_B;
	delete Base_C;
	delete alea;
}