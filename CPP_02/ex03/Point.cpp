/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 13:10:33 by bsavinel          #+#    #+#             */
/*   Updated: 2022/05/25 16:10:55 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point()
{
	x = 0;
	y = 0;
}

Point::Point(float x, float y)
{
	this->x = x;
	this->y = y;
}

Point::Point(const Point &copy)
{
	x = copy.x;
	y = copy.y;
}

Point::~Point()
{

}

void Point::operator=(const Point &copy)
{
	x = copy.x;
	y = copy.y;
}

Fixed Point::get_x()
{
	return x;
}

Fixed Point::get_y()
{
	return y;
}