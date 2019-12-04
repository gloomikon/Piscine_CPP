/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 22:51:46 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/04 22:53:54 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB()
{
	this->name = "unknown";
}

HumanB::HumanB(std::string name)
{
	this->name = name;
}

HumanB::~HumanB()
{
}

Weapon const &HumanB::getWeapon()
{
	return (*this->weapon);
}

void HumanB::setWeapon(Weapon &w)
{
	this->weapon = &w;
}

void HumanB::attack()
{
	std::cout << this->name << " attacks with his " << this->weapon->getType() << "\n";
}