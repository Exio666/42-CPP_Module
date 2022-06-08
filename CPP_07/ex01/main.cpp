/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 10:28:44 by bsavinel          #+#    #+#             */
/*   Updated: 2022/06/08 15:44:42 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.tpp"

/*//! Main correction
class Awesome
{
	public:
		Awesome( void ) : _n( 42 )
		{
			return;
		}
		int get( void ) const
		{
			return this->_n;
		}
	private:
		int _n;
};
std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
{
	o << rhs.get();
	return o;
}

template< typename T >
void print(T const & x)
{
	std::cout << x << std::endl;
	return;
}

int main() 
{
	int tab[] = { 0, 1, 2, 3, 4 };
	Awesome tab2[5];

	iter( tab, 5, print<int> );
	iter( tab2, 5, print<Awesome> );

	return 0;
}
*/

//! Main perso

void up_1(int &a)
{
	a = a + 1;
	return ;
}

int up_2(const int &a)
{
	return a;
}

int main()
{
	{
		int tab_int[8] = {0, 1, 2 ,3 ,4, 5, 6, 7};
		for (int i = 0; i < 8; i++)
		{
			std::cout << tab_int[i] << " ";
		}
		std::cout << std::endl;

		iter(tab_int, 8, &up_1);

		for (int i = 0; i < 8; i++)
		{
			std::cout << tab_int[i] << " ";
		}
		std::cout << std::endl;
	}
	{
		const int tab_int[8] = {0, 1, 2 ,3 ,4, 5, 6, 7};
		for (int i = 0; i < 8; i++)
		{
			std::cout << tab_int[i] << " ";
		}
		std::cout << std::endl;

		iter(tab_int, 8, &up_2);

		for (int i = 0; i < 8; i++)
		{
			std::cout << tab_int[i] << " ";
		}
		std::cout << std::endl;
	}
	{
		int tab_int[8] = {0, 1, 2 ,3 ,4, 5, 6, 7};
		for (int i = 0; i < 8; i++)
		{
			std::cout << tab_int[i] << " ";
		}
		std::cout << std::endl;

		iter(tab_int, 8, ft_print<int>);

		for (int i = 0; i < 8; i++)
		{
			std::cout << tab_int[i] << " ";
		}
		std::cout << std::endl;
	}
}