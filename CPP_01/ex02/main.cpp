/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 19:18:53 by bsavinel          #+#    #+#             */
/*   Updated: 2022/03/14 09:44:21 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
	std::string string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string	&stringREF = string;

	std::cout << "Address of string :" << &string << std::endl;
	std::cout << "Address of stringPTR :" << &stringPTR << std::endl;
	std::cout << "Address of stringREF :" << &stringREF << std::endl;
	std::cout << "Volue pointed by string :" << string << std::endl;
	std::cout << "Volue pointed by stringPTR :" << stringPTR << std::endl;
	std::cout << "Volue pointed by stringREF :" << stringREF << std::endl;
}
