/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 14:33:50 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/04 22:28:45 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

void Zombie::announce()
{
	std::cout << "<" << this->name << " (" << this->type << ")> Braiiiiiiinnnssss...\n";
}

Zombie::Zombie(std::string name, std::string type)
{
	this->name = name;
	this->type = type;
	announce();
}

Zombie::Zombie()
{
	this->name = "default name";
	this->type = "default type";
	announce();
}

Zombie::~Zombie()
{
	std::cout << "Zombie destructor for " << this->name << std::endl;
}