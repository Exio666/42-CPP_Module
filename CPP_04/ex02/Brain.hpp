/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 09:40:15 by bsavinel          #+#    #+#             */
/*   Updated: 2022/05/30 09:57:36 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>

class Brain
{
	public:
		Brain();
		Brain(const Brain & copy);
		~Brain();

		Brain & operator=(const Brain & copy);
		void		set_ideas(int i, std::string think);
		std::string	get_ideas(int i);

	private:
		std::string	ideas[100];
};

#endif