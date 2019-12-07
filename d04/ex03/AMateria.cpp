/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 19:42:39 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/07 19:42:39 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : type_(type) {
	this->xp_ = 0;
}

AMateria::AMateria(AMateria const & cpy) {
	*this = cpy;
}

void	AMateria::operator=(AMateria const &cpy) {
	this->xp_ = cpy.getXP();
	this->type_ = cpy.getType();
}

AMateria::~AMateria() {}

std::string const &	AMateria::getType() const {
	return this->type_;
}

unsigned int	AMateria::getXP() const {
	return this->xp_;
}


void	AMateria::use(ICharacter& target) {
	this->xp_ += 10;
	(void)target;
}
