/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 10:54:01 by bsavinel          #+#    #+#             */
/*   Updated: 2022/06/07 15:21:05 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span    new_fill(15);
    new_fill.addNumber(-9);
    new_fill.addNumber(125);
    new_fill.addNumber(375);
    new_fill.addNumber(4865);
    new_fill.fillSpan(new_fill.getVector().begin(), new_fill.getVector().end());
    new_fill.printSpan(new_fill.getVector().begin(), new_fill.getVector().end());
}