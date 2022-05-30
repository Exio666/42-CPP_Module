/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 17:11:07 by bsavinel          #+#    #+#             */
/*   Updated: 2022/05/27 17:26:06 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <string>

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal & copy);
		virtual ~WrongAnimal();

		WrongAnimal & operator=(const WrongAnimal & copy);

		void			makeSound() const;
		std::string		get_type() const;
	protected:
		std::string type;
};

#endif