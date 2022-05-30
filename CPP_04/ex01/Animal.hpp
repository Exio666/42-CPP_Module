/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 16:26:37 by bsavinel          #+#    #+#             */
/*   Updated: 2022/05/30 11:00:59 by bsavinel         ###   ########.fr       */
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

		virtual void	makeSound() const;
		std::string		get_type() const;
		//virtual std::string	get_ideas(int i);
		//virtual void		set_ideas(int i, std::string think);
	protected:
		std::string type;
};

#endif