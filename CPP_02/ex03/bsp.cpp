/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 14:00:14 by bsavinel          #+#    #+#             */
/*   Updated: 2022/05/25 17:13:24 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Fixed	abs(Fixed nb)
{
	if (nb < Fixed(0))
		return (Fixed(nb.toFloat() * -1));
	return (nb);
}

Fixed	TriArea(Point p1, Point p2, Point p3)
{
	Fixed area;
	Fixed two(2);
	
	area = ((p1.get_x() - p3.get_x()) * (p2.get_y() - p3.get_y())) - ((p2.get_x() - p3.get_x()) * (p1.get_y() - p3.get_y()));
	return (area / two);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed area_tri;
	Fixed area_1;
	Fixed area_2;
	Fixed area_3;

	area_tri = abs(TriArea(a, b, c));
	area_1 = abs(TriArea(a, b, point));
	area_2 = abs(TriArea(a, point, c));
	area_3 = abs(TriArea(point, b, c));
	
	if((area_1 + area_2 + area_3) > area_tri || area_1 == 0 || area_2 == 0 || area_3 == 0)
		return false;
	else
		return true;
}