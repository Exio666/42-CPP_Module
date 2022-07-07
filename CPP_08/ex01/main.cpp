/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 10:54:01 by bsavinel          #+#    #+#             */
/*   Updated: 2022/07/07 14:37:45 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

int main()
{
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{
		Span    new_fill(15);

    	new_fill.addNumber(-9);
    	new_fill.addNumber(125);
    	new_fill.addNumber(375);
    	new_fill.addNumber(4865);
		std::cout << std::endl << "Span : " << std::endl << std::endl;
    	new_fill.printSpan(new_fill.getVector().begin(), new_fill.getVector().end());
		std::cout << std::endl << "shortest span : " << new_fill.shortestSpan() << std::endl << "longest span : " << new_fill.longestSpan() << std::endl;
	}
	{
		try
		{
			Span    new_fill(2);

    		new_fill.addNumber(-9);
    		new_fill.addNumber(125);
    		new_fill.addNumber(375);
    		new_fill.addNumber(4865);
		}
		catch(const Span::TooMuchNumber& e)
		{
			std::cerr << std::endl << e.what() << std::endl;
		}
	}
		{
		try
		{
			Span    new_fill(2);
			new_fill.shortestSpan();
		}
		catch(const Span::ImposibleFonction& e)
		{
			std::cerr << std::endl << e.what() << std::endl;
		}
	}
	{
		Span    new_fill(1000000);

    	new_fill.addNumber(-9);
    	new_fill.addNumber(125);
    	new_fill.addNumber(375);
    	new_fill.addNumber(4865);
		new_fill.addNumber(32);
    	new_fill.fillSpan(new_fill.getVector().begin(), new_fill.getVector().end());
		new_fill.fillSpan(new_fill.getVector().begin(), new_fill.getVector().end());
		new_fill.fillSpan(new_fill.getVector().begin(), new_fill.getVector().end());
		new_fill.fillSpan(new_fill.getVector().begin(), new_fill.getVector().end());
		new_fill.fillSpan(new_fill.getVector().begin(), new_fill.getVector().end());
		new_fill.fillSpan(new_fill.getVector().begin(), new_fill.getVector().end());
		new_fill.fillSpan(new_fill.getVector().begin(), new_fill.getVector().end());
		new_fill.fillSpan(new_fill.getVector().begin(), new_fill.getVector().end());
		new_fill.fillSpan(new_fill.getVector().begin(), new_fill.getVector().end());
		new_fill.fillSpan(new_fill.getVector().begin(), new_fill.getVector().end());
		new_fill.fillSpan(new_fill.getVector().begin(), new_fill.getVector().end());
		std::cout << std::endl << "Span size : " << new_fill.getActualSize() << std::endl << std::endl;
		std::cout << std::endl << "shortest span : " << new_fill.shortestSpan() << std::endl << "longest span : " << new_fill.longestSpan() << std::endl;
	}
}