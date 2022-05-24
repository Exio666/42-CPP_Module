/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 17:08:48 by bsavinel          #+#    #+#             */
/*   Updated: 2022/05/24 18:12:09 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
	public:
		Fixed();
		Fixed(const Fixed &copy);
		~Fixed();
		
		void operator=(const Fixed &copy);

		int getRawBits() const;
		void setRawBits(int const raw);

	private:
		int raw;
		static const int bits_fracional_part = 8;
};
