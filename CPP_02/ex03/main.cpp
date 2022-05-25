/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 17:09:51 by bsavinel          #+#    #+#             */
/*   Updated: 2022/05/25 16:12:35 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point);

int	main()
{
	{
		Point	p1(0, 0);
		Point	p2(3, 0);
		Point	p3(0, 3);
		Point	p4(1, 1);

		if (bsp(p1, p2, p3, p4))
			std::cout << "Point x: " << p4.get_x() << " y: " << p4.get_y() << " is in the triangle" << std::endl;
		else
			std::cout << "Point x: " << p4.get_x() << " y: " << p4.get_y() << " is not in the triangle" << std::endl;
	}
	{
		Point	p1(0, 0);
		Point	p2(3, 0);
		Point	p3(0, 3);
		Point	p4(3, 3);

		if (bsp(p1, p2, p3, p4))
			std::cout << "Point x: " << p4.get_x() << " y: " << p4.get_y() << " is in the triangle" << std::endl;
		else
			std::cout << "Point x: " << p4.get_x() << " y: " << p4.get_y() << " is not in the triangle" << std::endl;
	}
	{
		Point	p1(0, 0);
		Point	p2(3, 0);
		Point	p3(0, 3);
		Point	p4(0, 3);

		if (bsp(p1, p2, p3, p4))
			std::cout << "Point x: " << p4.get_x() << " y: " << p4.get_y() << " is in the triangle" << std::endl;
		else
			std::cout << "Point x: " << p4.get_x() << " y: " << p4.get_y() << " is not in the triangle" << std::endl;
	}
}