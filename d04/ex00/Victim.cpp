/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 19:18:12 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/07 19:18:12 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string name) : name(name) {
	std::cout << "Some random victim called " << name << " just popped !" << std::endl;
}

Victim::Victim(Victim &cpy) {
	*this = cpy;
	std::cout << "Some random victim called " << name << " just popped !" << std::endl;
}

Victim::~Victim() {
	std::cout << "Victim " << name << " just died for no apparent reason !" << std::endl;
}

std::string		Victim::getname() const {
	return this->name;
}

std::ostream	&operator<<(std::ostream &o, const Victim &cpy) {
	o << "I'm " << cpy.getname() << " and I like otters !" << std::endl;
	return o;
}

void			Victim::operator=(const Victim & cpy) {
	this->name = cpy.getname();
}

void			Victim::getPolymorphed() const {
	std::cout << name << " has been turned into a cute little sheep !" << std::endl;
}
