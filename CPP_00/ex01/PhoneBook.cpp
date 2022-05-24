/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:45:58 by bsavinel          #+#    #+#             */
/*   Updated: 2022/05/24 15:41:01 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <stdlib.h>

PhoneBook::PhoneBook()
{
	std::cout << "New PhoneBook has created" << std::endl;
	nb_contact = 0;
}

PhoneBook::~PhoneBook()
{
	std::cout << "Destruction of this PhoneBook" << std::endl;
}

void	PhoneBook::add_contact(int i)
{
	std::string	first_name;
	std::string	last_name;
	std::string	phone_number;
	std::string	darkest_secret;
	std::string	nickname;

	do
	{
		std::cout << "First name : ";
		if (std::getline(std::cin, first_name) == NULL)
			exit (1);
	} while (first_name.length() < 1);
	do
	{
		std::cout << "Last name : ";
		if (std::getline(std::cin, last_name) == NULL)
			exit (1);
	} while (last_name.length() < 1);
	do
	{
		std::cout << "Nickname : ";
		if (std::getline(std::cin, nickname) == NULL)
			exit (1);
	} while (nickname.length() < 1);
	do
	{
		std::cout << "Phone_number : ";
		if (std::getline(std::cin, phone_number) == NULL)
			exit (1);
	} while (phone_number.length() < 1);
	do
	{
		std::cout << "Darkest_secret : ";
		if (std::getline(std::cin, darkest_secret) == NULL)
			exit (1);
	} while (darkest_secret.length() < 1);
	if (nb_contact < 8)
		nb_contact++;
	Book[i].change_contact(first_name, last_name, nickname, phone_number, darkest_secret);
}

int	PhoneBook::number_of_contact(void)
{
	return nb_contact;
}

void	PhoneBook::print_phonebook(void)
{
	int 		i;
	std::string	str;

	i = 0;
	std::cout << "|" << std::setw(10) << "Index" << "|" 
			<< std::setw(10) << "First name" << "|" 
			<< std::setw(10) << "Last name" << "|" 
			<< std::setw(10) << "Nickname" << "|" << std::endl;
	while (i < nb_contact)
	{
		std::cout << "|       [" << i + 1 << "]|";
		reduce_print(Book[i].give_first_name());
		std::cout << "|";
		reduce_print(Book[i].give_last_name());
		std::cout << "|";
		reduce_print(Book[i].give_nickname());
		std::cout << "|" << std::endl;
		i++;
	}
}

void	PhoneBook::print_contact(int i)
{
	std::cout << "First name : " << Book[i].give_first_name() << std::endl;
	std::cout << "Last name : " << Book[i].give_last_name() << std::endl;
	std::cout << "Nickname : " << Book[i].give_nickname() << std::endl;
	std::cout << "Phone_number : " << Book[i].give_phone_number() << std::endl;
	std::cout << "Darkest_secret : " << Book[i].give_darkest_secret() << std::endl;
}