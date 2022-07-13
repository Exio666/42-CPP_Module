/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 19:48:12 by bsavinel          #+#    #+#             */
/*   Updated: 2022/07/13 16:38:30 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <exception>
#include <iterator>


template <typename T>
typename T::iterator easyfind (T container, int nb)
{
	typename T::iterator tmp;
	
	tmp = std::find(container.begin(), container.end(), nb);
	if (tmp == container.end())
		throw std::exception();
	return tmp;
}

#endif