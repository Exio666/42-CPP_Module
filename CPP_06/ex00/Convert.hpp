/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 13:47:53 by bsavinel          #+#    #+#             */
/*   Updated: 2022/07/05 13:24:04 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <string>

class Convert
{
	public:
		Convert();
		Convert(const Convert & copy);
		Convert(std::string value);
		~Convert();

		Convert & operator=(const Convert & copy);
		bool isSpecial();
		void printSpecial();
		bool isChar();
		void printChar();
		bool isInt();
		void printInt();
		bool isFloat();
		void printFloat();
		bool isDouble();
		void printDouble();
		void printNothing();

	private:
		std::string _value;
};

#endif