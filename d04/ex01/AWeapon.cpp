/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 19:23:35 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/07 19:23:35 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage) : name(name),
damage(damage), ap(apcost) {}

AWeapon::AWeapon(AWeapon const &cpy) {
	*this = cpy;
}

void	AWeapon::operator=(const AWeapon & cpy) {
	this->name = cpy.getName();
	this->damage = cpy.getDamage();
	this->ap = cpy.getAPCost();
}

AWeapon::~AWeapon() {}

std::string const &	AWeapon::getName() const {
	return this->name;
}

int				AWeapon::getAPCost() const {
	return this->ap;
}

int				AWeapon::getDamage() const {
	return this->damage;
}
