/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 19:43:55 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/07 19:43:55 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATEIA_SOURE
#define MATEIA_SOURE

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	AMateria	*mater[4];
	int			i;

public:
	MateriaSource();
	MateriaSource(MateriaSource const & cpy);
	void	operator=(MateriaSource const & cpy);
	~MateriaSource();
	void	learnMateria(AMateria* mat);
	AMateria* createMateria(std::string const & type);
};

#endif
