/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 19:23:50 by bsavinel          #+#    #+#             */
/*   Updated: 2022/03/15 16:19:23 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

typedef void (*fptr)(void);

class Karen
{
	public:
		Karen();
		~Karen();
		void complain(std::string level);

	private:
		void debug() const;
		void info() const;
		void warning() const;
		void error() const;	
};
