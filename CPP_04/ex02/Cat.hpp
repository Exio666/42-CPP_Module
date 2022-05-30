/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 16:29:14 by bsavinel          #+#    #+#             */
/*   Updated: 2022/05/30 10:11:14 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
	public:
		Cat();
		Cat(const Cat & copy);
		~Cat();

		Cat & operator=(const Cat & copy);

		void	makeSound() const;
		void	set_ideas(int i, std::string think);
		std::string	get_ideas(int i);

	private:
		Brain	*brain;
};

#endif