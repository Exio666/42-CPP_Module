/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 16:26:37 by bsavinel          #+#    #+#             */
/*   Updated: 2022/05/30 14:02:35 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>

class Animal
{
	public:
		Animal();
		Animal(const Animal & copy);
		virtual ~Animal();

		Animal & operator=(const Animal & copy);

		virtual void	makeSound() const = 0;
		std::string		get_type() const;
	
	protected:
		std::string type;
};

#endif