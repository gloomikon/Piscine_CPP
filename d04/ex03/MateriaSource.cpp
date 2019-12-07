/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 19:43:49 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/07 19:43:49 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	this->i = 0;
}

MateriaSource::MateriaSource(MateriaSource const & cpy) {
	this->i = 0;
	*this = cpy;
}

void	MateriaSource::operator=(MateriaSource const & cpy) {
	if (this != &cpy) {
		this->i = cpy.i;
		for (int i = 0; i < this->i; ++i) {
			this->mater[i] = cpy.mater[i];
		}
	}
}

MateriaSource::~MateriaSource() {}

void	MateriaSource::learnMateria(AMateria* mat) {
	if (this->i < 3) {
		this->mater[this->i] = mat;
		this->i++;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < this->i; ++i) {
		if (type == this->mater[i]->getType())
			return this->mater[i];
	}
	return 0;
}
