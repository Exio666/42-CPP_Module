/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 15:53:14 by bsavinel          #+#    #+#             */
/*   Updated: 2022/05/30 15:55:43 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	public:
		MateriaSource();
		MateriaSource(const MateriaSource & copy);
		~MateriaSource();

		MateriaSource & operator=(const MateriaSource & copy);
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);

	private:
		AMateria	*source[4];
		int			nb_source;
};

#endif