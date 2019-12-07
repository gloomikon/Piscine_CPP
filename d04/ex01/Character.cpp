/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 19:24:03 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/07 19:24:03 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name) : name(name) {
	this->weap = 0;
	this->ap = 40;
}

Character::Character(Character const &cpy) {
	*this = cpy;
}

void	Character::operator=(const Character & cpy) {
	this->ap = cpy.ap;
	this->name = cpy.name;
	this->weap = (cpy.weap ? cpy.weap : 0);
}

Character::~Character() {}

std::string const &	Character::getName() const {
	return this->name;
}

int		Character::getAP() const {
	return this->ap;
}

AWeapon const *	Character::getWeapon() const {
	return this->weap;
}

void	Character::recoverAP() {
	this->ap = (this->ap > 30 ? 40 : this->ap + 10);
}

void	Character::equip(AWeapon *weapon) {
	this->weap = weapon;
}

void	Character::attack(Enemy *enemy) {
	if (this->weap) {
		if (this->ap > this->weap->getAPCost()) {
			this->ap -= this->weap->getAPCost();
			std::cout << this->name << " attacks " << enemy->getType() << " with a "
			<< this->weap->getName() << std::endl;
			this->weap->attack();
			enemy->takeDamage(this->weap->getDamage());
			if (enemy->getHP() < 1)
				enemy->~Enemy();
		}
	}
}

std::ostream	&operator<<(std::ostream &o, Character const & chr) {
	o << chr.getName() << " has " << chr.getAP() << " AP and ";
	if (chr.getWeapon())
		o << "wields a " << chr.getWeapon()->getName() << std::endl;
	else
		o << "is unarmed" << std::endl;
	return o;
}
