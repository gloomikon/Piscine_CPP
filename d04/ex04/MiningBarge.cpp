/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MiningBarge.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 19:47:26 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/07 19:47:26 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MiningBarge.hpp"

MiningBarge::MiningBarge() {
	this->laser[0] = 0;
	this->laser[1] = 0;
	this->laser[2] = 0;
	this->laser[3] = 0;
}

MiningBarge::MiningBarge(MiningBarge const &bar) {
	*this = bar;
}

MiningBarge::~MiningBarge() {}

void	MiningBarge::operator=(MiningBarge const &bar) {
	for (int i = 0; i < 4; ++i) {
		this->laser[i] = bar.laser[i];
	}
}

void	MiningBarge::equip(IMiningLaser* las) {
	for (int i = 0; i < 4; ++i) {
		if (!this->laser[i]) {
			this->laser[i] = las;
			break ;
		}
	}
}

void	MiningBarge::mine(IAsteroid* ast) const {
	if (!this->laser[0]) {
		std::cout << "* Barge without lasers ! *" << std::endl;
		return ;
	}
	for (int i = 0; i < 4; ++i) {
		if (!this->laser[i])
			break ;
		this->laser[i]->mine(ast);
	}
}
