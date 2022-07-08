/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 13:47:53 by bsavinel          #+#    #+#             */
/*   Updated: 2022/07/08 14:54:13 by bsavinel         ###   ########.fr       */
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


		bool	isGoodValue();
		void	print(std::ostream &stream) const;
	private:
		void	feedClass();
		std::string _value;
		bool		_goodValue;
		float		_float;
		int			_int;
		char		_char;
		double		_double;
		bool		_isSpecial;
		bool		_isChar;
};

std::ostream &operator<<(std::ostream &stream, Convert const &fixed);


#endif