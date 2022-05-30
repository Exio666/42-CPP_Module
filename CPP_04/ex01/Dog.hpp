/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 16:28:04 by bsavinel          #+#    #+#             */
/*   Updated: 2022/05/30 10:00:24 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
	public:
		Dog();
		Dog(const Dog & copy);

		~Dog();

		Dog & operator=(const Dog & copy);

		void		makeSound() const;
		void		set_ideas(int i, std::string think);
		std::string	get_ideas(int i);

	private:
		Brain	*brain;
};

#endif