/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 19:26:14 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/07 19:26:14 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50) {}

PowerFist::PowerFist(PowerFist const &cpy) : AWeapon("Power Fist", 8, 50) {
	*this = cpy;
}

void	PowerFist::operator=(const PowerFist & cpy) {
	AWeapon::operator=(cpy);
}

PowerFist::~PowerFist() {}

void	PowerFist::attack() const {
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
