/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 22:16:09 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/04 22:27:58 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int		main( void )
{
	ZombieEvent event("zombie event");
	Zombie *zombie1 = event.newZombie("ZOMBIE 1");
	event.setZombieType("super");
	Zombie *zombie2 = event.randomChump();

	std::cout << "Creating zomby on stack \n";
	Zombie z3;
	z3.announce();

	delete zombie1;
	delete zombie2;

	return 0;
}