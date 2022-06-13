/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 13:04:19 by bsavinel          #+#    #+#             */
/*   Updated: 2022/06/09 16:26:55 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
	public:
		Point();
		Point(float x, float y);
		Point(const Point &copy);
		~Point();
		
		void operator=(const Point &copy);
		Fixed get_x();
		Fixed get_y();
	private:
		const Fixed x;
		const Fixed y;
};

#endif