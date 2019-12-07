/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 19:43:33 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/07 19:43:33 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATEIA_SOURE
#define IMATEIA_SOURE

#include "AMateria.hpp"

class IMateriaSource
{
public:
	virtual	~IMateriaSource() {}
	virtual	void learnMateria(AMateria*) = 0;
	virtual	AMateria* createMateria(std::string const & type) = 0;
};

#endif
