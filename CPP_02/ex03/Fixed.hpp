/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 17:08:48 by bsavinel          #+#    #+#             */
/*   Updated: 2022/05/25 11:29:36 by bsavinel         ###   ########.fr       */
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
		
		void operator=(const Fixed &copy);
		bool operator<(const Fixed &rhs);
		bool operator>(const Fixed &rhs);
		bool operator>=(const Fixed &rhs);
		bool operator<=(const Fixed &rhs);
		bool operator==(const Fixed &rhs);
		bool operator!=(const Fixed &rhs);
		Fixed operator+(const Fixed &rhs);
		Fixed operator/(const Fixed &rhs);
		Fixed operator*(const Fixed &rhs);
		Fixed operator-(const Fixed &rhs);
		Fixed& operator++();
		Fixed operator++(int);
		Fixed& operator--();
		Fixed operator--(int);
		
		static Fixed max(const Fixed &obj1, const Fixed &obj2);
		static Fixed min(const Fixed &obj1, const Fixed &obj2);
		static Fixed max(Fixed &obj1, Fixed &obj2);
		static Fixed min(Fixed &obj1, Fixed &obj2);
		int getRawBits() const;
		void setRawBits(int const raw);
		float toFloat() const;
		int toInt() const;

	private:
		int raw;
		static const int bits_fracional_part = 8;
};

std::ostream &operator<<(std::ostream &stream, Fixed const &fixed);
