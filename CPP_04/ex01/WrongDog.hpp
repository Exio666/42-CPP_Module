/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 17:10:35 by bsavinel          #+#    #+#             */
/*   Updated: 2022/05/27 17:23:47 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGDOG_HPP
# define WRONGDOG_HPP

#include "WrongAnimal.hpp"

class WrongDog: public WrongAnimal
{
	public:
		WrongDog();
		WrongDog(const WrongDog & copy);

		~WrongDog();

		WrongDog & operator=(const WrongDog & copy);

		void	makeSound() const;
};

#endif