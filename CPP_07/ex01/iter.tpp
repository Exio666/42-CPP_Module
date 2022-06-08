/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.tpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 10:30:19 by bsavinel          #+#    #+#             */
/*   Updated: 2022/06/08 14:48:56 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_TPP
# define ITER_TPP

template <typename T, typename F, typename P>
void iter(T *tab, int size, F (*f)(P))
{
	for (int i = 0; i < size; i++)
	{
		f(tab[i]);
	}
}

#endif

template <typename H>
void ft_print(H &s)
{
    std::cout << s << std::endl;
}