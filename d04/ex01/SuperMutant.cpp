/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 19:27:17 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/07 19:27:17 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant") {
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const &cpy) : Enemy(170, "Super Mutant") {
	*this = cpy;
}

void	SuperMutant::operator=(const SuperMutant & cpy) {
	Enemy::operator=(cpy);
}

SuperMutant::~SuperMutant() {
	std::cout << "Aaargh ..." << std::endl;
}

void	SuperMutant::takeDamage(int dmg) {
	Enemy::takeDamage(dmg - 3);
}
