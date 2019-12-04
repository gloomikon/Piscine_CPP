/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 22:13:29 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/04 22:14:30 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

#include "Zombie.hpp"

class ZombieEvent
{
private:
	std::string type;

public:
	Zombie *newZombie(std::string name);
	void setZombieType(std::string type);
	Zombie *randomChump();
	ZombieEvent();
	ZombieEvent(std::string type);
	~ZombieEvent();
};

#endif