/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 15:22:09 by bsavinel          #+#    #+#             */
/*   Updated: 2022/06/06 19:34:49 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

# include <stddef.h>
# include <exception>

template <class T>
class Array
{
	public:
	
		Array();
		Array(unsigned int n);
		Array(const Array & copy);

		~Array();

		Array & operator=(const Array & copy);
	
		T& operator[](unsigned int idx);

		unsigned int	size();

	private:
		T				*_array;
		unsigned int	_size;
		bool			_is_allocate;
};

template <class T>
Array<T>::Array()
{
	_size = 0;
	_array = NULL;
	_is_allocate = false;
}

template <class T>
Array<T>::Array(const Array & copy)
{
	this->_is_allocate = false;
	*this = copy;
}

template <class T>
Array<T>::Array(unsigned int n)
{
	if (n == 0)
	{
		_size = 0;
		_array = NULL;
		_is_allocate = false;
	}
	else
	{
		_size = n;
		_is_allocate = true;
		_array = new T[n];
	}	
}

//!------------------------------DESTRUCTOR-----------------------------------

template <class T>
Array<T>::~Array()
{
	if (_is_allocate)
		delete [] _array;
}

//!------------------------------OPERATOR-------------------------------------

template <class T>
Array<T>	&Array<T>::operator=(const Array<T>& copy)
{	
	unsigned int i = 0;
	
	if (this->_is_allocate)
		delete [] this->_array;
	if (copy._is_allocate)
		this->_array = new T[copy._size];
	else
		this->_array = NULL;
	this->_is_allocate = copy._is_allocate;
	this->_size = copy._size;
	while (copy._is_allocate && i < this->_size)
	{
		this->_array[i] = copy._array[i];
		i++;
	}
	return(*this);
}

template <class T>
T& Array<T>::operator[](unsigned int idx)
{
	if (!_is_allocate || _size <= idx)
		throw std::exception();
	else
		return _array[idx];
}

//!------------------------------FUNCTION-------------------------------------

template <class T>
unsigned int	Array<T>::size()
{
	return _size;
}

#endif