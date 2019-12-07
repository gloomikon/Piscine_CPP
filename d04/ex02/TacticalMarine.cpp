/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 19:41:12 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/07 19:41:12 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine() {
	std::cout << "Tactical Marine ready for battle" << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const & sqd) {
	std::cout << "Tactical Marine ready for battle" << std::endl;
	(void)sqd;
}

void	TacticalMarine::operator=(TacticalMarine const & sqd) {
	(void)sqd;
}

TacticalMarine::~TacticalMarine() {
	std::cout << "Aaargh ..." << std::endl;
}

TacticalMarine*	TacticalMarine::clone() const {
	return new TacticalMarine(*this);
}

void	TacticalMarine::battleCry() const {
	std::cout << "For the holy PLOT !" << std::endl;
}

void	TacticalMarine::rangedAttack() const {
	std::cout << "* attacks with bolter *" << std::endl;
}
void	TacticalMarine::meleeAttack() const {
	std::cout << "* attacks with chainsword *" << std::endl;
}
