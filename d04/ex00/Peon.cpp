/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 19:17:21 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/07 19:17:21 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon &cpy) : Victim(cpy)
{
	*this = cpy;
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

void Peon::operator=(const Peon &cpy)
{
	this->name = cpy.getname();
}

void Peon::getPolymorphed() const
{
	std::cout << name << " has been turned into a pink pony !" << std::endl;
}

std::ostream &operator<<(std::ostream &o, const Peon &cpy)
{
	o << "I'm " << cpy.getname() << " and I like otters !" << std::endl;
	return o;
}
