/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 19:24:35 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/07 19:24:35 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type) : hp(hp), type(type) {}

Enemy::Enemy(Enemy const &cpy) {
	*this = cpy;
}

void	Enemy::operator=(const Enemy & cpy) {
	this->hp = cpy.getHP();
	this->type = cpy.getType();
}

Enemy::~Enemy() {}

std::string const &	Enemy::getType() const {
	return this->type;
}

int				Enemy::getHP() const {
	return this->hp;
}

void	Enemy::takeDamage(int dmg) {
	if (dmg < 0)
		dmg = 0;
	if (this->hp > dmg)
		this->hp -= dmg;
	else
		this->hp = 0;
}
