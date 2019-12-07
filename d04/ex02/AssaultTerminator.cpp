/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 19:40:06 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/07 19:40:06 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator() {
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const & sqd) {
	std::cout << "* teleports from space *" << std::endl;
	(void)sqd;
}

void	AssaultTerminator::operator=(AssaultTerminator const & sqd) {
	(void)sqd;
}

AssaultTerminator::~AssaultTerminator() {
	std::cout << "I'll be back ..." << std::endl;
}

AssaultTerminator*	AssaultTerminator::clone() const {
	return new AssaultTerminator(*this);
}

void	AssaultTerminator::battleCry() const {
	std::cout << "This code is unclean. PURIFY IT !" << std::endl;
}

void	AssaultTerminator::rangedAttack() const {
	std::cout << "* does nothing *" << std::endl;
}
void	AssaultTerminator::meleeAttack() const {
	std::cout << "* attacks with chainfists *" << std::endl;
}
