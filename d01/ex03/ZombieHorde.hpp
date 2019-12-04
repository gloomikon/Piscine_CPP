/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 22:30:57 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/04 22:31:13 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP

#include "Zombie.hpp"
#include <iostream>

class ZombieHorde
{
public:
	ZombieHorde();
	ZombieHorde(int n);
	~ZombieHorde();
	std::string randomName();
	void announce() const;

private:
	int n;
	Zombie *horde;
};

#endif