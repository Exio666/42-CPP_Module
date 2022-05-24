/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 16:20:46 by bsavinel          #+#    #+#             */
/*   Updated: 2022/05/24 12:51:12 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <string>
# include <iomanip>

void	reduce_print(std::string str);

class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();
		void	add_contact(int i);
		void	print_phonebook();
		void	print_contact(int i);
		int		number_of_contact();

	private:
		Contact	Book[8];
		int		nb_contact;
};

#endif