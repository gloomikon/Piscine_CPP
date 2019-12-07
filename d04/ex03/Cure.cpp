/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 19:43:07 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/07 19:43:07 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::Cure(Cure const & cpy) : AMateria(cpy) {}

void	Cure::operator=(Cure const &cpy) {
	AMateria::operator=(cpy);
}

Cure::~Cure() {}

void	Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	AMateria::use(target);
}

Cure*	Cure::clone() const {
	return new Cure();
}
