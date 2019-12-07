/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 19:43:18 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/07 19:43:18 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::Ice(Ice const & cpy) : AMateria(cpy) {}

void	Ice::operator=(Ice const &cpy) {
	AMateria::operator=(cpy);
}

Ice::~Ice() {}

void	Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	AMateria::use(target);
}

Ice*	Ice::clone() const {
	return new Ice();
}
