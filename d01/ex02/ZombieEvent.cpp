/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 22:14:13 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/04 22:15:50 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"


void	ZombieEvent::setZombieType(std::string type)
{
	this->type = type;
}

Zombie *ZombieEvent::newZombie(std::string name)
{
	return (new Zombie(name, this->type));
}

Zombie *ZombieEvent::randomChump()
{
	srand (time(0));
	int rndLen = rand() % 10 + 1;
	srand (time(0));
	std::string rndName = "";
	int i;
	for (i = 0; i < rndLen; i++)
	{
		char t = (char)(rand() % 25 + 97);
		rndName += t;
	}
	srand (time(0));
	return(newZombie(rndName));
}

ZombieEvent::ZombieEvent()
{
	this->type = "dsome typr";
}

ZombieEvent::ZombieEvent(std::string type)
{
	this->type = type;
}

ZombieEvent::~ZombieEvent()
{
}