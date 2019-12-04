/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 22:50:27 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/04 22:53:52 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA()
{
	this->name = "unknown";
}

HumanA::HumanA(std::string name, Weapon const & w)
{
	this->name = name;
	this->weapon = &(Weapon&)w;
}

HumanA::~HumanA()
{
}

Weapon const & HumanA::getWeapon()
{
	return (*this->weapon);
}

void HumanA::attack()
{
	std::cout << this->name << " attacks with his " << this->weapon->getType() << "\n";
}