/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 19:17:49 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/07 19:17:49 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) : name(name), title(title)
{
	std::cout << name << ", " << title << ", is born !" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer &cpy)
{
	*this = cpy;
	std::cout << name << ", " << title << ", is born !" << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << name << ", " << title << ", is dead. Consequences will never be the same !" << std::endl;
}

std::string Sorcerer::getname() const
{
	return this->name;
}

std::string Sorcerer::gettitle() const
{
	return this->title;
}

void Sorcerer::operator=(const Sorcerer &cpy)
{
	this->name = cpy.name;
	this->title = cpy.title;
}

void Sorcerer::polymorph(Victim const &vic) const
{
	vic.getPolymorphed();
}

std::ostream &operator<<(std::ostream &o, const Sorcerer &cpy)
{
	o << "I am " << cpy.getname() << ", " << cpy.gettitle()
	  << ", and I like ponies !" << std::endl;
	return o;
}
