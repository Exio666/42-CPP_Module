/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 19:48:12 by bsavinel          #+#    #+#             */
/*   Updated: 2022/06/07 10:52:09 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_TPP
# define EASYFIND_TPP

#include <iostream>

template <typename T>
int easyfind (T container, int nb)
{
	typename T::iterator iter;
	int i = 0;

	for (iter = container.begin(); iter != container.end(); iter++)
	{
		if (*iter == nb)
			return (i);
		i++;
	}
	return (-1);
}

#endif