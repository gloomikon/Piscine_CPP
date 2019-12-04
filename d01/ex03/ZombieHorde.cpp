/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 22:31:33 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/04 22:32:11 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

std::string ZombieHorde::randomName()
{
	int rndLen = rand() % 10 + 1;
	std::string rndName = "";
	int i;
	for (i = 0; i < rndLen; i++)
	{
		char t = (char)(rand() % 25 + 97);
		rndName += t;
	}
	return(rndName);
}

ZombieHorde::ZombieHorde()
{
	this->n = 1;
	this->horde = new Zombie[this->n];
	for (int i = 0; i < this->n; i++)
	{
		this->horde[i].setName(randomName());
	}
}

ZombieHorde::ZombieHorde(int n)
{
	this->n = n;
	this->horde = new Zombie[this->n];
	for (int i = 0; i < this->n; i++)
	{
		this->horde[i].setName(randomName());
	}
}

ZombieHorde::~ZombieHorde()
{
	delete[] this->horde;
}

void ZombieHorde::announce() const
{
	for(int i = 0; i < this->n; i++)
	{
		this->horde[i].announce();
	}
}
