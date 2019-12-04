/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 22:33:50 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/04 22:34:40 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int		main( void )
{
	srand(time(0));
	std::cout << "1 zombie:" << std::endl;
	ZombieHorde asd;
	asd.announce();
	std::cout << std::endl <<  "Many zombies:" << std::endl;
	ZombieHorde theHorde(7);
	theHorde.announce();
	return 0;
}