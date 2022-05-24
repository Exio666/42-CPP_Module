/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 19:22:47 by bsavinel          #+#    #+#             */
/*   Updated: 2022/05/24 14:41:32 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

typedef void (*fptr)(void);

class Harl
{
	public:
		Harl();
		~Harl();
		void complain(std::string level);

	private:
		void debug() const;
		void info() const;
		void warning() const;
		void error() const;	
};
