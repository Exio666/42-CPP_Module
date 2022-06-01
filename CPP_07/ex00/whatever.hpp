/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 10:16:39 by bsavinel          #+#    #+#             */
/*   Updated: 2022/06/01 10:22:30 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
void swap(T &a, T &b)
{
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T max(T a, T b)
{
	if (a > b)
		return a;
	else
		return b;
}

template <typename T>
T min(T a, T b)
{
	if (a < b)
		return a;
	else
		return b;
}