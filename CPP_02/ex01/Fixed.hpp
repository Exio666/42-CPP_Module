/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 17:08:48 by bsavinel          #+#    #+#             */
/*   Updated: 2022/03/16 13:16:23 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Fixed
{
	public:
		Fixed();
		Fixed(const Fixed &copy);
		Fixed(const int nbr);
		Fixed(const float nbr);
		~Fixed();
		int getRawBits() const;
		void setRawBits(int const raw);
		float toFloat() const;
		int toInt() const;
		void operator=(const Fixed &copy);
	private:
		int raw;
		static const int bits_fracional_part = 8;
};

std::ostream &operator<<(std::ostream &stream, Fixed const &fixed);
