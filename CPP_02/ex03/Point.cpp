/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 13:10:33 by bsavinel          #+#    #+#             */
/*   Updated: 2022/06/09 16:38:47 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point()
{
	Fixed *tmp;
	tmp = const_cast <Fixed *>(&this->x);
	*tmp = 0;
	tmp = const_cast <Fixed *>(&this->y);
	*tmp = 0;

}

Point::Point(float x, float y)
{
	Fixed *tmp;
	tmp = const_cast <Fixed *>(&this->x);
	*tmp = x;
	tmp = const_cast <Fixed *>(&this->y);
	*tmp = y;
}

Point::Point(const Point &copy)
{
	*this = copy;
}

Point::~Point()
{

}

void Point::operator=(const Point &copy)
{
	Fixed *tmp;
	tmp = const_cast <Fixed *>(&this->x);
	*tmp = copy.x;
	tmp = const_cast <Fixed *>(&this->y);
	*tmp = copy.y;
}

Fixed Point::get_x()
{
	return x;
}

Fixed Point::get_y()
{
	return y;
}