/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 19:25:27 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/07 19:25:27 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21) {}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &cpy) : AWeapon("Plasma Rifle", 5, 21) {
	*this = cpy;
}

void	PlasmaRifle::operator=(const PlasmaRifle & cpy) {
	AWeapon::operator=(cpy);
}

PlasmaRifle::~PlasmaRifle() {}

void	PlasmaRifle::attack() const {
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
